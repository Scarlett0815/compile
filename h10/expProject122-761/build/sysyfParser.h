// A Bison parser, made by GNU Bison 3.7.6.

// Skeleton interface for Bison LALR(1) parsers in C++

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


/**
 ** \file /home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.h
 ** Define the yy::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

#ifndef YY_YY_HOME_SCARLETT_DOCUMENTS_COMPILE_H10_EXPPROJECT122_761_BUILD_SYSYFPARSER_H_INCLUDED
# define YY_YY_HOME_SCARLETT_DOCUMENTS_COMPILE_H10_EXPPROJECT122_761_BUILD_SYSYFPARSER_H_INCLUDED
// "%code requires" blocks.
#line 12 "/home/scarlett/Documents/compile/h10/expProject122-761/grammar/sysyfParser.yy"

#include <string>
#include "SyntaxTree.h"
class sysyfDriver;

#line 55 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.h"

# include <cassert>
# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
#endif
# include "location.hh"
#include <typeinfo>
#ifndef YY_ASSERT
# include <cassert>
# define YY_ASSERT assert
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

namespace yy {
#line 189 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.h"




  /// A Bison parser.
  class sysyfParser
  {
  public:
#ifndef YYSTYPE
  /// A buffer to store and retrieve objects.
  ///
  /// Sort of a variant, but does not keep track of the nature
  /// of the stored data, since that knowledge is available
  /// via the current parser state.
  class semantic_type
  {
  public:
    /// Type of *this.
    typedef semantic_type self_type;

    /// Empty construction.
    semantic_type () YY_NOEXCEPT
      : yybuffer_ ()
      , yytypeid_ (YY_NULLPTR)
    {}

    /// Construct and fill.
    template <typename T>
    semantic_type (YY_RVREF (T) t)
      : yytypeid_ (&typeid (T))
    {
      YY_ASSERT (sizeof (T) <= size);
      new (yyas_<T> ()) T (YY_MOVE (t));
    }

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    semantic_type (const self_type&) = delete;
    /// Non copyable.
    self_type& operator= (const self_type&) = delete;
#endif

    /// Destruction, allowed only if empty.
    ~semantic_type () YY_NOEXCEPT
    {
      YY_ASSERT (!yytypeid_);
    }

# if 201103L <= YY_CPLUSPLUS
    /// Instantiate a \a T in here from \a t.
    template <typename T, typename... U>
    T&
    emplace (U&&... u)
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (std::forward <U>(u)...);
    }
# else
    /// Instantiate an empty \a T in here.
    template <typename T>
    T&
    emplace ()
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T ();
    }

    /// Instantiate a \a T in here from \a t.
    template <typename T>
    T&
    emplace (const T& t)
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (t);
    }
# endif

    /// Instantiate an empty \a T in here.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build ()
    {
      return emplace<T> ();
    }

    /// Instantiate a \a T in here from \a t.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build (const T& t)
    {
      return emplace<T> (t);
    }

    /// Accessor to a built \a T.
    template <typename T>
    T&
    as () YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == typeid (T));
      YY_ASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Const accessor to a built \a T (for %printer).
    template <typename T>
    const T&
    as () const YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == typeid (T));
      YY_ASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Swap the content with \a that, of same type.
    ///
    /// Both variants must be built beforehand, because swapping the actual
    /// data requires reading it (with as()), and this is not possible on
    /// unconstructed variants: it would require some dynamic testing, which
    /// should not be the variant's responsibility.
    /// Swapping between built and (possibly) non-built is done with
    /// self_type::move ().
    template <typename T>
    void
    swap (self_type& that) YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == *that.yytypeid_);
      std::swap (as<T> (), that.as<T> ());
    }

    /// Move the content of \a that to this.
    ///
    /// Destroys \a that.
    template <typename T>
    void
    move (self_type& that)
    {
# if 201103L <= YY_CPLUSPLUS
      emplace<T> (std::move (that.as<T> ()));
# else
      emplace<T> ();
      swap<T> (that);
# endif
      that.destroy<T> ();
    }

# if 201103L <= YY_CPLUSPLUS
    /// Move the content of \a that to this.
    template <typename T>
    void
    move (self_type&& that)
    {
      emplace<T> (std::move (that.as<T> ()));
      that.destroy<T> ();
    }
#endif

    /// Copy the content of \a that to this.
    template <typename T>
    void
    copy (const self_type& that)
    {
      emplace<T> (that.as<T> ());
    }

    /// Destroy the stored \a T.
    template <typename T>
    void
    destroy ()
    {
      as<T> ().~T ();
      yytypeid_ = YY_NULLPTR;
    }

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    semantic_type (const self_type&);
    /// Non copyable.
    self_type& operator= (const self_type&);
#endif

    /// Accessor to raw memory as \a T.
    template <typename T>
    T*
    yyas_ () YY_NOEXCEPT
    {
      void *yyp = yybuffer_.yyraw;
      return static_cast<T*> (yyp);
     }

    /// Const accessor to raw memory as \a T.
    template <typename T>
    const T*
    yyas_ () const YY_NOEXCEPT
    {
      const void *yyp = yybuffer_.yyraw;
      return static_cast<const T*> (yyp);
     }

    /// An auxiliary type to compute the largest semantic type.
    union union_type
    {
      // CompUnit
      char dummy1[sizeof (SyntaxTree::Assembly*)];

      // Block
      char dummy2[sizeof (SyntaxTree::BlockStmt*)];

      // Exp
      // Cond
      // UnaryExp
      // MulExp
      // AddExp
      // RelExp
      // EqExp
      // LAndExp
      // LOrExp
      char dummy3[sizeof (SyntaxTree::Expr*)];

      // FuncCallStmt
      char dummy4[sizeof (SyntaxTree::FuncCallStmt*)];

      // FuncDef
      char dummy5[sizeof (SyntaxTree::FuncDef*)];

      // FuncFParamsComplete
      // FuncFParams
      char dummy6[sizeof (SyntaxTree::FuncFParamList*)];

      // FuncFParam
      char dummy7[sizeof (SyntaxTree::FuncParam*)];

      // ConstInitVal
      // InitVal
      char dummy8[sizeof (SyntaxTree::InitVal*)];

      // LVal
      char dummy9[sizeof (SyntaxTree::LVal*)];

      // Number
      char dummy10[sizeof (SyntaxTree::Literal*)];

      // EXPLIST
      // ParamVar
      // FuncRParams
      // FuncRParamsComplete
      char dummy11[sizeof (SyntaxTree::PtrList<SyntaxTree::Expr>)];

      // GlobalDecl
      char dummy12[sizeof (SyntaxTree::PtrList<SyntaxTree::GlobalDef>)];

      // ConstInitValList
      // ConstInitValListComplete
      // InitValList
      // InitValListComplete
      char dummy13[sizeof (SyntaxTree::PtrList<SyntaxTree::InitVal>)];

      // BlockItemListComplete
      // BlockItemList
      // BlockItem
      char dummy14[sizeof (SyntaxTree::PtrList<SyntaxTree::Stmt>)];

      // Decl
      // ConstDecl
      // ConstDefList
      // VarDecl
      // VarDefList
      char dummy15[sizeof (SyntaxTree::PtrList<SyntaxTree::VarDef>)];

      // OtherStmt
      // Stmt
      // MatchedStmt
      // OpenStmt
      char dummy16[sizeof (SyntaxTree::Stmt*)];

      // BType
      char dummy17[sizeof (SyntaxTree::Type)];

      // UnaryCondOp
      char dummy18[sizeof (SyntaxTree::UnaryCondOp)];

      // UnaryOp
      char dummy19[sizeof (SyntaxTree::UnaryOp)];

      // ConstDef
      // VarDef
      char dummy20[sizeof (SyntaxTree::VarDef*)];

      // FLOATCONST
      char dummy21[sizeof (float)];

      // INTCONST
      char dummy22[sizeof (int)];

      // IDENTIFIER
      char dummy23[sizeof (std::string)];
    };

    /// The size of the largest semantic type.
    enum { size = sizeof (union_type) };

    /// A buffer to store semantic values.
    union
    {
      /// Strongest alignment constraints.
      long double yyalign_me;
      /// A buffer large enough to store any of the semantic values.
      char yyraw[size];
    } yybuffer_;

    /// Whether the content is built: if defined, the name of the stored type.
    const std::type_info *yytypeid_;
  };

#else
    typedef YYSTYPE semantic_type;
#endif
    /// Symbol locations.
    typedef location location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const location_type& l, const std::string& m)
        : std::runtime_error (m)
        , location (l)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
        , location (s.location)
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;

      location_type location;
    };

    /// Token kinds.
    struct token
    {
      enum token_kind_type
      {
        TOK_YYEMPTY = -2,
    TOK_YYEOF = 0,                 // "end of file"
    TOK_YYerror = 256,             // error
    TOK_YYUNDEF = 257,             // "invalid token"
    TOK_END = 258,                 // END
    TOK_INTCONST = 259,            // INTCONST
    TOK_FLOATCONST = 260,          // FLOATCONST
    TOK_INT = 261,                 // INT
    TOK_FLOAT = 262,               // FLOAT
    TOK_VOID = 263,                // VOID
    TOK_CONST = 264,               // CONST
    TOK_PLUS = 265,                // PLUS
    TOK_MINUS = 266,               // MINUS
    TOK_MULTIPLY = 267,            // MULTIPLY
    TOK_DIVIDE = 268,              // DIVIDE
    TOK_MODULO = 269,              // MODULO
    TOK_ASSIGN = 270,              // ASSIGN
    TOK_SEMICOLON = 271,           // SEMICOLON
    TOK_COMMA = 272,               // COMMA
    TOK_LPARENTHESE = 273,         // LPARENTHESE
    TOK_RPARENTHESE = 274,         // RPARENTHESE
    TOK_LBRACE = 275,              // LBRACE
    TOK_RBRACE = 276,              // RBRACE
    TOK_RETURN = 277,              // RETURN
    TOK_IDENTIFIER = 278,          // IDENTIFIER
    TOK_NOT = 279,                 // NOT
    TOK_LBRACKET = 280,            // LBRACKET
    TOK_RBRACKET = 281,            // RBRACKET
    TOK_WHILE = 282,               // WHILE
    TOK_IF = 283,                  // IF
    TOK_BREAK = 284,               // BREAK
    TOK_CONTINUE = 285,            // CONTINUE
    TOK_ELSE = 286,                // ELSE
    TOK_NEQ = 287,                 // NEQ
    TOK_LT = 288,                  // LT
    TOK_GT = 289,                  // GT
    TOK_EQ = 290,                  // EQ
    TOK_LAND = 291,                // LAND
    TOK_LOR = 292,                 // LOR
    TOK_LTE = 293,                 // LTE
    TOK_GTE = 294                  // GTE
      };
      /// Backward compatibility alias (Bison 3.6).
      typedef token_kind_type yytokentype;
    };

    /// Token kind, as returned by yylex.
    typedef token::yytokentype token_kind_type;

    /// Backward compatibility alias (Bison 3.6).
    typedef token_kind_type token_type;

    /// Symbol kinds.
    struct symbol_kind
    {
      enum symbol_kind_type
      {
        YYNTOKENS = 40, ///< Number of tokens.
        S_YYEMPTY = -2,
        S_YYEOF = 0,                             // "end of file"
        S_YYerror = 1,                           // error
        S_YYUNDEF = 2,                           // "invalid token"
        S_END = 3,                               // END
        S_INTCONST = 4,                          // INTCONST
        S_FLOATCONST = 5,                        // FLOATCONST
        S_INT = 6,                               // INT
        S_FLOAT = 7,                             // FLOAT
        S_VOID = 8,                              // VOID
        S_CONST = 9,                             // CONST
        S_PLUS = 10,                             // PLUS
        S_MINUS = 11,                            // MINUS
        S_MULTIPLY = 12,                         // MULTIPLY
        S_DIVIDE = 13,                           // DIVIDE
        S_MODULO = 14,                           // MODULO
        S_ASSIGN = 15,                           // ASSIGN
        S_SEMICOLON = 16,                        // SEMICOLON
        S_COMMA = 17,                            // COMMA
        S_LPARENTHESE = 18,                      // LPARENTHESE
        S_RPARENTHESE = 19,                      // RPARENTHESE
        S_LBRACE = 20,                           // LBRACE
        S_RBRACE = 21,                           // RBRACE
        S_RETURN = 22,                           // RETURN
        S_IDENTIFIER = 23,                       // IDENTIFIER
        S_NOT = 24,                              // NOT
        S_LBRACKET = 25,                         // LBRACKET
        S_RBRACKET = 26,                         // RBRACKET
        S_WHILE = 27,                            // WHILE
        S_IF = 28,                               // IF
        S_BREAK = 29,                            // BREAK
        S_CONTINUE = 30,                         // CONTINUE
        S_ELSE = 31,                             // ELSE
        S_NEQ = 32,                              // NEQ
        S_LT = 33,                               // LT
        S_GT = 34,                               // GT
        S_EQ = 35,                               // EQ
        S_LAND = 36,                             // LAND
        S_LOR = 37,                              // LOR
        S_LTE = 38,                              // LTE
        S_GTE = 39,                              // GTE
        S_YYACCEPT = 40,                         // $accept
        S_Begin = 41,                            // Begin
        S_CompUnit = 42,                         // CompUnit
        S_GlobalDecl = 43,                       // GlobalDecl
        S_Decl = 44,                             // Decl
        S_ConstDecl = 45,                        // ConstDecl
        S_ConstDefList = 46,                     // ConstDefList
        S_ConstDef = 47,                         // ConstDef
        S_EXPLIST = 48,                          // EXPLIST
        S_ConstInitVal = 49,                     // ConstInitVal
        S_ConstInitValList = 50,                 // ConstInitValList
        S_ConstInitValListComplete = 51,         // ConstInitValListComplete
        S_BType = 52,                            // BType
        S_VarDecl = 53,                          // VarDecl
        S_VarDefList = 54,                       // VarDefList
        S_VarDef = 55,                           // VarDef
        S_InitVal = 56,                          // InitVal
        S_InitValList = 57,                      // InitValList
        S_InitValListComplete = 58,              // InitValListComplete
        S_FuncDef = 59,                          // FuncDef
        S_FuncFParamsComplete = 60,              // FuncFParamsComplete
        S_FuncFParams = 61,                      // FuncFParams
        S_FuncFParam = 62,                       // FuncFParam
        S_ParamVar = 63,                         // ParamVar
        S_Block = 64,                            // Block
        S_BlockItemListComplete = 65,            // BlockItemListComplete
        S_BlockItemList = 66,                    // BlockItemList
        S_BlockItem = 67,                        // BlockItem
        S_OtherStmt = 68,                        // OtherStmt
        S_Stmt = 69,                             // Stmt
        S_MatchedStmt = 70,                      // MatchedStmt
        S_OpenStmt = 71,                         // OpenStmt
        S_Exp = 72,                              // Exp
        S_Cond = 73,                             // Cond
        S_LVal = 74,                             // LVal
        S_Number = 75,                           // Number
        S_UnaryExp = 76,                         // UnaryExp
        S_FuncCallStmt = 77,                     // FuncCallStmt
        S_UnaryOp = 78,                          // UnaryOp
        S_UnaryCondOp = 79,                      // UnaryCondOp
        S_FuncRParams = 80,                      // FuncRParams
        S_FuncRParamsComplete = 81,              // FuncRParamsComplete
        S_MulExp = 82,                           // MulExp
        S_AddExp = 83,                           // AddExp
        S_RelExp = 84,                           // RelExp
        S_EqExp = 85,                            // EqExp
        S_LAndExp = 86,                          // LAndExp
        S_LOrExp = 87                            // LOrExp
      };
    };

    /// (Internal) symbol kind.
    typedef symbol_kind::symbol_kind_type symbol_kind_type;

    /// The number of tokens.
    static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol kind
    /// via kind ().
    ///
    /// Provide access to semantic value and location.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol ()
        : value ()
        , location ()
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      basic_symbol (basic_symbol&& that)
        : Base (std::move (that))
        , value ()
        , location (std::move (that.location))
      {
        switch (this->kind ())
    {
      case symbol_kind::S_CompUnit: // CompUnit
        value.move< SyntaxTree::Assembly* > (std::move (that.value));
        break;

      case symbol_kind::S_Block: // Block
        value.move< SyntaxTree::BlockStmt* > (std::move (that.value));
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
        value.move< SyntaxTree::Expr* > (std::move (that.value));
        break;

      case symbol_kind::S_FuncCallStmt: // FuncCallStmt
        value.move< SyntaxTree::FuncCallStmt* > (std::move (that.value));
        break;

      case symbol_kind::S_FuncDef: // FuncDef
        value.move< SyntaxTree::FuncDef* > (std::move (that.value));
        break;

      case symbol_kind::S_FuncFParamsComplete: // FuncFParamsComplete
      case symbol_kind::S_FuncFParams: // FuncFParams
        value.move< SyntaxTree::FuncFParamList* > (std::move (that.value));
        break;

      case symbol_kind::S_FuncFParam: // FuncFParam
        value.move< SyntaxTree::FuncParam* > (std::move (that.value));
        break;

      case symbol_kind::S_ConstInitVal: // ConstInitVal
      case symbol_kind::S_InitVal: // InitVal
        value.move< SyntaxTree::InitVal* > (std::move (that.value));
        break;

      case symbol_kind::S_LVal: // LVal
        value.move< SyntaxTree::LVal* > (std::move (that.value));
        break;

      case symbol_kind::S_Number: // Number
        value.move< SyntaxTree::Literal* > (std::move (that.value));
        break;

      case symbol_kind::S_EXPLIST: // EXPLIST
      case symbol_kind::S_ParamVar: // ParamVar
      case symbol_kind::S_FuncRParams: // FuncRParams
      case symbol_kind::S_FuncRParamsComplete: // FuncRParamsComplete
        value.move< SyntaxTree::PtrList<SyntaxTree::Expr> > (std::move (that.value));
        break;

      case symbol_kind::S_GlobalDecl: // GlobalDecl
        value.move< SyntaxTree::PtrList<SyntaxTree::GlobalDef> > (std::move (that.value));
        break;

      case symbol_kind::S_ConstInitValList: // ConstInitValList
      case symbol_kind::S_ConstInitValListComplete: // ConstInitValListComplete
      case symbol_kind::S_InitValList: // InitValList
      case symbol_kind::S_InitValListComplete: // InitValListComplete
        value.move< SyntaxTree::PtrList<SyntaxTree::InitVal> > (std::move (that.value));
        break;

      case symbol_kind::S_BlockItemListComplete: // BlockItemListComplete
      case symbol_kind::S_BlockItemList: // BlockItemList
      case symbol_kind::S_BlockItem: // BlockItem
        value.move< SyntaxTree::PtrList<SyntaxTree::Stmt> > (std::move (that.value));
        break;

      case symbol_kind::S_Decl: // Decl
      case symbol_kind::S_ConstDecl: // ConstDecl
      case symbol_kind::S_ConstDefList: // ConstDefList
      case symbol_kind::S_VarDecl: // VarDecl
      case symbol_kind::S_VarDefList: // VarDefList
        value.move< SyntaxTree::PtrList<SyntaxTree::VarDef> > (std::move (that.value));
        break;

      case symbol_kind::S_OtherStmt: // OtherStmt
      case symbol_kind::S_Stmt: // Stmt
      case symbol_kind::S_MatchedStmt: // MatchedStmt
      case symbol_kind::S_OpenStmt: // OpenStmt
        value.move< SyntaxTree::Stmt* > (std::move (that.value));
        break;

      case symbol_kind::S_BType: // BType
        value.move< SyntaxTree::Type > (std::move (that.value));
        break;

      case symbol_kind::S_UnaryCondOp: // UnaryCondOp
        value.move< SyntaxTree::UnaryCondOp > (std::move (that.value));
        break;

      case symbol_kind::S_UnaryOp: // UnaryOp
        value.move< SyntaxTree::UnaryOp > (std::move (that.value));
        break;

      case symbol_kind::S_ConstDef: // ConstDef
      case symbol_kind::S_VarDef: // VarDef
        value.move< SyntaxTree::VarDef* > (std::move (that.value));
        break;

      case symbol_kind::S_FLOATCONST: // FLOATCONST
        value.move< float > (std::move (that.value));
        break;

      case symbol_kind::S_INTCONST: // INTCONST
        value.move< int > (std::move (that.value));
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.move< std::string > (std::move (that.value));
        break;

      default:
        break;
    }

      }
#endif

      /// Copy constructor.
      basic_symbol (const basic_symbol& that);

      /// Constructors for typed symbols.
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, location_type&& l)
        : Base (t)
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const location_type& l)
        : Base (t)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SyntaxTree::Assembly*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SyntaxTree::Assembly*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SyntaxTree::BlockStmt*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SyntaxTree::BlockStmt*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SyntaxTree::Expr*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SyntaxTree::Expr*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SyntaxTree::FuncCallStmt*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SyntaxTree::FuncCallStmt*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SyntaxTree::FuncDef*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SyntaxTree::FuncDef*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SyntaxTree::FuncFParamList*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SyntaxTree::FuncFParamList*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SyntaxTree::FuncParam*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SyntaxTree::FuncParam*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SyntaxTree::InitVal*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SyntaxTree::InitVal*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SyntaxTree::LVal*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SyntaxTree::LVal*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SyntaxTree::Literal*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SyntaxTree::Literal*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SyntaxTree::PtrList<SyntaxTree::Expr>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SyntaxTree::PtrList<SyntaxTree::Expr>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SyntaxTree::PtrList<SyntaxTree::GlobalDef>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SyntaxTree::PtrList<SyntaxTree::GlobalDef>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SyntaxTree::PtrList<SyntaxTree::InitVal>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SyntaxTree::PtrList<SyntaxTree::InitVal>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SyntaxTree::PtrList<SyntaxTree::Stmt>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SyntaxTree::PtrList<SyntaxTree::Stmt>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SyntaxTree::PtrList<SyntaxTree::VarDef>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SyntaxTree::PtrList<SyntaxTree::VarDef>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SyntaxTree::Stmt*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SyntaxTree::Stmt*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SyntaxTree::Type&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SyntaxTree::Type& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SyntaxTree::UnaryCondOp&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SyntaxTree::UnaryCondOp& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SyntaxTree::UnaryOp&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SyntaxTree::UnaryOp& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SyntaxTree::VarDef*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SyntaxTree::VarDef*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, float&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const float& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, int&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const int& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::string&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::string& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

      /// Destroy the symbol.
      ~basic_symbol ()
      {
        clear ();
      }

      /// Destroy contents, and record that is empty.
      void clear () YY_NOEXCEPT
      {
        // User destructor.
        symbol_kind_type yykind = this->kind ();
        basic_symbol<Base>& yysym = *this;
        (void) yysym;
        switch (yykind)
        {
       default:
          break;
        }

        // Value type destructor.
switch (yykind)
    {
      case symbol_kind::S_CompUnit: // CompUnit
        value.template destroy< SyntaxTree::Assembly* > ();
        break;

      case symbol_kind::S_Block: // Block
        value.template destroy< SyntaxTree::BlockStmt* > ();
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
        value.template destroy< SyntaxTree::Expr* > ();
        break;

      case symbol_kind::S_FuncCallStmt: // FuncCallStmt
        value.template destroy< SyntaxTree::FuncCallStmt* > ();
        break;

      case symbol_kind::S_FuncDef: // FuncDef
        value.template destroy< SyntaxTree::FuncDef* > ();
        break;

      case symbol_kind::S_FuncFParamsComplete: // FuncFParamsComplete
      case symbol_kind::S_FuncFParams: // FuncFParams
        value.template destroy< SyntaxTree::FuncFParamList* > ();
        break;

      case symbol_kind::S_FuncFParam: // FuncFParam
        value.template destroy< SyntaxTree::FuncParam* > ();
        break;

      case symbol_kind::S_ConstInitVal: // ConstInitVal
      case symbol_kind::S_InitVal: // InitVal
        value.template destroy< SyntaxTree::InitVal* > ();
        break;

      case symbol_kind::S_LVal: // LVal
        value.template destroy< SyntaxTree::LVal* > ();
        break;

      case symbol_kind::S_Number: // Number
        value.template destroy< SyntaxTree::Literal* > ();
        break;

      case symbol_kind::S_EXPLIST: // EXPLIST
      case symbol_kind::S_ParamVar: // ParamVar
      case symbol_kind::S_FuncRParams: // FuncRParams
      case symbol_kind::S_FuncRParamsComplete: // FuncRParamsComplete
        value.template destroy< SyntaxTree::PtrList<SyntaxTree::Expr> > ();
        break;

      case symbol_kind::S_GlobalDecl: // GlobalDecl
        value.template destroy< SyntaxTree::PtrList<SyntaxTree::GlobalDef> > ();
        break;

      case symbol_kind::S_ConstInitValList: // ConstInitValList
      case symbol_kind::S_ConstInitValListComplete: // ConstInitValListComplete
      case symbol_kind::S_InitValList: // InitValList
      case symbol_kind::S_InitValListComplete: // InitValListComplete
        value.template destroy< SyntaxTree::PtrList<SyntaxTree::InitVal> > ();
        break;

      case symbol_kind::S_BlockItemListComplete: // BlockItemListComplete
      case symbol_kind::S_BlockItemList: // BlockItemList
      case symbol_kind::S_BlockItem: // BlockItem
        value.template destroy< SyntaxTree::PtrList<SyntaxTree::Stmt> > ();
        break;

      case symbol_kind::S_Decl: // Decl
      case symbol_kind::S_ConstDecl: // ConstDecl
      case symbol_kind::S_ConstDefList: // ConstDefList
      case symbol_kind::S_VarDecl: // VarDecl
      case symbol_kind::S_VarDefList: // VarDefList
        value.template destroy< SyntaxTree::PtrList<SyntaxTree::VarDef> > ();
        break;

      case symbol_kind::S_OtherStmt: // OtherStmt
      case symbol_kind::S_Stmt: // Stmt
      case symbol_kind::S_MatchedStmt: // MatchedStmt
      case symbol_kind::S_OpenStmt: // OpenStmt
        value.template destroy< SyntaxTree::Stmt* > ();
        break;

      case symbol_kind::S_BType: // BType
        value.template destroy< SyntaxTree::Type > ();
        break;

      case symbol_kind::S_UnaryCondOp: // UnaryCondOp
        value.template destroy< SyntaxTree::UnaryCondOp > ();
        break;

      case symbol_kind::S_UnaryOp: // UnaryOp
        value.template destroy< SyntaxTree::UnaryOp > ();
        break;

      case symbol_kind::S_ConstDef: // ConstDef
      case symbol_kind::S_VarDef: // VarDef
        value.template destroy< SyntaxTree::VarDef* > ();
        break;

      case symbol_kind::S_FLOATCONST: // FLOATCONST
        value.template destroy< float > ();
        break;

      case symbol_kind::S_INTCONST: // INTCONST
        value.template destroy< int > ();
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.template destroy< std::string > ();
        break;

      default:
        break;
    }

        Base::clear ();
      }

      /// The user-facing name of this symbol.
      std::string name () const YY_NOEXCEPT
      {
        return sysyfParser::symbol_name (this->kind ());
      }

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// Whether empty.
      bool empty () const YY_NOEXCEPT;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      semantic_type value;

      /// The location.
      location_type location;

    private:
#if YY_CPLUSPLUS < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_kind
    {
      /// Default constructor.
      by_kind ();

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      by_kind (by_kind&& that);
#endif

      /// Copy constructor.
      by_kind (const by_kind& that);

      /// The symbol kind as needed by the constructor.
      typedef token_kind_type kind_type;

      /// Constructor from (external) token numbers.
      by_kind (kind_type t);

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_kind& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// The symbol kind.
      /// \a S_YYEMPTY when empty.
      symbol_kind_type kind_;
    };

    /// Backward compatibility for a private implementation detail (Bison 3.6).
    typedef by_kind by_type;

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_kind>
    {
      /// Superclass.
      typedef basic_symbol<by_kind> super_type;

      /// Empty symbol.
      symbol_type () {}

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, location_type l)
        : super_type(token_type (tok), std::move (l))
#else
      symbol_type (int tok, const location_type& l)
        : super_type(token_type (tok), l)
#endif
      {
        YY_ASSERT (tok == token::TOK_YYEOF
                   || (token::TOK_YYerror <= tok && tok <= token::TOK_END)
                   || (token::TOK_INT <= tok && tok <= token::TOK_RETURN)
                   || (token::TOK_NOT <= tok && tok <= token::TOK_GTE));
      }
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, float v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
#else
      symbol_type (int tok, const float& v, const location_type& l)
        : super_type(token_type (tok), v, l)
#endif
      {
        YY_ASSERT (tok == token::TOK_FLOATCONST);
      }
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, int v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
#else
      symbol_type (int tok, const int& v, const location_type& l)
        : super_type(token_type (tok), v, l)
#endif
      {
        YY_ASSERT (tok == token::TOK_INTCONST);
      }
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, std::string v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
#else
      symbol_type (int tok, const std::string& v, const location_type& l)
        : super_type(token_type (tok), v, l)
#endif
      {
        YY_ASSERT (tok == token::TOK_IDENTIFIER);
      }
    };

    /// Build a parser object.
    sysyfParser (sysyfDriver& driver_yyarg);
    virtual ~sysyfParser ();

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    sysyfParser (const sysyfParser&) = delete;
    /// Non copyable.
    sysyfParser& operator= (const sysyfParser&) = delete;
#endif

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);

    /// The user-facing name of the symbol whose (internal) number is
    /// YYSYMBOL.  No bounds checking.
    static std::string symbol_name (symbol_kind_type yysymbol);

    // Implementation of make_symbol for each symbol type.
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYEOF (location_type l)
      {
        return symbol_type (token::TOK_YYEOF, std::move (l));
      }
#else
      static
      symbol_type
      make_YYEOF (const location_type& l)
      {
        return symbol_type (token::TOK_YYEOF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYerror (location_type l)
      {
        return symbol_type (token::TOK_YYerror, std::move (l));
      }
#else
      static
      symbol_type
      make_YYerror (const location_type& l)
      {
        return symbol_type (token::TOK_YYerror, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYUNDEF (location_type l)
      {
        return symbol_type (token::TOK_YYUNDEF, std::move (l));
      }
#else
      static
      symbol_type
      make_YYUNDEF (const location_type& l)
      {
        return symbol_type (token::TOK_YYUNDEF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_END (location_type l)
      {
        return symbol_type (token::TOK_END, std::move (l));
      }
#else
      static
      symbol_type
      make_END (const location_type& l)
      {
        return symbol_type (token::TOK_END, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INTCONST (int v, location_type l)
      {
        return symbol_type (token::TOK_INTCONST, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_INTCONST (const int& v, const location_type& l)
      {
        return symbol_type (token::TOK_INTCONST, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FLOATCONST (float v, location_type l)
      {
        return symbol_type (token::TOK_FLOATCONST, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_FLOATCONST (const float& v, const location_type& l)
      {
        return symbol_type (token::TOK_FLOATCONST, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INT (location_type l)
      {
        return symbol_type (token::TOK_INT, std::move (l));
      }
#else
      static
      symbol_type
      make_INT (const location_type& l)
      {
        return symbol_type (token::TOK_INT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FLOAT (location_type l)
      {
        return symbol_type (token::TOK_FLOAT, std::move (l));
      }
#else
      static
      symbol_type
      make_FLOAT (const location_type& l)
      {
        return symbol_type (token::TOK_FLOAT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VOID (location_type l)
      {
        return symbol_type (token::TOK_VOID, std::move (l));
      }
#else
      static
      symbol_type
      make_VOID (const location_type& l)
      {
        return symbol_type (token::TOK_VOID, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONST (location_type l)
      {
        return symbol_type (token::TOK_CONST, std::move (l));
      }
#else
      static
      symbol_type
      make_CONST (const location_type& l)
      {
        return symbol_type (token::TOK_CONST, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PLUS (location_type l)
      {
        return symbol_type (token::TOK_PLUS, std::move (l));
      }
#else
      static
      symbol_type
      make_PLUS (const location_type& l)
      {
        return symbol_type (token::TOK_PLUS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MINUS (location_type l)
      {
        return symbol_type (token::TOK_MINUS, std::move (l));
      }
#else
      static
      symbol_type
      make_MINUS (const location_type& l)
      {
        return symbol_type (token::TOK_MINUS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MULTIPLY (location_type l)
      {
        return symbol_type (token::TOK_MULTIPLY, std::move (l));
      }
#else
      static
      symbol_type
      make_MULTIPLY (const location_type& l)
      {
        return symbol_type (token::TOK_MULTIPLY, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DIVIDE (location_type l)
      {
        return symbol_type (token::TOK_DIVIDE, std::move (l));
      }
#else
      static
      symbol_type
      make_DIVIDE (const location_type& l)
      {
        return symbol_type (token::TOK_DIVIDE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MODULO (location_type l)
      {
        return symbol_type (token::TOK_MODULO, std::move (l));
      }
#else
      static
      symbol_type
      make_MODULO (const location_type& l)
      {
        return symbol_type (token::TOK_MODULO, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASSIGN (location_type l)
      {
        return symbol_type (token::TOK_ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_ASSIGN (const location_type& l)
      {
        return symbol_type (token::TOK_ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SEMICOLON (location_type l)
      {
        return symbol_type (token::TOK_SEMICOLON, std::move (l));
      }
#else
      static
      symbol_type
      make_SEMICOLON (const location_type& l)
      {
        return symbol_type (token::TOK_SEMICOLON, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COMMA (location_type l)
      {
        return symbol_type (token::TOK_COMMA, std::move (l));
      }
#else
      static
      symbol_type
      make_COMMA (const location_type& l)
      {
        return symbol_type (token::TOK_COMMA, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LPARENTHESE (location_type l)
      {
        return symbol_type (token::TOK_LPARENTHESE, std::move (l));
      }
#else
      static
      symbol_type
      make_LPARENTHESE (const location_type& l)
      {
        return symbol_type (token::TOK_LPARENTHESE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RPARENTHESE (location_type l)
      {
        return symbol_type (token::TOK_RPARENTHESE, std::move (l));
      }
#else
      static
      symbol_type
      make_RPARENTHESE (const location_type& l)
      {
        return symbol_type (token::TOK_RPARENTHESE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LBRACE (location_type l)
      {
        return symbol_type (token::TOK_LBRACE, std::move (l));
      }
#else
      static
      symbol_type
      make_LBRACE (const location_type& l)
      {
        return symbol_type (token::TOK_LBRACE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RBRACE (location_type l)
      {
        return symbol_type (token::TOK_RBRACE, std::move (l));
      }
#else
      static
      symbol_type
      make_RBRACE (const location_type& l)
      {
        return symbol_type (token::TOK_RBRACE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RETURN (location_type l)
      {
        return symbol_type (token::TOK_RETURN, std::move (l));
      }
#else
      static
      symbol_type
      make_RETURN (const location_type& l)
      {
        return symbol_type (token::TOK_RETURN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IDENTIFIER (std::string v, location_type l)
      {
        return symbol_type (token::TOK_IDENTIFIER, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_IDENTIFIER (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_IDENTIFIER, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NOT (location_type l)
      {
        return symbol_type (token::TOK_NOT, std::move (l));
      }
#else
      static
      symbol_type
      make_NOT (const location_type& l)
      {
        return symbol_type (token::TOK_NOT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LBRACKET (location_type l)
      {
        return symbol_type (token::TOK_LBRACKET, std::move (l));
      }
#else
      static
      symbol_type
      make_LBRACKET (const location_type& l)
      {
        return symbol_type (token::TOK_LBRACKET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RBRACKET (location_type l)
      {
        return symbol_type (token::TOK_RBRACKET, std::move (l));
      }
#else
      static
      symbol_type
      make_RBRACKET (const location_type& l)
      {
        return symbol_type (token::TOK_RBRACKET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_WHILE (location_type l)
      {
        return symbol_type (token::TOK_WHILE, std::move (l));
      }
#else
      static
      symbol_type
      make_WHILE (const location_type& l)
      {
        return symbol_type (token::TOK_WHILE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IF (location_type l)
      {
        return symbol_type (token::TOK_IF, std::move (l));
      }
#else
      static
      symbol_type
      make_IF (const location_type& l)
      {
        return symbol_type (token::TOK_IF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BREAK (location_type l)
      {
        return symbol_type (token::TOK_BREAK, std::move (l));
      }
#else
      static
      symbol_type
      make_BREAK (const location_type& l)
      {
        return symbol_type (token::TOK_BREAK, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONTINUE (location_type l)
      {
        return symbol_type (token::TOK_CONTINUE, std::move (l));
      }
#else
      static
      symbol_type
      make_CONTINUE (const location_type& l)
      {
        return symbol_type (token::TOK_CONTINUE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ELSE (location_type l)
      {
        return symbol_type (token::TOK_ELSE, std::move (l));
      }
#else
      static
      symbol_type
      make_ELSE (const location_type& l)
      {
        return symbol_type (token::TOK_ELSE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NEQ (location_type l)
      {
        return symbol_type (token::TOK_NEQ, std::move (l));
      }
#else
      static
      symbol_type
      make_NEQ (const location_type& l)
      {
        return symbol_type (token::TOK_NEQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LT (location_type l)
      {
        return symbol_type (token::TOK_LT, std::move (l));
      }
#else
      static
      symbol_type
      make_LT (const location_type& l)
      {
        return symbol_type (token::TOK_LT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GT (location_type l)
      {
        return symbol_type (token::TOK_GT, std::move (l));
      }
#else
      static
      symbol_type
      make_GT (const location_type& l)
      {
        return symbol_type (token::TOK_GT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EQ (location_type l)
      {
        return symbol_type (token::TOK_EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_EQ (const location_type& l)
      {
        return symbol_type (token::TOK_EQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LAND (location_type l)
      {
        return symbol_type (token::TOK_LAND, std::move (l));
      }
#else
      static
      symbol_type
      make_LAND (const location_type& l)
      {
        return symbol_type (token::TOK_LAND, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LOR (location_type l)
      {
        return symbol_type (token::TOK_LOR, std::move (l));
      }
#else
      static
      symbol_type
      make_LOR (const location_type& l)
      {
        return symbol_type (token::TOK_LOR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LTE (location_type l)
      {
        return symbol_type (token::TOK_LTE, std::move (l));
      }
#else
      static
      symbol_type
      make_LTE (const location_type& l)
      {
        return symbol_type (token::TOK_LTE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GTE (location_type l)
      {
        return symbol_type (token::TOK_GTE, std::move (l));
      }
#else
      static
      symbol_type
      make_GTE (const location_type& l)
      {
        return symbol_type (token::TOK_GTE, l);
      }
#endif


    class context
    {
    public:
      context (const sysyfParser& yyparser, const symbol_type& yyla);
      const symbol_type& lookahead () const YY_NOEXCEPT { return yyla_; }
      symbol_kind_type token () const YY_NOEXCEPT { return yyla_.kind (); }
      const location_type& location () const YY_NOEXCEPT { return yyla_.location; }

      /// Put in YYARG at most YYARGN of the expected tokens, and return the
      /// number of tokens stored in YYARG.  If YYARG is null, return the
      /// number of expected tokens (guaranteed to be less than YYNTOKENS).
      int expected_tokens (symbol_kind_type yyarg[], int yyargn) const;

    private:
      const sysyfParser& yyparser_;
      const symbol_type& yyla_;
    };

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    sysyfParser (const sysyfParser&);
    /// Non copyable.
    sysyfParser& operator= (const sysyfParser&);
#endif


    /// Stored state numbers (used for stacks).
    typedef unsigned char state_type;

    /// The arguments of the error message.
    int yy_syntax_error_arguments_ (const context& yyctx,
                                    symbol_kind_type yyarg[], int yyargn) const;

    /// Generate an error message.
    /// \param yyctx     the context in which the error occurred.
    virtual std::string yysyntax_error_ (const context& yyctx) const;
    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    static state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue);

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue);

    static const short yypact_ninf_;
    static const signed char yytable_ninf_;

    /// Convert a scanner token kind \a t to a symbol kind.
    /// In theory \a t should be a token_kind_type, but character literals
    /// are valid, yet not members of the token_type enum.
    static symbol_kind_type yytranslate_ (int t);

    /// Convert the symbol name \a n to a form suitable for a diagnostic.
    static std::string yytnamerr_ (const char *yystr);

    /// For a symbol, its name in clear.
    static const char* const yytname_[];


    // Tables.
    // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
    // STATE-NUM.
    static const short yypact_[];

    // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
    // Performed when YYTABLE does not specify something else to do.  Zero
    // means the default is an error.
    static const signed char yydefact_[];

    // YYPGOTO[NTERM-NUM].
    static const short yypgoto_[];

    // YYDEFGOTO[NTERM-NUM].
    static const unsigned char yydefgoto_[];

    // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
    // positive, shift that token.  If negative, reduce the rule whose
    // number is the opposite.  If YYTABLE_NINF, syntax error.
    static const short yytable_[];

    static const short yycheck_[];

    // YYSTOS[STATE-NUM] -- The (internal number of the) accessing
    // symbol of state STATE-NUM.
    static const signed char yystos_[];

    // YYR1[YYN] -- Symbol number of symbol that rule YYN derives.
    static const signed char yyr1_[];

    // YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.
    static const signed char yyr2_[];


#if YYDEBUG
    // YYRLINE[YYN] -- Source line where rule number YYN was defined.
    static const short yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r) const;
    /// Print the state stack on the debug stream.
    virtual void yy_stack_print_ () const;

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol kind, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state () YY_NOEXCEPT;

      /// The symbol kind as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s) YY_NOEXCEPT;

      /// Copy constructor.
      by_state (const by_state& that) YY_NOEXCEPT;

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_state& that);

      /// The symbol kind (corresponding to \a state).
      /// \a symbol_kind::S_YYEMPTY when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// The state number used to denote an empty symbol.
      /// We use the initial state, as it does not have a value.
      enum { empty_state = 0 };

      /// The state.
      /// \a empty when empty.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Move or copy construction.
      stack_symbol_type (YY_RVREF (stack_symbol_type) that);
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
      /// Assignment, needed by push_back by some old implementations.
      /// Moves the contents of that.
      stack_symbol_type& operator= (stack_symbol_type& that);

      /// Assignment, needed by push_back by other implementations.
      /// Needed by some other old implementations.
      stack_symbol_type& operator= (const stack_symbol_type& that);
#endif
    };

    /// A stack with random access from its top.
    template <typename T, typename S = std::vector<T> >
    class stack
    {
    public:
      // Hide our reversed order.
      typedef typename S::iterator iterator;
      typedef typename S::const_iterator const_iterator;
      typedef typename S::size_type size_type;
      typedef typename std::ptrdiff_t index_type;

      stack (size_type n = 200)
        : seq_ (n)
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Non copyable.
      stack (const stack&) = delete;
      /// Non copyable.
      stack& operator= (const stack&) = delete;
#endif

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (index_type i) const
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (index_type i)
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Steal the contents of \a t.
      ///
      /// Close to move-semantics.
      void
      push (YY_MOVE_REF (T) t)
      {
        seq_.push_back (T ());
        operator[] (0).move (t);
      }

      /// Pop elements from the stack.
      void
      pop (std::ptrdiff_t n = 1) YY_NOEXCEPT
      {
        for (; 0 < n; --n)
          seq_.pop_back ();
      }

      /// Pop all elements from the stack.
      void
      clear () YY_NOEXCEPT
      {
        seq_.clear ();
      }

      /// Number of elements on the stack.
      index_type
      size () const YY_NOEXCEPT
      {
        return index_type (seq_.size ());
      }

      /// Iterator on top of the stack (going downwards).
      const_iterator
      begin () const YY_NOEXCEPT
      {
        return seq_.begin ();
      }

      /// Bottom of the stack.
      const_iterator
      end () const YY_NOEXCEPT
      {
        return seq_.end ();
      }

      /// Present a slice of the top of a stack.
      class slice
      {
      public:
        slice (const stack& stack, index_type range)
          : stack_ (stack)
          , range_ (range)
        {}

        const T&
        operator[] (index_type i) const
        {
          return stack_[range_ - i];
        }

      private:
        const stack& stack_;
        index_type range_;
      };

    private:
#if YY_CPLUSPLUS < 201103L
      /// Non copyable.
      stack (const stack&);
      /// Non copyable.
      stack& operator= (const stack&);
#endif
      /// The wrapped container.
      S seq_;
    };


    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;

    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_ (int n = 1);

    /// Constants.
    enum
    {
      yylast_ = 208,     ///< Last index in yytable_.
      yynnts_ = 48,  ///< Number of nonterminal symbols.
      yyfinal_ = 15 ///< Termination state number.
    };


    // User arguments.
    sysyfDriver& driver;

  };

  inline
  sysyfParser::symbol_kind_type
  sysyfParser::yytranslate_ (int t)
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const signed char
    translate_table[] =
    {
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39
    };
    // Last valid token kind.
    const int code_max = 294;

    if (t <= 0)
      return symbol_kind::S_YYEOF;
    else if (t <= code_max)
      return YY_CAST (symbol_kind_type, translate_table[t]);
    else
      return symbol_kind::S_YYUNDEF;
  }

  // basic_symbol.
  template <typename Base>
  sysyfParser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value ()
    , location (that.location)
  {
    switch (this->kind ())
    {
      case symbol_kind::S_CompUnit: // CompUnit
        value.copy< SyntaxTree::Assembly* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_Block: // Block
        value.copy< SyntaxTree::BlockStmt* > (YY_MOVE (that.value));
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
        value.copy< SyntaxTree::Expr* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FuncCallStmt: // FuncCallStmt
        value.copy< SyntaxTree::FuncCallStmt* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FuncDef: // FuncDef
        value.copy< SyntaxTree::FuncDef* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FuncFParamsComplete: // FuncFParamsComplete
      case symbol_kind::S_FuncFParams: // FuncFParams
        value.copy< SyntaxTree::FuncFParamList* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FuncFParam: // FuncFParam
        value.copy< SyntaxTree::FuncParam* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ConstInitVal: // ConstInitVal
      case symbol_kind::S_InitVal: // InitVal
        value.copy< SyntaxTree::InitVal* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_LVal: // LVal
        value.copy< SyntaxTree::LVal* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_Number: // Number
        value.copy< SyntaxTree::Literal* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_EXPLIST: // EXPLIST
      case symbol_kind::S_ParamVar: // ParamVar
      case symbol_kind::S_FuncRParams: // FuncRParams
      case symbol_kind::S_FuncRParamsComplete: // FuncRParamsComplete
        value.copy< SyntaxTree::PtrList<SyntaxTree::Expr> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_GlobalDecl: // GlobalDecl
        value.copy< SyntaxTree::PtrList<SyntaxTree::GlobalDef> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ConstInitValList: // ConstInitValList
      case symbol_kind::S_ConstInitValListComplete: // ConstInitValListComplete
      case symbol_kind::S_InitValList: // InitValList
      case symbol_kind::S_InitValListComplete: // InitValListComplete
        value.copy< SyntaxTree::PtrList<SyntaxTree::InitVal> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_BlockItemListComplete: // BlockItemListComplete
      case symbol_kind::S_BlockItemList: // BlockItemList
      case symbol_kind::S_BlockItem: // BlockItem
        value.copy< SyntaxTree::PtrList<SyntaxTree::Stmt> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_Decl: // Decl
      case symbol_kind::S_ConstDecl: // ConstDecl
      case symbol_kind::S_ConstDefList: // ConstDefList
      case symbol_kind::S_VarDecl: // VarDecl
      case symbol_kind::S_VarDefList: // VarDefList
        value.copy< SyntaxTree::PtrList<SyntaxTree::VarDef> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_OtherStmt: // OtherStmt
      case symbol_kind::S_Stmt: // Stmt
      case symbol_kind::S_MatchedStmt: // MatchedStmt
      case symbol_kind::S_OpenStmt: // OpenStmt
        value.copy< SyntaxTree::Stmt* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_BType: // BType
        value.copy< SyntaxTree::Type > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_UnaryCondOp: // UnaryCondOp
        value.copy< SyntaxTree::UnaryCondOp > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_UnaryOp: // UnaryOp
        value.copy< SyntaxTree::UnaryOp > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ConstDef: // ConstDef
      case symbol_kind::S_VarDef: // VarDef
        value.copy< SyntaxTree::VarDef* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FLOATCONST: // FLOATCONST
        value.copy< float > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INTCONST: // INTCONST
        value.copy< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.copy< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

  }



  template <typename Base>
  sysyfParser::symbol_kind_type
  sysyfParser::basic_symbol<Base>::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }

  template <typename Base>
  bool
  sysyfParser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return this->kind () == symbol_kind::S_YYEMPTY;
  }

  template <typename Base>
  void
  sysyfParser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    switch (this->kind ())
    {
      case symbol_kind::S_CompUnit: // CompUnit
        value.move< SyntaxTree::Assembly* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_Block: // Block
        value.move< SyntaxTree::BlockStmt* > (YY_MOVE (s.value));
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
        value.move< SyntaxTree::Expr* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_FuncCallStmt: // FuncCallStmt
        value.move< SyntaxTree::FuncCallStmt* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_FuncDef: // FuncDef
        value.move< SyntaxTree::FuncDef* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_FuncFParamsComplete: // FuncFParamsComplete
      case symbol_kind::S_FuncFParams: // FuncFParams
        value.move< SyntaxTree::FuncFParamList* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_FuncFParam: // FuncFParam
        value.move< SyntaxTree::FuncParam* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_ConstInitVal: // ConstInitVal
      case symbol_kind::S_InitVal: // InitVal
        value.move< SyntaxTree::InitVal* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_LVal: // LVal
        value.move< SyntaxTree::LVal* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_Number: // Number
        value.move< SyntaxTree::Literal* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_EXPLIST: // EXPLIST
      case symbol_kind::S_ParamVar: // ParamVar
      case symbol_kind::S_FuncRParams: // FuncRParams
      case symbol_kind::S_FuncRParamsComplete: // FuncRParamsComplete
        value.move< SyntaxTree::PtrList<SyntaxTree::Expr> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_GlobalDecl: // GlobalDecl
        value.move< SyntaxTree::PtrList<SyntaxTree::GlobalDef> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_ConstInitValList: // ConstInitValList
      case symbol_kind::S_ConstInitValListComplete: // ConstInitValListComplete
      case symbol_kind::S_InitValList: // InitValList
      case symbol_kind::S_InitValListComplete: // InitValListComplete
        value.move< SyntaxTree::PtrList<SyntaxTree::InitVal> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_BlockItemListComplete: // BlockItemListComplete
      case symbol_kind::S_BlockItemList: // BlockItemList
      case symbol_kind::S_BlockItem: // BlockItem
        value.move< SyntaxTree::PtrList<SyntaxTree::Stmt> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_Decl: // Decl
      case symbol_kind::S_ConstDecl: // ConstDecl
      case symbol_kind::S_ConstDefList: // ConstDefList
      case symbol_kind::S_VarDecl: // VarDecl
      case symbol_kind::S_VarDefList: // VarDefList
        value.move< SyntaxTree::PtrList<SyntaxTree::VarDef> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_OtherStmt: // OtherStmt
      case symbol_kind::S_Stmt: // Stmt
      case symbol_kind::S_MatchedStmt: // MatchedStmt
      case symbol_kind::S_OpenStmt: // OpenStmt
        value.move< SyntaxTree::Stmt* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_BType: // BType
        value.move< SyntaxTree::Type > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_UnaryCondOp: // UnaryCondOp
        value.move< SyntaxTree::UnaryCondOp > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_UnaryOp: // UnaryOp
        value.move< SyntaxTree::UnaryOp > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_ConstDef: // ConstDef
      case symbol_kind::S_VarDef: // VarDef
        value.move< SyntaxTree::VarDef* > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_FLOATCONST: // FLOATCONST
        value.move< float > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_INTCONST: // INTCONST
        value.move< int > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.move< std::string > (YY_MOVE (s.value));
        break;

      default:
        break;
    }

    location = YY_MOVE (s.location);
  }

  // by_kind.
  inline
  sysyfParser::by_kind::by_kind ()
    : kind_ (symbol_kind::S_YYEMPTY)
  {}

#if 201103L <= YY_CPLUSPLUS
  inline
  sysyfParser::by_kind::by_kind (by_kind&& that)
    : kind_ (that.kind_)
  {
    that.clear ();
  }
#endif

  inline
  sysyfParser::by_kind::by_kind (const by_kind& that)
    : kind_ (that.kind_)
  {}

  inline
  sysyfParser::by_kind::by_kind (token_kind_type t)
    : kind_ (yytranslate_ (t))
  {}

  inline
  void
  sysyfParser::by_kind::clear () YY_NOEXCEPT
  {
    kind_ = symbol_kind::S_YYEMPTY;
  }

  inline
  void
  sysyfParser::by_kind::move (by_kind& that)
  {
    kind_ = that.kind_;
    that.clear ();
  }

  inline
  sysyfParser::symbol_kind_type
  sysyfParser::by_kind::kind () const YY_NOEXCEPT
  {
    return kind_;
  }

  inline
  sysyfParser::symbol_kind_type
  sysyfParser::by_kind::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }

} // yy
#line 2836 "/home/scarlett/Documents/compile/h10/expProject122-761/build/sysyfParser.h"




#endif // !YY_YY_HOME_SCARLETT_DOCUMENTS_COMPILE_H10_EXPPROJECT122_761_BUILD_SYSYFPARSER_H_INCLUDED
