// A Bison parser, made by GNU Bison 3.7.6.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.





#include "sysyfParser.h"


// Unqualified %code blocks.
#line 35 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"

#include "sysyfDriver.h"
#define yylex driver.lexer.yylex

#line 51 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 143 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"

  /// Build a parser object.
  sysyfParser::sysyfParser (sysyfDriver& driver_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      driver (driver_yyarg)
  {}

  sysyfParser::~sysyfParser ()
  {}

  sysyfParser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | symbol kinds.  |
  `---------------*/



  // by_state.
  sysyfParser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  sysyfParser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  sysyfParser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  sysyfParser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  sysyfParser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  sysyfParser::symbol_kind_type
  sysyfParser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  sysyfParser::stack_symbol_type::stack_symbol_type ()
  {}

  sysyfParser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_CompUnit: // CompUnit
        value.YY_MOVE_OR_COPY< SyntaxTree::Assembly* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_Block: // Block
        value.YY_MOVE_OR_COPY< SyntaxTree::BlockStmt* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_Exp: // Exp
      case symbol_kind::S_Cond: // Cond
      case symbol_kind::S_UnaryExp: // UnaryExp
      case symbol_kind::S_MulExp: // MulExp
      case symbol_kind::S_AddExp: // AddExp
      case symbol_kind::S_RelExp: // RelExp
      case symbol_kind::S_EqExp: // EqExp
      case symbol_kind::S_LAndExp: // LAndExp
      case symbol_kind::S_LOrExp: // LOrExp
        value.YY_MOVE_OR_COPY< SyntaxTree::Expr* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FuncCallStmt: // FuncCallStmt
        value.YY_MOVE_OR_COPY< SyntaxTree::FuncCallStmt* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FuncDef: // FuncDef
        value.YY_MOVE_OR_COPY< SyntaxTree::FuncDef* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FuncFParamsComplete: // FuncFParamsComplete
      case symbol_kind::S_FuncFParams: // FuncFParams
        value.YY_MOVE_OR_COPY< SyntaxTree::FuncFParamList* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FuncFParam: // FuncFParam
        value.YY_MOVE_OR_COPY< SyntaxTree::FuncParam* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ConstInitVal: // ConstInitVal
      case symbol_kind::S_InitVal: // InitVal
        value.YY_MOVE_OR_COPY< SyntaxTree::InitVal* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_LVal: // LVal
        value.YY_MOVE_OR_COPY< SyntaxTree::LVal* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_Number: // Number
        value.YY_MOVE_OR_COPY< SyntaxTree::Literal* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_EXPLIST: // EXPLIST
      case symbol_kind::S_ParamVar: // ParamVar
      case symbol_kind::S_FuncRParams: // FuncRParams
      case symbol_kind::S_FuncRParamsComplete: // FuncRParamsComplete
        value.YY_MOVE_OR_COPY< SyntaxTree::PtrList<SyntaxTree::Expr> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_GlobalDecl: // GlobalDecl
        value.YY_MOVE_OR_COPY< SyntaxTree::PtrList<SyntaxTree::GlobalDef> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ConstInitValList: // ConstInitValList
      case symbol_kind::S_ConstInitValListComplete: // ConstInitValListComplete
      case symbol_kind::S_InitValList: // InitValList
      case symbol_kind::S_InitValListComplete: // InitValListComplete
        value.YY_MOVE_OR_COPY< SyntaxTree::PtrList<SyntaxTree::InitVal> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_BlockItemListComplete: // BlockItemListComplete
      case symbol_kind::S_BlockItemList: // BlockItemList
      case symbol_kind::S_BlockItem: // BlockItem
        value.YY_MOVE_OR_COPY< SyntaxTree::PtrList<SyntaxTree::Stmt> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_Decl: // Decl
      case symbol_kind::S_ConstDecl: // ConstDecl
      case symbol_kind::S_ConstDefList: // ConstDefList
      case symbol_kind::S_VarDecl: // VarDecl
      case symbol_kind::S_VarDefList: // VarDefList
        value.YY_MOVE_OR_COPY< SyntaxTree::PtrList<SyntaxTree::VarDef> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_OtherStmt: // OtherStmt
      case symbol_kind::S_Stmt: // Stmt
      case symbol_kind::S_MatchedStmt: // MatchedStmt
      case symbol_kind::S_OpenStmt: // OpenStmt
        value.YY_MOVE_OR_COPY< SyntaxTree::Stmt* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_BType: // BType
        value.YY_MOVE_OR_COPY< SyntaxTree::Type > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_UnaryCondOp: // UnaryCondOp
        value.YY_MOVE_OR_COPY< SyntaxTree::UnaryCondOp > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_UnaryOp: // UnaryOp
        value.YY_MOVE_OR_COPY< SyntaxTree::UnaryOp > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ConstDef: // ConstDef
      case symbol_kind::S_VarDef: // VarDef
        value.YY_MOVE_OR_COPY< SyntaxTree::VarDef* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FLOATCONST: // FLOATCONST
        value.YY_MOVE_OR_COPY< float > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INTCONST: // INTCONST
        value.YY_MOVE_OR_COPY< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  sysyfParser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_CompUnit: // CompUnit
        value.move< SyntaxTree::Assembly* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_Block: // Block
        value.move< SyntaxTree::BlockStmt* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_Exp: // Exp
      case symbol_kind::S_Cond: // Cond
      case symbol_kind::S_UnaryExp: // UnaryExp
      case symbol_kind::S_MulExp: // MulExp
      case symbol_kind::S_AddExp: // AddExp
      case symbol_kind::S_RelExp: // RelExp
      case symbol_kind::S_EqExp: // EqExp
      case symbol_kind::S_LAndExp: // LAndExp
      case symbol_kind::S_LOrExp: // LOrExp
        value.move< SyntaxTree::Expr* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FuncCallStmt: // FuncCallStmt
        value.move< SyntaxTree::FuncCallStmt* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FuncDef: // FuncDef
        value.move< SyntaxTree::FuncDef* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FuncFParamsComplete: // FuncFParamsComplete
      case symbol_kind::S_FuncFParams: // FuncFParams
        value.move< SyntaxTree::FuncFParamList* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FuncFParam: // FuncFParam
        value.move< SyntaxTree::FuncParam* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ConstInitVal: // ConstInitVal
      case symbol_kind::S_InitVal: // InitVal
        value.move< SyntaxTree::InitVal* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_LVal: // LVal
        value.move< SyntaxTree::LVal* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_Number: // Number
        value.move< SyntaxTree::Literal* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_EXPLIST: // EXPLIST
      case symbol_kind::S_ParamVar: // ParamVar
      case symbol_kind::S_FuncRParams: // FuncRParams
      case symbol_kind::S_FuncRParamsComplete: // FuncRParamsComplete
        value.move< SyntaxTree::PtrList<SyntaxTree::Expr> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_GlobalDecl: // GlobalDecl
        value.move< SyntaxTree::PtrList<SyntaxTree::GlobalDef> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ConstInitValList: // ConstInitValList
      case symbol_kind::S_ConstInitValListComplete: // ConstInitValListComplete
      case symbol_kind::S_InitValList: // InitValList
      case symbol_kind::S_InitValListComplete: // InitValListComplete
        value.move< SyntaxTree::PtrList<SyntaxTree::InitVal> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_BlockItemListComplete: // BlockItemListComplete
      case symbol_kind::S_BlockItemList: // BlockItemList
      case symbol_kind::S_BlockItem: // BlockItem
        value.move< SyntaxTree::PtrList<SyntaxTree::Stmt> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_Decl: // Decl
      case symbol_kind::S_ConstDecl: // ConstDecl
      case symbol_kind::S_ConstDefList: // ConstDefList
      case symbol_kind::S_VarDecl: // VarDecl
      case symbol_kind::S_VarDefList: // VarDefList
        value.move< SyntaxTree::PtrList<SyntaxTree::VarDef> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_OtherStmt: // OtherStmt
      case symbol_kind::S_Stmt: // Stmt
      case symbol_kind::S_MatchedStmt: // MatchedStmt
      case symbol_kind::S_OpenStmt: // OpenStmt
        value.move< SyntaxTree::Stmt* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_BType: // BType
        value.move< SyntaxTree::Type > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_UnaryCondOp: // UnaryCondOp
        value.move< SyntaxTree::UnaryCondOp > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_UnaryOp: // UnaryOp
        value.move< SyntaxTree::UnaryOp > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ConstDef: // ConstDef
      case symbol_kind::S_VarDef: // VarDef
        value.move< SyntaxTree::VarDef* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FLOATCONST: // FLOATCONST
        value.move< float > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INTCONST: // INTCONST
        value.move< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  sysyfParser::stack_symbol_type&
  sysyfParser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_CompUnit: // CompUnit
        value.copy< SyntaxTree::Assembly* > (that.value);
        break;

      case symbol_kind::S_Block: // Block
        value.copy< SyntaxTree::BlockStmt* > (that.value);
        break;

      case symbol_kind::S_Exp: // Exp
      case symbol_kind::S_Cond: // Cond
      case symbol_kind::S_UnaryExp: // UnaryExp
      case symbol_kind::S_MulExp: // MulExp
      case symbol_kind::S_AddExp: // AddExp
      case symbol_kind::S_RelExp: // RelExp
      case symbol_kind::S_EqExp: // EqExp
      case symbol_kind::S_LAndExp: // LAndExp
      case symbol_kind::S_LOrExp: // LOrExp
        value.copy< SyntaxTree::Expr* > (that.value);
        break;

      case symbol_kind::S_FuncCallStmt: // FuncCallStmt
        value.copy< SyntaxTree::FuncCallStmt* > (that.value);
        break;

      case symbol_kind::S_FuncDef: // FuncDef
        value.copy< SyntaxTree::FuncDef* > (that.value);
        break;

      case symbol_kind::S_FuncFParamsComplete: // FuncFParamsComplete
      case symbol_kind::S_FuncFParams: // FuncFParams
        value.copy< SyntaxTree::FuncFParamList* > (that.value);
        break;

      case symbol_kind::S_FuncFParam: // FuncFParam
        value.copy< SyntaxTree::FuncParam* > (that.value);
        break;

      case symbol_kind::S_ConstInitVal: // ConstInitVal
      case symbol_kind::S_InitVal: // InitVal
        value.copy< SyntaxTree::InitVal* > (that.value);
        break;

      case symbol_kind::S_LVal: // LVal
        value.copy< SyntaxTree::LVal* > (that.value);
        break;

      case symbol_kind::S_Number: // Number
        value.copy< SyntaxTree::Literal* > (that.value);
        break;

      case symbol_kind::S_EXPLIST: // EXPLIST
      case symbol_kind::S_ParamVar: // ParamVar
      case symbol_kind::S_FuncRParams: // FuncRParams
      case symbol_kind::S_FuncRParamsComplete: // FuncRParamsComplete
        value.copy< SyntaxTree::PtrList<SyntaxTree::Expr> > (that.value);
        break;

      case symbol_kind::S_GlobalDecl: // GlobalDecl
        value.copy< SyntaxTree::PtrList<SyntaxTree::GlobalDef> > (that.value);
        break;

      case symbol_kind::S_ConstInitValList: // ConstInitValList
      case symbol_kind::S_ConstInitValListComplete: // ConstInitValListComplete
      case symbol_kind::S_InitValList: // InitValList
      case symbol_kind::S_InitValListComplete: // InitValListComplete
        value.copy< SyntaxTree::PtrList<SyntaxTree::InitVal> > (that.value);
        break;

      case symbol_kind::S_BlockItemListComplete: // BlockItemListComplete
      case symbol_kind::S_BlockItemList: // BlockItemList
      case symbol_kind::S_BlockItem: // BlockItem
        value.copy< SyntaxTree::PtrList<SyntaxTree::Stmt> > (that.value);
        break;

      case symbol_kind::S_Decl: // Decl
      case symbol_kind::S_ConstDecl: // ConstDecl
      case symbol_kind::S_ConstDefList: // ConstDefList
      case symbol_kind::S_VarDecl: // VarDecl
      case symbol_kind::S_VarDefList: // VarDefList
        value.copy< SyntaxTree::PtrList<SyntaxTree::VarDef> > (that.value);
        break;

      case symbol_kind::S_OtherStmt: // OtherStmt
      case symbol_kind::S_Stmt: // Stmt
      case symbol_kind::S_MatchedStmt: // MatchedStmt
      case symbol_kind::S_OpenStmt: // OpenStmt
        value.copy< SyntaxTree::Stmt* > (that.value);
        break;

      case symbol_kind::S_BType: // BType
        value.copy< SyntaxTree::Type > (that.value);
        break;

      case symbol_kind::S_UnaryCondOp: // UnaryCondOp
        value.copy< SyntaxTree::UnaryCondOp > (that.value);
        break;

      case symbol_kind::S_UnaryOp: // UnaryOp
        value.copy< SyntaxTree::UnaryOp > (that.value);
        break;

      case symbol_kind::S_ConstDef: // ConstDef
      case symbol_kind::S_VarDef: // VarDef
        value.copy< SyntaxTree::VarDef* > (that.value);
        break;

      case symbol_kind::S_FLOATCONST: // FLOATCONST
        value.copy< float > (that.value);
        break;

      case symbol_kind::S_INTCONST: // INTCONST
        value.copy< int > (that.value);
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  sysyfParser::stack_symbol_type&
  sysyfParser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_CompUnit: // CompUnit
        value.move< SyntaxTree::Assembly* > (that.value);
        break;

      case symbol_kind::S_Block: // Block
        value.move< SyntaxTree::BlockStmt* > (that.value);
        break;

      case symbol_kind::S_Exp: // Exp
      case symbol_kind::S_Cond: // Cond
      case symbol_kind::S_UnaryExp: // UnaryExp
      case symbol_kind::S_MulExp: // MulExp
      case symbol_kind::S_AddExp: // AddExp
      case symbol_kind::S_RelExp: // RelExp
      case symbol_kind::S_EqExp: // EqExp
      case symbol_kind::S_LAndExp: // LAndExp
      case symbol_kind::S_LOrExp: // LOrExp
        value.move< SyntaxTree::Expr* > (that.value);
        break;

      case symbol_kind::S_FuncCallStmt: // FuncCallStmt
        value.move< SyntaxTree::FuncCallStmt* > (that.value);
        break;

      case symbol_kind::S_FuncDef: // FuncDef
        value.move< SyntaxTree::FuncDef* > (that.value);
        break;

      case symbol_kind::S_FuncFParamsComplete: // FuncFParamsComplete
      case symbol_kind::S_FuncFParams: // FuncFParams
        value.move< SyntaxTree::FuncFParamList* > (that.value);
        break;

      case symbol_kind::S_FuncFParam: // FuncFParam
        value.move< SyntaxTree::FuncParam* > (that.value);
        break;

      case symbol_kind::S_ConstInitVal: // ConstInitVal
      case symbol_kind::S_InitVal: // InitVal
        value.move< SyntaxTree::InitVal* > (that.value);
        break;

      case symbol_kind::S_LVal: // LVal
        value.move< SyntaxTree::LVal* > (that.value);
        break;

      case symbol_kind::S_Number: // Number
        value.move< SyntaxTree::Literal* > (that.value);
        break;

      case symbol_kind::S_EXPLIST: // EXPLIST
      case symbol_kind::S_ParamVar: // ParamVar
      case symbol_kind::S_FuncRParams: // FuncRParams
      case symbol_kind::S_FuncRParamsComplete: // FuncRParamsComplete
        value.move< SyntaxTree::PtrList<SyntaxTree::Expr> > (that.value);
        break;

      case symbol_kind::S_GlobalDecl: // GlobalDecl
        value.move< SyntaxTree::PtrList<SyntaxTree::GlobalDef> > (that.value);
        break;

      case symbol_kind::S_ConstInitValList: // ConstInitValList
      case symbol_kind::S_ConstInitValListComplete: // ConstInitValListComplete
      case symbol_kind::S_InitValList: // InitValList
      case symbol_kind::S_InitValListComplete: // InitValListComplete
        value.move< SyntaxTree::PtrList<SyntaxTree::InitVal> > (that.value);
        break;

      case symbol_kind::S_BlockItemListComplete: // BlockItemListComplete
      case symbol_kind::S_BlockItemList: // BlockItemList
      case symbol_kind::S_BlockItem: // BlockItem
        value.move< SyntaxTree::PtrList<SyntaxTree::Stmt> > (that.value);
        break;

      case symbol_kind::S_Decl: // Decl
      case symbol_kind::S_ConstDecl: // ConstDecl
      case symbol_kind::S_ConstDefList: // ConstDefList
      case symbol_kind::S_VarDecl: // VarDecl
      case symbol_kind::S_VarDefList: // VarDefList
        value.move< SyntaxTree::PtrList<SyntaxTree::VarDef> > (that.value);
        break;

      case symbol_kind::S_OtherStmt: // OtherStmt
      case symbol_kind::S_Stmt: // Stmt
      case symbol_kind::S_MatchedStmt: // MatchedStmt
      case symbol_kind::S_OpenStmt: // OpenStmt
        value.move< SyntaxTree::Stmt* > (that.value);
        break;

      case symbol_kind::S_BType: // BType
        value.move< SyntaxTree::Type > (that.value);
        break;

      case symbol_kind::S_UnaryCondOp: // UnaryCondOp
        value.move< SyntaxTree::UnaryCondOp > (that.value);
        break;

      case symbol_kind::S_UnaryOp: // UnaryOp
        value.move< SyntaxTree::UnaryOp > (that.value);
        break;

      case symbol_kind::S_ConstDef: // ConstDef
      case symbol_kind::S_VarDef: // VarDef
        value.move< SyntaxTree::VarDef* > (that.value);
        break;

      case symbol_kind::S_FLOATCONST: // FLOATCONST
        value.move< float > (that.value);
        break;

      case symbol_kind::S_INTCONST: // INTCONST
        value.move< int > (that.value);
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  sysyfParser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  sysyfParser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  sysyfParser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  sysyfParser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  sysyfParser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  sysyfParser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  sysyfParser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  sysyfParser::debug_level_type
  sysyfParser::debug_level () const
  {
    return yydebug_;
  }

  void
  sysyfParser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  sysyfParser::state_type
  sysyfParser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  sysyfParser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  sysyfParser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  sysyfParser::operator() ()
  {
    return parse ();
  }

  int
  sysyfParser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    // User initialization code.
#line 24 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
{
// Initialize the initial location.
yyla.location.begin.filename = yyla.location.end.filename = &driver.file;
}

#line 881 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (driver));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_CompUnit: // CompUnit
        yylhs.value.emplace< SyntaxTree::Assembly* > ();
        break;

      case symbol_kind::S_Block: // Block
        yylhs.value.emplace< SyntaxTree::BlockStmt* > ();
        break;

      case symbol_kind::S_Exp: // Exp
      case symbol_kind::S_Cond: // Cond
      case symbol_kind::S_UnaryExp: // UnaryExp
      case symbol_kind::S_MulExp: // MulExp
      case symbol_kind::S_AddExp: // AddExp
      case symbol_kind::S_RelExp: // RelExp
      case symbol_kind::S_EqExp: // EqExp
      case symbol_kind::S_LAndExp: // LAndExp
      case symbol_kind::S_LOrExp: // LOrExp
        yylhs.value.emplace< SyntaxTree::Expr* > ();
        break;

      case symbol_kind::S_FuncCallStmt: // FuncCallStmt
        yylhs.value.emplace< SyntaxTree::FuncCallStmt* > ();
        break;

      case symbol_kind::S_FuncDef: // FuncDef
        yylhs.value.emplace< SyntaxTree::FuncDef* > ();
        break;

      case symbol_kind::S_FuncFParamsComplete: // FuncFParamsComplete
      case symbol_kind::S_FuncFParams: // FuncFParams
        yylhs.value.emplace< SyntaxTree::FuncFParamList* > ();
        break;

      case symbol_kind::S_FuncFParam: // FuncFParam
        yylhs.value.emplace< SyntaxTree::FuncParam* > ();
        break;

      case symbol_kind::S_ConstInitVal: // ConstInitVal
      case symbol_kind::S_InitVal: // InitVal
        yylhs.value.emplace< SyntaxTree::InitVal* > ();
        break;

      case symbol_kind::S_LVal: // LVal
        yylhs.value.emplace< SyntaxTree::LVal* > ();
        break;

      case symbol_kind::S_Number: // Number
        yylhs.value.emplace< SyntaxTree::Literal* > ();
        break;

      case symbol_kind::S_EXPLIST: // EXPLIST
      case symbol_kind::S_ParamVar: // ParamVar
      case symbol_kind::S_FuncRParams: // FuncRParams
      case symbol_kind::S_FuncRParamsComplete: // FuncRParamsComplete
        yylhs.value.emplace< SyntaxTree::PtrList<SyntaxTree::Expr> > ();
        break;

      case symbol_kind::S_GlobalDecl: // GlobalDecl
        yylhs.value.emplace< SyntaxTree::PtrList<SyntaxTree::GlobalDef> > ();
        break;

      case symbol_kind::S_ConstInitValList: // ConstInitValList
      case symbol_kind::S_ConstInitValListComplete: // ConstInitValListComplete
      case symbol_kind::S_InitValList: // InitValList
      case symbol_kind::S_InitValListComplete: // InitValListComplete
        yylhs.value.emplace< SyntaxTree::PtrList<SyntaxTree::InitVal> > ();
        break;

      case symbol_kind::S_BlockItemListComplete: // BlockItemListComplete
      case symbol_kind::S_BlockItemList: // BlockItemList
      case symbol_kind::S_BlockItem: // BlockItem
        yylhs.value.emplace< SyntaxTree::PtrList<SyntaxTree::Stmt> > ();
        break;

      case symbol_kind::S_Decl: // Decl
      case symbol_kind::S_ConstDecl: // ConstDecl
      case symbol_kind::S_ConstDefList: // ConstDefList
      case symbol_kind::S_VarDecl: // VarDecl
      case symbol_kind::S_VarDefList: // VarDefList
        yylhs.value.emplace< SyntaxTree::PtrList<SyntaxTree::VarDef> > ();
        break;

      case symbol_kind::S_OtherStmt: // OtherStmt
      case symbol_kind::S_Stmt: // Stmt
      case symbol_kind::S_MatchedStmt: // MatchedStmt
      case symbol_kind::S_OpenStmt: // OpenStmt
        yylhs.value.emplace< SyntaxTree::Stmt* > ();
        break;

      case symbol_kind::S_BType: // BType
        yylhs.value.emplace< SyntaxTree::Type > ();
        break;

      case symbol_kind::S_UnaryCondOp: // UnaryCondOp
        yylhs.value.emplace< SyntaxTree::UnaryCondOp > ();
        break;

      case symbol_kind::S_UnaryOp: // UnaryOp
        yylhs.value.emplace< SyntaxTree::UnaryOp > ();
        break;

      case symbol_kind::S_ConstDef: // ConstDef
      case symbol_kind::S_VarDef: // VarDef
        yylhs.value.emplace< SyntaxTree::VarDef* > ();
        break;

      case symbol_kind::S_FLOATCONST: // FLOATCONST
        yylhs.value.emplace< float > ();
        break;

      case symbol_kind::S_INTCONST: // INTCONST
        yylhs.value.emplace< int > ();
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // Begin: CompUnit END
#line 139 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                    {
      yystack_[1].value.as < SyntaxTree::Assembly* > ()->loc = yylhs.location;
      driver.root = yystack_[1].value.as < SyntaxTree::Assembly* > ();
      return 0;
    }
#line 1141 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 3: // CompUnit: CompUnit GlobalDecl
#line 146 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                            {
		  yystack_[1].value.as < SyntaxTree::Assembly* > ()->global_defs.insert(yystack_[1].value.as < SyntaxTree::Assembly* > ()->global_defs.end(), yystack_[0].value.as < SyntaxTree::PtrList<SyntaxTree::GlobalDef> > ().begin(), yystack_[0].value.as < SyntaxTree::PtrList<SyntaxTree::GlobalDef> > ().end());
		  yylhs.value.as < SyntaxTree::Assembly* > ()=yystack_[1].value.as < SyntaxTree::Assembly* > ();
	  }
#line 1150 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 4: // CompUnit: GlobalDecl
#line 150 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                      {
		  yylhs.value.as < SyntaxTree::Assembly* > ()=new SyntaxTree::Assembly();
		  yylhs.value.as < SyntaxTree::Assembly* > ()->global_defs.insert(yylhs.value.as < SyntaxTree::Assembly* > ()->global_defs.end(), yystack_[0].value.as < SyntaxTree::PtrList<SyntaxTree::GlobalDef> > ().begin(), yystack_[0].value.as < SyntaxTree::PtrList<SyntaxTree::GlobalDef> > ().end());
    }
#line 1159 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 5: // GlobalDecl: Decl
#line 156 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                {
      yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::GlobalDef> > ()=SyntaxTree::PtrList<SyntaxTree::GlobalDef>();
      yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::GlobalDef> > ().insert(yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::GlobalDef> > ().end(),yystack_[0].value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > ().begin(),yystack_[0].value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > ().end());
    }
#line 1168 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 6: // GlobalDecl: FuncDef
#line 160 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
             {
      yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::GlobalDef> > ()=SyntaxTree::PtrList<SyntaxTree::GlobalDef>();
      yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::GlobalDef> > ().push_back(SyntaxTree::Ptr<SyntaxTree::GlobalDef>(yystack_[0].value.as < SyntaxTree::FuncDef* > ()));
    }
#line 1177 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 7: // Decl: ConstDecl
#line 166 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
               {
      yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > () = yystack_[0].value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > ();
    }
#line 1185 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 8: // Decl: VarDecl
#line 169 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
             {
      yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > () = yystack_[0].value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > ();
    }
#line 1193 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 9: // ConstDecl: CONST BType ConstDefList SEMICOLON
#line 174 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                             {
      yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > () = yystack_[1].value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > ();
      for (auto &node : yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > ()) {
        node -> is_constant = true;
        node -> btype = yystack_[2].value.as < SyntaxTree::Type > ();
      }
    }
#line 1205 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 10: // ConstDefList: ConstDefList COMMA ConstDef
#line 183 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                         {
      yystack_[2].value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > ().push_back(SyntaxTree::Ptr<SyntaxTree::VarDef>(yystack_[0].value.as < SyntaxTree::VarDef* > ()));
      yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > ()=yystack_[2].value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > ();
    }
#line 1214 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 11: // ConstDefList: ConstDef
#line 187 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
              {
      yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > ()=SyntaxTree::PtrList<SyntaxTree::VarDef>();
      yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > ().push_back(SyntaxTree::Ptr<SyntaxTree::VarDef>(yystack_[0].value.as < SyntaxTree::VarDef* > ()));
    }
#line 1223 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 12: // ConstDef: IDENTIFIER EXPLIST ASSIGN ConstInitVal
#line 193 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                                {
      yylhs.value.as < SyntaxTree::VarDef* > ()=new SyntaxTree::VarDef();
      yylhs.value.as < SyntaxTree::VarDef* > ()->is_inited = true;
      yylhs.value.as < SyntaxTree::VarDef* > () -> name = yystack_[3].value.as < std::string > ();
      yylhs.value.as < SyntaxTree::VarDef* > () -> array_length = yystack_[2].value.as < SyntaxTree::PtrList<SyntaxTree::Expr> > ();
      yylhs.value.as < SyntaxTree::VarDef* > () -> initializers = SyntaxTree::Ptr<SyntaxTree::InitVal>(yystack_[0].value.as < SyntaxTree::InitVal* > ());
      yylhs.value.as < SyntaxTree::VarDef* > ()->loc = yylhs.location;
    }
#line 1236 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 13: // EXPLIST: EXPLIST LBRACKET Exp RBRACKET
#line 203 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                     {
    yystack_[3].value.as < SyntaxTree::PtrList<SyntaxTree::Expr> > ().push_back(SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[1].value.as < SyntaxTree::Expr* > ()));
    yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::Expr> > () = yystack_[3].value.as < SyntaxTree::PtrList<SyntaxTree::Expr> > ();
  }
#line 1245 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 14: // EXPLIST: %empty
#line 207 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
           {
    yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::Expr> > () = SyntaxTree::PtrList<SyntaxTree::Expr>();
  }
#line 1253 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 15: // ConstInitVal: Exp
#line 212 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                {
      yylhs.value.as < SyntaxTree::InitVal* > () = new SyntaxTree::InitVal();
      yylhs.value.as < SyntaxTree::InitVal* > () -> isExp = true;
      yylhs.value.as < SyntaxTree::InitVal* > () -> expr = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[0].value.as < SyntaxTree::Expr* > ());
      yylhs.value.as < SyntaxTree::InitVal* > ()->loc = yylhs.location;
    }
#line 1264 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 16: // ConstInitVal: LBRACE ConstInitValListComplete RBRACE
#line 218 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                            {
      yylhs.value.as < SyntaxTree::InitVal* > () = new SyntaxTree::InitVal();
      yylhs.value.as < SyntaxTree::InitVal* > () -> isExp = false;
      yylhs.value.as < SyntaxTree::InitVal* > () -> elementList = yystack_[1].value.as < SyntaxTree::PtrList<SyntaxTree::InitVal> > ();
      yylhs.value.as < SyntaxTree::InitVal* > ()->loc = yylhs.location;
    }
#line 1275 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 17: // ConstInitValList: ConstInitValList COMMA ConstInitVal
#line 226 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                                     {
      yystack_[2].value.as < SyntaxTree::PtrList<SyntaxTree::InitVal> > ().push_back(SyntaxTree::Ptr<SyntaxTree::InitVal>(yystack_[0].value.as < SyntaxTree::InitVal* > ()));
      yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::InitVal> > () = yystack_[2].value.as < SyntaxTree::PtrList<SyntaxTree::InitVal> > ();
    }
#line 1284 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 18: // ConstInitValList: ConstInitVal
#line 230 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                 {
      yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::InitVal> > () = SyntaxTree::PtrList<SyntaxTree::InitVal>();
      yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::InitVal> > ().push_back(SyntaxTree::Ptr<SyntaxTree::InitVal>(yystack_[0].value.as < SyntaxTree::InitVal* > ()));
    }
#line 1293 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 19: // ConstInitValListComplete: ConstInitValList
#line 236 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                         {
      yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::InitVal> > () = yystack_[0].value.as < SyntaxTree::PtrList<SyntaxTree::InitVal> > ();
    }
#line 1301 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 20: // ConstInitValListComplete: %empty
#line 239 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
            {
      yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::InitVal> > () = SyntaxTree::PtrList<SyntaxTree::InitVal>();
    }
#line 1309 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 21: // BType: INT
#line 244 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
          {
      yylhs.value.as < SyntaxTree::Type > () = SyntaxTree::Type::INT;
    }
#line 1317 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 22: // BType: FLOAT
#line 247 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
           {
      yylhs.value.as < SyntaxTree::Type > () = SyntaxTree::Type::FLOAT;
    }
#line 1325 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 23: // VarDecl: BType VarDefList SEMICOLON
#line 252 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                  {
      yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > () = yystack_[1].value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > ();
      for (auto &node : yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > ()){
        node -> is_constant = false;
        node -> btype = yystack_[2].value.as < SyntaxTree::Type > ();
      }
    }
#line 1337 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 24: // VarDefList: VarDefList COMMA VarDef
#line 261 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                    {
      yystack_[2].value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > ().push_back(SyntaxTree::Ptr<SyntaxTree::VarDef>(yystack_[0].value.as < SyntaxTree::VarDef* > ()));
      yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > () = yystack_[2].value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > ();
    }
#line 1346 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 25: // VarDefList: VarDef
#line 265 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
            {
      yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > ()=SyntaxTree::PtrList<SyntaxTree::VarDef>();
      yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > ().push_back(SyntaxTree::Ptr<SyntaxTree::VarDef>(yystack_[0].value.as < SyntaxTree::VarDef* > ()));
    }
#line 1355 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 26: // VarDef: IDENTIFIER EXPLIST
#line 271 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                          {
      yylhs.value.as < SyntaxTree::VarDef* > () = new SyntaxTree::VarDef();
      yylhs.value.as < SyntaxTree::VarDef* > () -> name = yystack_[1].value.as < std::string > ();
      yylhs.value.as < SyntaxTree::VarDef* > () -> is_inited = false;
      yylhs.value.as < SyntaxTree::VarDef* > () -> array_length = yystack_[0].value.as < SyntaxTree::PtrList<SyntaxTree::Expr> > ();
      yylhs.value.as < SyntaxTree::VarDef* > () -> initializers = NULL;
      yylhs.value.as < SyntaxTree::VarDef* > ()->loc = yylhs.location;
    }
#line 1368 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 27: // VarDef: IDENTIFIER EXPLIST ASSIGN InitVal
#line 279 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                       {
      yylhs.value.as < SyntaxTree::VarDef* > () = new SyntaxTree::VarDef();
      yylhs.value.as < SyntaxTree::VarDef* > () -> name = yystack_[3].value.as < std::string > ();
      yylhs.value.as < SyntaxTree::VarDef* > () -> is_inited = true;
      yylhs.value.as < SyntaxTree::VarDef* > () -> array_length = yystack_[2].value.as < SyntaxTree::PtrList<SyntaxTree::Expr> > ();
      yylhs.value.as < SyntaxTree::VarDef* > () -> initializers = SyntaxTree::Ptr<SyntaxTree::InitVal>(yystack_[0].value.as < SyntaxTree::InitVal* > ());
      yylhs.value.as < SyntaxTree::VarDef* > ()->loc = yylhs.location;
    }
#line 1381 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 28: // InitVal: Exp
#line 289 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
           {
      yylhs.value.as < SyntaxTree::InitVal* > () = new SyntaxTree::InitVal();
      yylhs.value.as < SyntaxTree::InitVal* > () -> isExp = true;
      yylhs.value.as < SyntaxTree::InitVal* > () -> expr = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[0].value.as < SyntaxTree::Expr* > ());
      yylhs.value.as < SyntaxTree::InitVal* > ()->loc = yylhs.location;
    }
#line 1392 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 29: // InitVal: LBRACE InitValListComplete RBRACE
#line 295 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                       {
      yylhs.value.as < SyntaxTree::InitVal* > () = new SyntaxTree::InitVal();
      yylhs.value.as < SyntaxTree::InitVal* > () -> isExp = false;
      yylhs.value.as < SyntaxTree::InitVal* > () -> elementList = yystack_[1].value.as < SyntaxTree::PtrList<SyntaxTree::InitVal> > ();
      yylhs.value.as < SyntaxTree::InitVal* > ()->loc = yylhs.location;
    }
#line 1403 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 30: // InitValList: InitValList COMMA InitVal
#line 303 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                     {
      yystack_[2].value.as < SyntaxTree::PtrList<SyntaxTree::InitVal> > ().push_back(SyntaxTree::Ptr<SyntaxTree::InitVal>(yystack_[0].value.as < SyntaxTree::InitVal* > ()));
      yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::InitVal> > () = yystack_[2].value.as < SyntaxTree::PtrList<SyntaxTree::InitVal> > ();
  }
#line 1412 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 31: // InitValList: InitVal
#line 307 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
           {
      yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::InitVal> > () = SyntaxTree::PtrList<SyntaxTree::InitVal>();
      yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::InitVal> > ().push_back(SyntaxTree::Ptr<SyntaxTree::InitVal>(yystack_[0].value.as < SyntaxTree::InitVal* > ()));
  }
#line 1421 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 32: // InitValListComplete: InitValList
#line 313 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                               {
    yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::InitVal> > () = yystack_[0].value.as < SyntaxTree::PtrList<SyntaxTree::InitVal> > ();
  }
#line 1429 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 33: // InitValListComplete: %empty
#line 316 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
          {
    yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::InitVal> > () = SyntaxTree::PtrList<SyntaxTree::InitVal>();
  }
#line 1437 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 34: // FuncDef: VOID IDENTIFIER LPARENTHESE FuncFParamsComplete RPARENTHESE Block
#line 321 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                                                         {
    yylhs.value.as < SyntaxTree::FuncDef* > () = new SyntaxTree::FuncDef();
    yylhs.value.as < SyntaxTree::FuncDef* > () -> ret_type = SyntaxTree::Type::VOID;
    yylhs.value.as < SyntaxTree::FuncDef* > () -> name = yystack_[4].value.as < std::string > ();
    yylhs.value.as < SyntaxTree::FuncDef* > () -> body = SyntaxTree::Ptr<SyntaxTree::BlockStmt>(yystack_[0].value.as < SyntaxTree::BlockStmt* > ());
    yylhs.value.as < SyntaxTree::FuncDef* > () -> param_list = SyntaxTree::Ptr<SyntaxTree::FuncFParamList>(yystack_[2].value.as < SyntaxTree::FuncFParamList* > ());
    yylhs.value.as < SyntaxTree::FuncDef* > ()->loc = yylhs.location;
  }
#line 1450 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 35: // FuncDef: BType IDENTIFIER LPARENTHESE FuncFParamsComplete RPARENTHESE Block
#line 329 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                                                      {
    yylhs.value.as < SyntaxTree::FuncDef* > () = new SyntaxTree::FuncDef();
    yylhs.value.as < SyntaxTree::FuncDef* > () -> ret_type = yystack_[5].value.as < SyntaxTree::Type > ();
    yylhs.value.as < SyntaxTree::FuncDef* > () -> name = yystack_[4].value.as < std::string > ();
    yylhs.value.as < SyntaxTree::FuncDef* > () -> body = SyntaxTree::Ptr<SyntaxTree::BlockStmt>(yystack_[0].value.as < SyntaxTree::BlockStmt* > ());
    yylhs.value.as < SyntaxTree::FuncDef* > () -> param_list = SyntaxTree::Ptr<SyntaxTree::FuncFParamList>(yystack_[2].value.as < SyntaxTree::FuncFParamList* > ());
    yylhs.value.as < SyntaxTree::FuncDef* > ()->loc = yylhs.location;
  }
#line 1463 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 36: // FuncFParamsComplete: FuncFParams
#line 339 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                               {
    yylhs.value.as < SyntaxTree::FuncFParamList* > () = yystack_[0].value.as < SyntaxTree::FuncFParamList* > ();
  }
#line 1471 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 37: // FuncFParamsComplete: %empty
#line 342 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
          {
    yylhs.value.as < SyntaxTree::FuncFParamList* > () = new SyntaxTree::FuncFParamList();
    yylhs.value.as < SyntaxTree::FuncFParamList* > () -> params = SyntaxTree::PtrList<SyntaxTree::FuncParam>();
  }
#line 1480 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 38: // FuncFParams: FuncFParams COMMA FuncFParam
#line 348 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                         {
    yystack_[2].value.as < SyntaxTree::FuncFParamList* > () -> params.push_back(SyntaxTree::Ptr<SyntaxTree::FuncParam>(yystack_[0].value.as < SyntaxTree::FuncParam* > ()));
    yylhs.value.as < SyntaxTree::FuncFParamList* > () = yystack_[2].value.as < SyntaxTree::FuncFParamList* > ();
  }
#line 1489 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 39: // FuncFParams: FuncFParam
#line 352 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
              {
      yylhs.value.as < SyntaxTree::FuncFParamList* > () = new SyntaxTree::FuncFParamList();
      yylhs.value.as < SyntaxTree::FuncFParamList* > () -> params.push_back(SyntaxTree::Ptr<SyntaxTree::FuncParam>(yystack_[0].value.as < SyntaxTree::FuncParam* > ()));
  }
#line 1498 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 40: // FuncFParam: BType IDENTIFIER
#line 358 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                           {
    yylhs.value.as < SyntaxTree::FuncParam* > () = new SyntaxTree::FuncParam();
    yylhs.value.as < SyntaxTree::FuncParam* > () -> name = yystack_[0].value.as < std::string > ();
    yylhs.value.as < SyntaxTree::FuncParam* > () -> param_type = yystack_[1].value.as < SyntaxTree::Type > ();
  }
#line 1508 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 41: // FuncFParam: BType IDENTIFIER LBRACKET RBRACKET ParamVar
#line 363 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                              {
    yylhs.value.as < SyntaxTree::FuncParam* > () = new SyntaxTree::FuncParam();
    yylhs.value.as < SyntaxTree::FuncParam* > () -> name = yystack_[3].value.as < std::string > () + "[]";
    yylhs.value.as < SyntaxTree::FuncParam* > () -> param_type = yystack_[4].value.as < SyntaxTree::Type > ();
    yylhs.value.as < SyntaxTree::FuncParam* > () -> array_index = yystack_[0].value.as < SyntaxTree::PtrList<SyntaxTree::Expr> > ();
  }
#line 1519 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 42: // ParamVar: ParamVar LBRACKET Exp RBRACKET
#line 371 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                       {
    yystack_[3].value.as < SyntaxTree::PtrList<SyntaxTree::Expr> > ().push_back(SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[1].value.as < SyntaxTree::Expr* > ()));
    yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::Expr> > () = yystack_[3].value.as < SyntaxTree::PtrList<SyntaxTree::Expr> > ();
  }
#line 1528 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 43: // ParamVar: %empty
#line 375 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
          {
    yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::Expr> > () = SyntaxTree::PtrList<SyntaxTree::Expr>();
  }
#line 1536 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 44: // Block: LBRACE BlockItemListComplete RBRACE
#line 380 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                         {
    yylhs.value.as < SyntaxTree::BlockStmt* > () = new SyntaxTree::BlockStmt();
    yylhs.value.as < SyntaxTree::BlockStmt* > () -> body = yystack_[1].value.as < SyntaxTree::PtrList<SyntaxTree::Stmt> > ();
    yylhs.value.as < SyntaxTree::BlockStmt* > ()->loc = yylhs.location;
  }
#line 1546 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 45: // BlockItemListComplete: BlockItemList
#line 387 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                   {
    yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::Stmt> > () = yystack_[0].value.as < SyntaxTree::PtrList<SyntaxTree::Stmt> > ();
  }
#line 1554 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 46: // BlockItemListComplete: %empty
#line 390 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
          {
    yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::Stmt> > () = SyntaxTree::PtrList<SyntaxTree::Stmt>();
  }
#line 1562 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 47: // BlockItemList: BlockItemList BlockItem
#line 395 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                     {
    yystack_[1].value.as < SyntaxTree::PtrList<SyntaxTree::Stmt> > ().insert(yystack_[1].value.as < SyntaxTree::PtrList<SyntaxTree::Stmt> > ().end(), yystack_[0].value.as < SyntaxTree::PtrList<SyntaxTree::Stmt> > ().begin(), yystack_[0].value.as < SyntaxTree::PtrList<SyntaxTree::Stmt> > ().end());
    yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::Stmt> > () = yystack_[1].value.as < SyntaxTree::PtrList<SyntaxTree::Stmt> > ();
  }
#line 1571 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 48: // BlockItemList: BlockItem
#line 399 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
             {
    yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::Stmt> > () = SyntaxTree::PtrList<SyntaxTree::Stmt>();
    yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::Stmt> > ().insert(yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::Stmt> > ().end(), yystack_[0].value.as < SyntaxTree::PtrList<SyntaxTree::Stmt> > ().begin(), yystack_[0].value.as < SyntaxTree::PtrList<SyntaxTree::Stmt> > ().end());
  }
#line 1580 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 49: // BlockItem: Decl
#line 405 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
              {
    yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::Stmt> > () = SyntaxTree::PtrList<SyntaxTree::Stmt>();
    yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::Stmt> > ().insert(yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::Stmt> > ().end(), yystack_[0].value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > ().begin(), yystack_[0].value.as < SyntaxTree::PtrList<SyntaxTree::VarDef> > ().end());
  }
#line 1589 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 50: // BlockItem: Stmt
#line 409 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
        {
    yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::Stmt> > () = SyntaxTree::PtrList<SyntaxTree::Stmt>();
    yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::Stmt> > ().push_back(SyntaxTree::Ptr<SyntaxTree::Stmt>(yystack_[0].value.as < SyntaxTree::Stmt* > ()));
  }
#line 1598 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 51: // OtherStmt: LVal ASSIGN Exp SEMICOLON
#line 415 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                   {
    auto temp = new SyntaxTree::AssignStmt();
    temp->target = SyntaxTree::Ptr<SyntaxTree::LVal>(yystack_[3].value.as < SyntaxTree::LVal* > ());
    temp->value = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[1].value.as < SyntaxTree::Expr* > ());
    yylhs.value.as < SyntaxTree::Stmt* > () = temp;
    yylhs.value.as < SyntaxTree::Stmt* > ()->loc = yylhs.location;
  }
#line 1610 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 52: // OtherStmt: SEMICOLON
#line 422 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
             {
    yylhs.value.as < SyntaxTree::Stmt* > () = new SyntaxTree::EmptyStmt();
    yylhs.value.as < SyntaxTree::Stmt* > ()->loc = yylhs.location;
  }
#line 1619 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 53: // OtherStmt: Exp SEMICOLON
#line 426 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                 {
    auto temp = new SyntaxTree::ExprStmt();
    temp->exp = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[1].value.as < SyntaxTree::Expr* > ());
    yylhs.value.as < SyntaxTree::Stmt* > () = temp;
    yylhs.value.as < SyntaxTree::Stmt* > ()->loc = yylhs.location;
  }
#line 1630 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 54: // OtherStmt: Block
#line 432 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
         {
    yylhs.value.as < SyntaxTree::Stmt* > () = yystack_[0].value.as < SyntaxTree::BlockStmt* > ();
  }
#line 1638 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 55: // OtherStmt: BREAK SEMICOLON
#line 435 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                   {
    auto temp = new SyntaxTree::BreakStmt();
    yylhs.value.as < SyntaxTree::Stmt* > () = temp;
    yylhs.value.as < SyntaxTree::Stmt* > ()->loc = yylhs.location;
  }
#line 1648 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 56: // OtherStmt: CONTINUE SEMICOLON
#line 440 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                      {
    auto temp = new SyntaxTree::ContinueStmt();
    yylhs.value.as < SyntaxTree::Stmt* > () = temp;
    yylhs.value.as < SyntaxTree::Stmt* > ()->loc = yylhs.location;
  }
#line 1658 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 57: // OtherStmt: RETURN Exp SEMICOLON
#line 445 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                        {
    auto temp = new SyntaxTree::ReturnStmt();
    temp -> ret = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[1].value.as < SyntaxTree::Expr* > ());
    yylhs.value.as < SyntaxTree::Stmt* > () = temp;
    yylhs.value.as < SyntaxTree::Stmt* > ()->loc = yylhs.location;
  }
#line 1669 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 58: // OtherStmt: RETURN SEMICOLON
#line 451 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                    {
    auto temp = new SyntaxTree::ReturnStmt();
    temp -> ret = NULL;
    yylhs.value.as < SyntaxTree::Stmt* > () = temp;
    yylhs.value.as < SyntaxTree::Stmt* > ()->loc = yylhs.location;
  }
#line 1680 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 59: // Stmt: MatchedStmt
#line 459 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                 {
    yylhs.value.as < SyntaxTree::Stmt* > () = yystack_[0].value.as < SyntaxTree::Stmt* > ();
  }
#line 1688 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 60: // Stmt: OpenStmt
#line 462 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
            {
    yylhs.value.as < SyntaxTree::Stmt* > () = yystack_[0].value.as < SyntaxTree::Stmt* > ();
  }
#line 1696 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 61: // MatchedStmt: IF LPARENTHESE Cond RPARENTHESE MatchedStmt ELSE MatchedStmt
#line 466 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                                                         {
    auto temp = new SyntaxTree::IfStmt();
    temp -> cond_exp = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[4].value.as < SyntaxTree::Expr* > ());
    temp -> if_statement = SyntaxTree::Ptr<SyntaxTree::Stmt>(yystack_[2].value.as < SyntaxTree::Stmt* > ());
    temp -> else_statement = SyntaxTree::Ptr<SyntaxTree::Stmt>(yystack_[0].value.as < SyntaxTree::Stmt* > ());
    yylhs.value.as < SyntaxTree::Stmt* > () = temp;
    yylhs.value.as < SyntaxTree::Stmt* > ()->loc = yylhs.location;
  }
#line 1709 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 62: // MatchedStmt: WHILE LPARENTHESE Cond RPARENTHESE MatchedStmt
#line 474 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                                  {
    auto temp = new SyntaxTree::WhileStmt();
    temp -> cond_exp = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[2].value.as < SyntaxTree::Expr* > ());
    temp -> statement = SyntaxTree::Ptr<SyntaxTree::Stmt>(yystack_[0].value.as < SyntaxTree::Stmt* > ());
    yylhs.value.as < SyntaxTree::Stmt* > () = temp;
    yylhs.value.as < SyntaxTree::Stmt* > ()->loc = yylhs.location;
  }
#line 1721 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 63: // MatchedStmt: OtherStmt
#line 481 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
             {
    yylhs.value.as < SyntaxTree::Stmt* > () = yystack_[0].value.as < SyntaxTree::Stmt* > ();
  }
#line 1729 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 64: // OpenStmt: IF LPARENTHESE Cond RPARENTHESE Stmt
#line 484 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                              {
    auto temp = new SyntaxTree::IfStmt();
    temp -> cond_exp = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[2].value.as < SyntaxTree::Expr* > ());
    temp -> if_statement = SyntaxTree::Ptr<SyntaxTree::Stmt>(yystack_[0].value.as < SyntaxTree::Stmt* > ());
    temp -> else_statement = NULL;
    yylhs.value.as < SyntaxTree::Stmt* > () = temp;
    yylhs.value.as < SyntaxTree::Stmt* > ()->loc = yylhs.location;
  }
#line 1742 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 65: // OpenStmt: IF LPARENTHESE Cond RPARENTHESE MatchedStmt ELSE OpenStmt
#line 492 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                                             {
    auto temp = new SyntaxTree::IfStmt();
    temp -> cond_exp = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[4].value.as < SyntaxTree::Expr* > ());
    temp -> if_statement = SyntaxTree::Ptr<SyntaxTree::Stmt>(yystack_[2].value.as < SyntaxTree::Stmt* > ());
    temp -> else_statement = SyntaxTree::Ptr<SyntaxTree::Stmt>(yystack_[0].value.as < SyntaxTree::Stmt* > ());
    yylhs.value.as < SyntaxTree::Stmt* > () = temp;
    yylhs.value.as < SyntaxTree::Stmt* > ()->loc = yylhs.location;
  }
#line 1755 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 66: // OpenStmt: WHILE LPARENTHESE Cond RPARENTHESE OpenStmt
#line 500 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                               {
    auto temp = new SyntaxTree::WhileStmt();
    temp -> cond_exp = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[2].value.as < SyntaxTree::Expr* > ());
    temp -> statement = SyntaxTree::Ptr<SyntaxTree::Stmt>(yystack_[0].value.as < SyntaxTree::Stmt* > ());
    yylhs.value.as < SyntaxTree::Stmt* > () = temp;
    yylhs.value.as < SyntaxTree::Stmt* > ()->loc = yylhs.location;
  }
#line 1767 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 67: // Exp: AddExp
#line 510 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
          {
    yylhs.value.as < SyntaxTree::Expr* > () = yystack_[0].value.as < SyntaxTree::Expr* > ();
  }
#line 1775 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 68: // Cond: LOrExp
#line 514 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
           {
    yylhs.value.as < SyntaxTree::Expr* > () = yystack_[0].value.as < SyntaxTree::Expr* > ();
  }
#line 1783 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 69: // LVal: LVal LBRACKET Exp RBRACKET
#line 518 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                               {
    yystack_[3].value.as < SyntaxTree::LVal* > () -> array_index.push_back(SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[1].value.as < SyntaxTree::Expr* > ()));
    yylhs.value.as < SyntaxTree::LVal* > () = yystack_[3].value.as < SyntaxTree::LVal* > ();
  }
#line 1792 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 70: // LVal: IDENTIFIER
#line 522 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
              {
    yylhs.value.as < SyntaxTree::LVal* > () = new SyntaxTree::LVal();
    yylhs.value.as < SyntaxTree::LVal* > () -> name = yystack_[0].value.as < std::string > ();
    yylhs.value.as < SyntaxTree::LVal* > () -> array_index = SyntaxTree::PtrList<SyntaxTree::Expr>();
  }
#line 1802 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 71: // Number: INTCONST
#line 528 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
               {
    yylhs.value.as < SyntaxTree::Literal* > () = new SyntaxTree::Literal();
    yylhs.value.as < SyntaxTree::Literal* > () -> literal_type = SyntaxTree::Type::INT;
    yylhs.value.as < SyntaxTree::Literal* > () -> int_const = yystack_[0].value.as < int > ();
    yylhs.value.as < SyntaxTree::Literal* > ()->loc = yylhs.location;
  }
#line 1813 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 72: // Number: FLOATCONST
#line 534 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
              {
    yylhs.value.as < SyntaxTree::Literal* > () = new SyntaxTree::Literal();
    yylhs.value.as < SyntaxTree::Literal* > () -> literal_type = SyntaxTree::Type::FLOAT;
    yylhs.value.as < SyntaxTree::Literal* > () -> float_const = yystack_[0].value.as < float > ();
    yylhs.value.as < SyntaxTree::Literal* > ()->loc = yylhs.location;
  }
#line 1824 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 73: // UnaryExp: LPARENTHESE Exp RPARENTHESE
#line 542 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                    {
    yylhs.value.as < SyntaxTree::Expr* > () = yystack_[1].value.as < SyntaxTree::Expr* > ();
  }
#line 1832 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 74: // UnaryExp: LPARENTHESE Cond RPARENTHESE
#line 545 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                {
    yylhs.value.as < SyntaxTree::Expr* > () = yystack_[1].value.as < SyntaxTree::Expr* > ();
  }
#line 1840 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 75: // UnaryExp: LVal
#line 548 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
        {
    auto temp = new SyntaxTree::LVal();
    temp = yystack_[0].value.as < SyntaxTree::LVal* > ();
    yylhs.value.as < SyntaxTree::Expr* > () = temp;
  }
#line 1850 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 76: // UnaryExp: Number
#line 553 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
          {
    auto temp = new SyntaxTree::Literal();
    temp = yystack_[0].value.as < SyntaxTree::Literal* > ();
    yylhs.value.as < SyntaxTree::Expr* > () = temp;
  }
#line 1860 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 77: // UnaryExp: FuncCallStmt
#line 558 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                {
    auto temp = new SyntaxTree::FuncCallStmt();
    temp = yystack_[0].value.as < SyntaxTree::FuncCallStmt* > ();
    yylhs.value.as < SyntaxTree::Expr* > () = temp;
  }
#line 1870 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 78: // UnaryExp: UnaryOp UnaryExp
#line 563 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                    {
    auto temp = new SyntaxTree::UnaryExpr();
    temp -> op = yystack_[1].value.as < SyntaxTree::UnaryOp > ();
    temp -> rhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[0].value.as < SyntaxTree::Expr* > ());
    yylhs.value.as < SyntaxTree::Expr* > () = temp;
  }
#line 1881 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 79: // UnaryExp: UnaryCondOp UnaryExp
#line 569 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                        {
    auto temp = new SyntaxTree::UnaryCondExpr();
    temp -> op = yystack_[1].value.as < SyntaxTree::UnaryCondOp > ();
    temp -> rhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[0].value.as < SyntaxTree::Expr* > ());
    yylhs.value.as < SyntaxTree::Expr* > () = temp;
  }
#line 1892 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 80: // FuncCallStmt: IDENTIFIER LPARENTHESE FuncRParamsComplete RPARENTHESE
#line 577 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                                                    {
    yylhs.value.as < SyntaxTree::FuncCallStmt* > () = new SyntaxTree::FuncCallStmt();
    yylhs.value.as < SyntaxTree::FuncCallStmt* > () -> name = yystack_[3].value.as < std::string > ();
    yylhs.value.as < SyntaxTree::FuncCallStmt* > () -> params = yystack_[1].value.as < SyntaxTree::PtrList<SyntaxTree::Expr> > ();
  }
#line 1902 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 81: // UnaryOp: PLUS
#line 584 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
            {
    yylhs.value.as < SyntaxTree::UnaryOp > () = SyntaxTree::UnaryOp::PLUS;
  }
#line 1910 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 82: // UnaryOp: MINUS
#line 587 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
         {
    yylhs.value.as < SyntaxTree::UnaryOp > () = SyntaxTree::UnaryOp::MINUS;
  }
#line 1918 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 83: // UnaryCondOp: NOT
#line 591 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
               {
    yylhs.value.as < SyntaxTree::UnaryCondOp > () = SyntaxTree::UnaryCondOp::NOT;
  }
#line 1926 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 84: // FuncRParams: FuncRParams COMMA Exp
#line 595 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                 {
    yystack_[2].value.as < SyntaxTree::PtrList<SyntaxTree::Expr> > ().push_back(SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[0].value.as < SyntaxTree::Expr* > ()));
    yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::Expr> > () = yystack_[2].value.as < SyntaxTree::PtrList<SyntaxTree::Expr> > ();
  }
#line 1935 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 85: // FuncRParams: Exp
#line 599 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
       {
    yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::Expr> > () = SyntaxTree::PtrList<SyntaxTree::Expr>();
    yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::Expr> > ().push_back(SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[0].value.as < SyntaxTree::Expr* > ()));
  }
#line 1944 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 86: // FuncRParamsComplete: FuncRParams
#line 605 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                                {
    yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::Expr> > () = yystack_[0].value.as < SyntaxTree::PtrList<SyntaxTree::Expr> > ();
  }
#line 1952 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 87: // FuncRParamsComplete: %empty
#line 608 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
          {
    yylhs.value.as < SyntaxTree::PtrList<SyntaxTree::Expr> > () = SyntaxTree::PtrList<SyntaxTree::Expr>();
  }
#line 1960 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 88: // MulExp: UnaryExp
#line 612 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
               {
    yylhs.value.as < SyntaxTree::Expr* > () = yystack_[0].value.as < SyntaxTree::Expr* > ();
  }
#line 1968 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 89: // MulExp: MulExp MULTIPLY UnaryExp
#line 615 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                            {
    auto temp = new SyntaxTree::BinaryExpr();
    temp->op = SyntaxTree::BinOp::MULTIPLY;
    temp->lhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[2].value.as < SyntaxTree::Expr* > ());
    temp->rhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[0].value.as < SyntaxTree::Expr* > ());
    yylhs.value.as < SyntaxTree::Expr* > () = temp;
    yylhs.value.as < SyntaxTree::Expr* > ()->loc = yylhs.location;
  }
#line 1981 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 90: // MulExp: MulExp DIVIDE UnaryExp
#line 623 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                         {
    auto temp = new SyntaxTree::BinaryExpr();
    temp->op = SyntaxTree::BinOp::DIVIDE;
    temp->lhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[2].value.as < SyntaxTree::Expr* > ());
    temp->rhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[0].value.as < SyntaxTree::Expr* > ());
    yylhs.value.as < SyntaxTree::Expr* > () = temp;
    yylhs.value.as < SyntaxTree::Expr* > ()->loc = yylhs.location;
  }
#line 1994 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 91: // MulExp: MulExp MODULO UnaryExp
#line 631 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                         {
    auto temp = new SyntaxTree::BinaryExpr();
    temp->op = SyntaxTree::BinOp::MODULO;
    temp->lhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[2].value.as < SyntaxTree::Expr* > ());
    temp->rhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[0].value.as < SyntaxTree::Expr* > ());
    yylhs.value.as < SyntaxTree::Expr* > () = temp;
    yylhs.value.as < SyntaxTree::Expr* > ()->loc = yylhs.location;
  }
#line 2007 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 92: // AddExp: MulExp
#line 640 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
             {
    yylhs.value.as < SyntaxTree::Expr* > () = yystack_[0].value.as < SyntaxTree::Expr* > ();
  }
#line 2015 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 93: // AddExp: AddExp PLUS MulExp
#line 643 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                      {
    auto temp = new SyntaxTree::BinaryExpr();
    temp->op = SyntaxTree::BinOp::PLUS;
    temp->lhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[2].value.as < SyntaxTree::Expr* > ());
    temp->rhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[0].value.as < SyntaxTree::Expr* > ());
    yylhs.value.as < SyntaxTree::Expr* > () = temp;
    yylhs.value.as < SyntaxTree::Expr* > ()->loc = yylhs.location;
  }
#line 2028 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 94: // AddExp: AddExp MINUS MulExp
#line 651 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                      {
    auto temp = new SyntaxTree::BinaryExpr();
    temp->op = SyntaxTree::BinOp::MINUS;
    temp->lhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[2].value.as < SyntaxTree::Expr* > ());
    temp->rhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[0].value.as < SyntaxTree::Expr* > ());
    yylhs.value.as < SyntaxTree::Expr* > () = temp;
    yylhs.value.as < SyntaxTree::Expr* > ()->loc = yylhs.location;
  }
#line 2041 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 95: // RelExp: AddExp
#line 660 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
             {
    yylhs.value.as < SyntaxTree::Expr* > () = yystack_[0].value.as < SyntaxTree::Expr* > ();
  }
#line 2049 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 96: // RelExp: RelExp LT AddExp
#line 663 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                    {
    auto temp = new SyntaxTree::BinaryCondExpr();
    temp->op = SyntaxTree::BinaryCondOp::LT;
    temp->lhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[2].value.as < SyntaxTree::Expr* > ());
    temp->rhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[0].value.as < SyntaxTree::Expr* > ());
    yylhs.value.as < SyntaxTree::Expr* > () = temp;
    yylhs.value.as < SyntaxTree::Expr* > ()->loc = yylhs.location;
  }
#line 2062 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 97: // RelExp: RelExp GT AddExp
#line 671 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                   {
    auto temp = new SyntaxTree::BinaryCondExpr();
    temp->op = SyntaxTree::BinaryCondOp::GT;
    temp->lhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[2].value.as < SyntaxTree::Expr* > ());
    temp->rhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[0].value.as < SyntaxTree::Expr* > ());
    yylhs.value.as < SyntaxTree::Expr* > () = temp;
    yylhs.value.as < SyntaxTree::Expr* > ()->loc = yylhs.location;
  }
#line 2075 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 98: // RelExp: RelExp LTE AddExp
#line 679 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                    {
    auto temp = new SyntaxTree::BinaryCondExpr();
    temp->op = SyntaxTree::BinaryCondOp::LTE;
    temp->lhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[2].value.as < SyntaxTree::Expr* > ());
    temp->rhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[0].value.as < SyntaxTree::Expr* > ());
    yylhs.value.as < SyntaxTree::Expr* > () = temp;
    yylhs.value.as < SyntaxTree::Expr* > ()->loc = yylhs.location;
  }
#line 2088 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 99: // RelExp: RelExp GTE AddExp
#line 687 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                    {
    auto temp = new SyntaxTree::BinaryCondExpr();
    temp->op = SyntaxTree::BinaryCondOp::GTE;
    temp->lhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[2].value.as < SyntaxTree::Expr* > ());
    temp->rhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[0].value.as < SyntaxTree::Expr* > ());
    yylhs.value.as < SyntaxTree::Expr* > () = temp;
    yylhs.value.as < SyntaxTree::Expr* > ()->loc = yylhs.location;
  }
#line 2101 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 100: // EqExp: RelExp
#line 696 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
            {
    yylhs.value.as < SyntaxTree::Expr* > () = yystack_[0].value.as < SyntaxTree::Expr* > ();
  }
#line 2109 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 101: // EqExp: EqExp EQ RelExp
#line 699 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                   {
    auto temp = new SyntaxTree::BinaryCondExpr();
    temp->op = SyntaxTree::BinaryCondOp::EQ;
    temp->lhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[2].value.as < SyntaxTree::Expr* > ());
    temp->rhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[0].value.as < SyntaxTree::Expr* > ());
    yylhs.value.as < SyntaxTree::Expr* > () = temp;
    yylhs.value.as < SyntaxTree::Expr* > ()->loc = yylhs.location;
  }
#line 2122 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 102: // EqExp: EqExp NEQ RelExp
#line 707 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                   {
    auto temp = new SyntaxTree::BinaryCondExpr();
    temp->op = SyntaxTree::BinaryCondOp::NEQ;
    temp->lhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[2].value.as < SyntaxTree::Expr* > ());
    temp->rhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[0].value.as < SyntaxTree::Expr* > ());
    yylhs.value.as < SyntaxTree::Expr* > () = temp;
    yylhs.value.as < SyntaxTree::Expr* > ()->loc = yylhs.location;
  }
#line 2135 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 103: // LAndExp: EqExp
#line 716 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
             {
    yylhs.value.as < SyntaxTree::Expr* > () = yystack_[0].value.as < SyntaxTree::Expr* > ();
  }
#line 2143 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 104: // LAndExp: LAndExp LAND EqExp
#line 719 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                      {
    auto temp = new SyntaxTree::BinaryCondExpr();
    temp->op = SyntaxTree::BinaryCondOp::LAND;
    temp->lhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[2].value.as < SyntaxTree::Expr* > ());
    temp->rhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[0].value.as < SyntaxTree::Expr* > ());
    yylhs.value.as < SyntaxTree::Expr* > () = temp;
    yylhs.value.as < SyntaxTree::Expr* > ()->loc = yylhs.location;
  }
#line 2156 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 105: // LOrExp: LAndExp
#line 728 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
              {
    yylhs.value.as < SyntaxTree::Expr* > () = yystack_[0].value.as < SyntaxTree::Expr* > ();
  }
#line 2164 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;

  case 106: // LOrExp: LOrExp LOR LAndExp
#line 731 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"
                      {
    auto temp = new SyntaxTree::BinaryCondExpr();
    temp->op = SyntaxTree::BinaryCondOp::LOR;
    temp->lhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[2].value.as < SyntaxTree::Expr* > ());
    temp->rhs = SyntaxTree::Ptr<SyntaxTree::Expr>(yystack_[0].value.as < SyntaxTree::Expr* > ());
    yylhs.value.as < SyntaxTree::Expr* > () = temp;
    yylhs.value.as < SyntaxTree::Expr* > ()->loc = yylhs.location;
  }
#line 2177 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"
    break;


#line 2181 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  sysyfParser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  sysyfParser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
  sysyfParser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // sysyfParser::context.
  sysyfParser::context::context (const sysyfParser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  sysyfParser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        int yychecklim = yylast_ - yyn + 1;
        int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }



  int
  sysyfParser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  sysyfParser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short sysyfParser::yypact_ninf_ = -138;

  const signed char sysyfParser::yytable_ninf_ = -68;

  const short
  sysyfParser::yypact_[] =
  {
      59,  -138,  -138,    18,    63,    25,    55,  -138,  -138,  -138,
      20,  -138,  -138,    62,    74,  -138,  -138,  -138,    68,    85,
    -138,    63,  -138,    96,  -138,    63,    -4,  -138,    82,   105,
      89,    65,  -138,     2,  -138,    74,   100,    80,   153,  -138,
    -138,   107,   110,    63,   132,  -138,   110,  -138,  -138,  -138,
    -138,   153,    80,   126,  -138,  -138,  -138,   124,  -138,  -138,
    -138,   153,   153,    43,   114,   125,   134,   111,  -138,  -138,
     132,  -138,  -138,  -138,   146,   151,    35,    54,    64,   138,
     141,  -138,   145,   154,   153,   153,  -138,  -138,   153,   153,
     153,   153,   153,  -138,  -138,  -138,   143,   161,   162,   165,
     166,  -138,    82,  -138,   163,   111,  -138,  -138,  -138,  -138,
    -138,   167,    14,  -138,   168,   169,  -138,  -138,   153,   153,
     153,   153,   153,   153,   153,   153,    80,  -138,  -138,   170,
     172,   160,  -138,  -138,  -138,    43,    43,   164,  -138,   176,
     153,   153,  -138,  -138,  -138,  -138,  -138,   153,   132,  -138,
     114,   114,   114,   114,   114,    54,    54,    64,   138,  -138,
     153,  -138,  -138,   153,  -138,   174,   175,   179,  -138,  -138,
     171,     8,     8,  -138,  -138,  -138,  -138,  -138,   157,     8,
    -138,  -138
  };

  const signed char
  sysyfParser::yydefact_[] =
  {
       0,    21,    22,     0,     0,     0,     0,     4,     5,     7,
       0,     8,     6,     0,     0,     1,     2,     3,    14,     0,
      25,    37,    14,     0,    11,    37,    26,    23,     0,     0,
       0,    36,    39,     0,     9,     0,     0,     0,     0,    14,
      24,    40,     0,     0,     0,    10,     0,    71,    72,    81,
      82,     0,    33,    70,    83,    27,    28,    75,    76,    88,
      77,     0,     0,    92,    67,     0,     0,    46,    34,    38,
      20,    12,    15,    35,     0,     0,    95,   100,   103,   105,
      68,    31,    32,     0,    87,     0,    78,    79,     0,     0,
       0,     0,     0,    13,    43,    52,     0,     0,     0,     0,
       0,    49,     0,    54,     0,    45,    48,    63,    50,    59,
      60,     0,    75,    18,    19,     0,    73,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    85,    86,
       0,     0,    89,    90,    91,    93,    94,    41,    58,     0,
       0,     0,    55,    56,    44,    47,    53,     0,     0,    16,
      96,    97,    98,    99,    95,   102,   101,   104,   106,    30,
       0,    80,    69,     0,    57,     0,     0,     0,    17,    84,
       0,     0,     0,    51,    42,    62,    66,    64,    59,     0,
      61,    65
  };

  const short
  sysyfParser::yypgoto_[] =
  {
    -138,  -138,  -138,   190,   -61,  -138,  -138,   173,   177,   -67,
    -138,  -138,     4,  -138,  -138,   178,   -43,  -138,  -138,  -138,
     180,  -138,   155,  -138,   -26,  -138,  -138,    95,  -138,    29,
    -119,  -137,   -37,     5,   -65,  -138,   -39,  -138,  -138,  -138,
    -138,  -138,    77,   -46,    50,    78,    79,  -138
  };

  const unsigned char
  sysyfParser::yydefgoto_[] =
  {
       0,     5,     6,     7,     8,     9,    23,    24,    26,    71,
     114,   115,    29,    11,    19,    20,    55,    82,    83,    12,
      30,    31,    32,   137,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    75,    57,    58,    59,    60,    61,    62,
     129,   130,    63,    64,    77,    78,    79,    80
  };

  const short
  sysyfParser::yytable_[] =
  {
      56,    65,   112,   113,    10,    76,   101,    72,    14,    81,
      10,    37,    47,    48,    74,    56,    68,    44,    49,    50,
      73,    38,    86,    87,    95,    15,    51,    38,    67,   147,
      96,    53,    54,    72,   176,    97,    98,    99,   100,    85,
     112,    13,   181,    18,   101,    91,    92,   128,   131,   132,
     133,   134,   175,   178,   -67,    88,    89,    90,    16,   139,
     180,     1,     2,     3,     4,     1,     2,     3,     4,     1,
       2,   102,   150,   151,   152,   153,   154,   154,   154,   154,
      21,   168,    43,   159,    47,    48,    25,   118,   119,    56,
      49,    50,   120,   121,   154,   154,   122,    22,    51,   123,
      52,    27,    28,    53,    54,    39,   112,   112,    42,   102,
     167,    72,    34,    35,   112,    47,    48,     1,     2,    46,
       4,    49,    50,   169,    91,    92,   170,    95,    41,    51,
      67,    67,    66,    96,    53,    54,    47,    48,    97,    98,
      99,   100,    49,    50,    84,   165,   166,    47,    48,    85,
      51,    93,    70,    49,    50,    53,    54,    47,    48,   138,
      94,    51,   126,    49,    50,   116,    53,    54,   135,   136,
     117,    51,   155,   156,   124,   127,    53,    54,   125,   140,
     141,   142,   143,   146,   144,   148,   162,   160,   179,   163,
     149,   161,   164,   171,   172,   173,    17,   174,    69,    33,
     145,   177,   157,     0,   158,    36,    40,     0,    45
  };

  const short
  sysyfParser::yycheck_[] =
  {
      37,    38,    67,    70,     0,    51,    67,    44,     4,    52,
       6,    15,     4,     5,    51,    52,    42,    15,    10,    11,
      46,    25,    61,    62,    16,     0,    18,    25,    20,    15,
      22,    23,    24,    70,   171,    27,    28,    29,    30,    25,
     105,    23,   179,    23,   105,    10,    11,    84,    85,    88,
      89,    90,   171,   172,    19,    12,    13,    14,     3,    96,
     179,     6,     7,     8,     9,     6,     7,     8,     9,     6,
       7,    67,   118,   119,   120,   121,   122,   123,   124,   125,
      18,   148,    17,   126,     4,     5,    18,    33,    34,   126,
      10,    11,    38,    39,   140,   141,    32,    23,    18,    35,
      20,    16,    17,    23,    24,    23,   171,   172,    19,   105,
     147,   148,    16,    17,   179,     4,     5,     6,     7,    19,
       9,    10,    11,   160,    10,    11,   163,    16,    23,    18,
      20,    20,    25,    22,    23,    24,     4,     5,    27,    28,
      29,    30,    10,    11,    18,   140,   141,     4,     5,    25,
      18,    26,    20,    10,    11,    23,    24,     4,     5,    16,
      26,    18,    17,    10,    11,    19,    23,    24,    91,    92,
      19,    18,   122,   123,    36,    21,    23,    24,    37,    18,
      18,    16,    16,    16,    21,    17,    26,    17,    31,    25,
      21,    19,    16,    19,    19,    16,     6,    26,    43,    22,
     105,   172,   124,    -1,   125,    25,    28,    -1,    35
  };

  const signed char
  sysyfParser::yystos_[] =
  {
       0,     6,     7,     8,     9,    41,    42,    43,    44,    45,
      52,    53,    59,    23,    52,     0,     3,    43,    23,    54,
      55,    18,    23,    46,    47,    18,    48,    16,    17,    52,
      60,    61,    62,    48,    16,    17,    60,    15,    25,    23,
      55,    23,    19,    17,    15,    47,    19,     4,     5,    10,
      11,    18,    20,    23,    24,    56,    72,    74,    75,    76,
      77,    78,    79,    82,    83,    72,    25,    20,    64,    62,
      20,    49,    72,    64,    72,    73,    83,    84,    85,    86,
      87,    56,    57,    58,    18,    25,    76,    76,    12,    13,
      14,    10,    11,    26,    26,    16,    22,    27,    28,    29,
      30,    44,    52,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    74,    49,    50,    51,    19,    19,    33,    34,
      38,    39,    32,    35,    36,    37,    17,    21,    72,    80,
      81,    72,    76,    76,    76,    82,    82,    63,    16,    72,
      18,    18,    16,    16,    21,    67,    16,    15,    17,    21,
      83,    83,    83,    83,    83,    84,    84,    85,    86,    56,
      17,    19,    26,    25,    16,    73,    73,    72,    49,    72,
      72,    19,    19,    16,    26,    70,    71,    69,    70,    31,
      70,    71
  };

  const signed char
  sysyfParser::yyr1_[] =
  {
       0,    40,    41,    42,    42,    43,    43,    44,    44,    45,
      46,    46,    47,    48,    48,    49,    49,    50,    50,    51,
      51,    52,    52,    53,    54,    54,    55,    55,    56,    56,
      57,    57,    58,    58,    59,    59,    60,    60,    61,    61,
      62,    62,    63,    63,    64,    65,    65,    66,    66,    67,
      67,    68,    68,    68,    68,    68,    68,    68,    68,    69,
      69,    70,    70,    70,    71,    71,    71,    72,    73,    74,
      74,    75,    75,    76,    76,    76,    76,    76,    76,    76,
      77,    78,    78,    79,    80,    80,    81,    81,    82,    82,
      82,    82,    83,    83,    83,    84,    84,    84,    84,    84,
      85,    85,    85,    86,    86,    87,    87
  };

  const signed char
  sysyfParser::yyr2_[] =
  {
       0,     2,     2,     2,     1,     1,     1,     1,     1,     4,
       3,     1,     4,     4,     0,     1,     3,     3,     1,     1,
       0,     1,     1,     3,     3,     1,     2,     4,     1,     3,
       3,     1,     1,     0,     6,     6,     1,     0,     3,     1,
       2,     5,     4,     0,     3,     1,     0,     2,     1,     1,
       1,     4,     1,     2,     1,     2,     2,     3,     2,     1,
       1,     7,     5,     1,     5,     7,     5,     1,     1,     4,
       1,     1,     1,     3,     3,     1,     1,     1,     2,     2,
       4,     1,     1,     1,     3,     1,     1,     0,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const sysyfParser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "END", "INTCONST",
  "FLOATCONST", "INT", "FLOAT", "VOID", "CONST", "PLUS", "MINUS",
  "MULTIPLY", "DIVIDE", "MODULO", "ASSIGN", "SEMICOLON", "COMMA",
  "LPARENTHESE", "RPARENTHESE", "LBRACE", "RBRACE", "RETURN", "IDENTIFIER",
  "NOT", "LBRACKET", "RBRACKET", "WHILE", "IF", "BREAK", "CONTINUE",
  "ELSE", "NEQ", "LT", "GT", "EQ", "LAND", "LOR", "LTE", "GTE", "$accept",
  "Begin", "CompUnit", "GlobalDecl", "Decl", "ConstDecl", "ConstDefList",
  "ConstDef", "EXPLIST", "ConstInitVal", "ConstInitValList",
  "ConstInitValListComplete", "BType", "VarDecl", "VarDefList", "VarDef",
  "InitVal", "InitValList", "InitValListComplete", "FuncDef",
  "FuncFParamsComplete", "FuncFParams", "FuncFParam", "ParamVar", "Block",
  "BlockItemListComplete", "BlockItemList", "BlockItem", "OtherStmt",
  "Stmt", "MatchedStmt", "OpenStmt", "Exp", "Cond", "LVal", "Number",
  "UnaryExp", "FuncCallStmt", "UnaryOp", "UnaryCondOp", "FuncRParams",
  "FuncRParamsComplete", "MulExp", "AddExp", "RelExp", "EqExp", "LAndExp",
  "LOrExp", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  sysyfParser::yyrline_[] =
  {
       0,   139,   139,   146,   150,   156,   160,   166,   169,   174,
     183,   187,   193,   203,   207,   212,   218,   226,   230,   236,
     239,   244,   247,   252,   261,   265,   271,   279,   289,   295,
     303,   307,   313,   316,   321,   329,   339,   342,   348,   352,
     358,   363,   371,   375,   380,   387,   390,   395,   399,   405,
     409,   415,   422,   426,   432,   435,   440,   445,   451,   459,
     462,   466,   474,   481,   484,   492,   500,   510,   514,   518,
     522,   528,   534,   542,   545,   548,   553,   558,   563,   569,
     577,   584,   587,   591,   595,   599,   605,   608,   612,   615,
     623,   631,   640,   643,   651,   660,   663,   671,   679,   687,
     696,   699,   707,   716,   719,   728,   731
  };

  void
  sysyfParser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  sysyfParser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


} // yy
#line 2783 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.cpp"

#line 742 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"


// Register errors to the driver:
void yy::sysyfParser::error (const location_type& l,
                          const std::string& m)
{
    driver.error(l, m);
}
