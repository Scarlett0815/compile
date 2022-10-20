%{ /* -*- C++ -*- */
# include <cerrno>
# include <climits>
# include <cstdlib>
# include <cstring> // strerror
# include <string>
# include <algorithm>
# include <iostream>
# include <map>
# include "sysyfDriver.h"
# include "sysyfParser.h"
%}

%{
#if defined __clang__
# define CLANG_VERSION (__clang_major__ * 100 + __clang_minor__)
#endif

// Clang and ICC like to pretend they are GCC.
#if defined __GNUC__ && !defined __clang__ && !defined __ICC
# define GCC_VERSION (__GNUC__ * 100 + __GNUC_MINOR__)
#endif

// Pacify warnings in yy_init_buffer (observed with Flex 2.6.4)
// and GCC 6.4.0, 7.3.0 with -O3.
#if defined GCC_VERSION && 600 <= GCC_VERSION
# pragma GCC diagnostic ignored "-Wnull-dereference"
#endif

// This code uses Flex's C backend, yet compiles it as C++.
// So expect warnings about C style casts and NULL.
#if defined CLANG_VERSION && 500 <= CLANG_VERSION
# pragma clang diagnostic ignored "-Wold-style-cast"
# pragma clang diagnostic ignored "-Wzero-as-null-pointer-constant"
#elif defined GCC_VERSION && 407 <= GCC_VERSION
# pragma GCC diagnostic ignored "-Wold-style-cast"
# pragma GCC diagnostic ignored "-Wzero-as-null-pointer-constant"
#endif

#define FLEX_VERSION (YY_FLEX_MAJOR_VERSION * 100 + YY_FLEX_MINOR_VERSION)

// Old versions of Flex (2.5.35) generate an incomplete documentation comment.
//
//  In file included from src/scan-code-c.c:3:
//  src/scan-code.c:2198:21: error: empty paragraph passed to '@param' command
//        [-Werror,-Wdocumentation]
//   * @param line_number
//     ~~~~~~~~~~~~~~~~~^
//  1 error generated.
#if FLEX_VERSION < 206 && defined CLANG_VERSION
# pragma clang diagnostic ignored "-Wdocumentation"
#endif

// Old versions of Flex (2.5.35) use 'register'.  Warnings introduced in
// GCC 7 and Clang 6.
#if FLEX_VERSION < 206
# if defined CLANG_VERSION && 600 <= CLANG_VERSION
#  pragma clang diagnostic ignored "-Wdeprecated-register"
# elif defined GCC_VERSION && 700 <= GCC_VERSION
#  pragma GCC diagnostic ignored "-Wregister"
# endif
#endif

#if FLEX_VERSION < 206
# if defined CLANG_VERSION
#  pragma clang diagnostic ignored "-Wconversion"
#  pragma clang diagnostic ignored "-Wdocumentation"
#  pragma clang diagnostic ignored "-Wshorten-64-to-32"
#  pragma clang diagnostic ignored "-Wsign-conversion"
# elif defined GCC_VERSION
#  pragma GCC diagnostic ignored "-Wconversion"
#  pragma GCC diagnostic ignored "-Wsign-conversion"
# endif
#endif
%}

%option noyywrap nounput noinput batch debug

%{
  // Code run each time a pattern is matched.
  # define YY_USER_ACTION  loc.columns(yyleng);
%}

/* Regex abbreviations: */
/********add regular expression for MultilineComment, HexConst, FloatConst, SingleLineComment********/
MultilineComment	     "/*"{A}*({C}{A}*|{B}|{C})*"*/"
Identifier              [_a-zA-Z][a-zA-Z0-9_]*
OctConst                ("0"[0-7]*)
DecConst                ([1-9][0-9]*)
Digit                   [0-9]
HexConst                ("0x"[a-fA-F0-9]*)
FloatConst [0-9]+([.][0-9]+)?(("e"|"E")([+-]?{DecConst})?)?
Blank                   [ \t\r]
NewLine                 [\n]
SingleLineComment	    "//"[^\n]*
A [/]
B [*]
C [^*/]
%%
 /* keyword */
"int"         {return yy::sysyfParser::make_INT(loc);}
"return"      {return yy::sysyfParser::make_RETURN(loc);}
"void"        {
                return yy::sysyfParser::make_VOID(loc);
            }
"const"       {
                return yy::sysyfParser::make_CONST(loc);
            }
"float"       {
                return yy::sysyfParser::make_FLOAT(loc);
            }
"if"          {
                return yy::sysyfParser::make_IF(loc);
            }
"while"       {
                return yy::sysyfParser::make_WHILE(loc);
            }
"break"       {
                return yy::sysyfParser::make_BREAK(loc);
            }
"continue"    {
                return yy::sysyfParser::make_CONTINUE(loc);
            }
"else"        {
                return yy::sysyfParser::make_ELSE(loc);
            }
"+"         {return yy::sysyfParser::make_PLUS(loc);}
"-"         {return yy::sysyfParser::make_MINUS(loc);}
"*"         {return yy::sysyfParser::make_MULTIPLY(loc);}
"/"         {return yy::sysyfParser::make_DIVIDE(loc);}
"%"         {return yy::sysyfParser::make_MODULO(loc);}
"="         {return yy::sysyfParser::make_ASSIGN(loc);}
";"         {return yy::sysyfParser::make_SEMICOLON(loc);}
","         {return yy::sysyfParser::make_COMMA(loc);}
"("         {return yy::sysyfParser::make_LPARENTHESE(loc);}
")"         {return yy::sysyfParser::make_RPARENTHESE(loc);}
"{"         {return yy::sysyfParser::make_LBRACE(loc);}
"}"         {return yy::sysyfParser::make_RBRACE(loc);}
"["         {return yy::sysyfParser::make_LBRACKET(loc);}
"]"         {return yy::sysyfParser::make_RBRACKET(loc);}
"!"         {return yy::sysyfParser::make_NOT(loc);}
"!="         {return yy::sysyfParser::make_NEQ(loc);}
"=="         {return yy::sysyfParser::make_EQ(loc);}
"<"         {return yy::sysyfParser::make_LT(loc);}
"<="         {return yy::sysyfParser::make_LTE(loc);}
">"         {return yy::sysyfParser::make_GT(loc);}
">="         {return yy::sysyfParser::make_GTE(loc);}
"&&"        {return yy::sysyfParser::make_LAND(loc);}
"||"       {return yy::sysyfParser::make_LOR(loc);}

{Digit}                 {
                            std::string oct = yytext;
                            return yy::sysyfParser::make_INTCONST(int(oct[0]-48),loc);
                        }

{Blank}+                {loc.step();}
{NewLine}+              {loc.lines(yyleng); loc.step();}
{MultilineComment}+     {loc.lines(yyleng); loc.step();}
{SingleLineComment}+    {loc.lines(yyleng); loc.step();}

{DecConst}              {
                            std::string dec = yytext;
                            unsigned sum = 0;
                            int len = dec.size();
                            for(int i = 0;i < len;i++){
                                auto a = dec[i];
                                sum = sum * 10 + a - 48;
                            }
                            return yy::sysyfParser::make_INTCONST(int(sum),loc);
                        }
{OctConst}              {
                            std::string oct = yytext;
                            unsigned sum = 0;
                            int len = oct.size();
                            for(int i = 1;i < len;i++){
                                auto a = oct[i];
                                sum  = sum * 8 + a - 48;
                            }
                            return yy::sysyfParser::make_INTCONST(int(sum),loc);
                        }
{HexConst}              {
                            std::string oct = yytext;
                            unsigned sum = 0;
                            int len = oct.size();
                            for(int i = 2;i < len;i++){
                                int temp = 48;
                                auto a = oct[i];
                                if ((int)a >= 97){
                                    temp = 87;
                                }
                                else if ((int)a >= 65){
                                    temp = 55;
                                }
                                else{
                                }
                                sum  = sum * 16 + a - temp;
                            }
                            return yy::sysyfParser::make_INTCONST(int(sum),loc);
                        }
{FloatConst}            {
                            std::string oct = yytext;
                            float sum = 0;
                            int sum1 = 0;
                            int len = oct.size();
                            int i;
                            int flag = 1;
                            for(i = 0;i < len;i++){
                                auto a = oct[i];
                                if ((char)a == '.'||(char)a == 'e' || (char)a == 'E'){
                                    break;
                                }
                                sum  = sum * 10 + a - 48;
                            }
                            if (oct[i] == '.'){
                                float signal = 0.1;
                                for (i = i + 1;i < len;i ++){
                                    auto a = oct[i];
                                    if ((char)a == 'e' || (char)a == 'E'){
                                        break;
                                    }
                                    sum = sum + signal * (a - 48);
                                    signal = signal / 10;
                                }
                            }
                            else if (oct[i] == 'E'||oct[i] == 'e'){
                                for (i = i + 1;i < len; i ++){
                                    auto a = oct[i];
                                    if ((char)a == '+'){
                                        flag = 1;
                                        continue;
                                    }
                                    else if ((char)a == '-'){
                                        flag = 0;
                                        continue;
                                    }
                                    sum1 = sum1 * 10 + a - 48;
                                }
                                for (int j = 0;j < sum1;j ++){
                                    if (flag)
                                        sum = sum * 10;
                                    else
                                        sum = sum / 10;
                                }
                            }
                            if (i != len){
                                for (i = i + 1;i < len; i ++){
                                    auto a = oct[i];
                                    if ((char)a == '+'){
                                        flag = 1;
                                        continue;
                                    }
                                    else if ((char)a == '-'){
                                        flag = 0;
                                        continue;
                                    }
                                    sum1 = sum1 * 10 + a - 48;
                                }
                                for (int j = 0;j < sum1;j ++){
                                    if (flag)
                                        sum = sum * 10;
                                    else
                                        sum = sum / 10;
                                }
                            }
                            return yy::sysyfParser::make_FLOATCONST(sum,loc);
                        }
{Identifier}            {
                            return yy::sysyfParser::make_IDENTIFIER(yytext, loc);
                        }
<<EOF>>                 {
                                return yy::sysyfParser::make_END(loc);
                        }
.                       {std::cout << "Error in scanner!" << '\n'; exit(1);}
%%

int yyFlexLexer::yylex() {
    std::cerr << "'int yyFlexLexer::yylex()' should never be called." << std::endl;
    exit(1);
}
