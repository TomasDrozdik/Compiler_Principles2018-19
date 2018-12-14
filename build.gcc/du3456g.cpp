// A Bison parser, made by GNU Bison 3.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

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

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.





#include "du3456g.hpp"


// Unqualified %code blocks.
#line 39 "../private-src/du3456g.y" // lalr1.cc:437

	// this code is emitted to du3456g.cpp

	// declare yylex here
	#include "bisonflex.hpp"
	YY_DECL;

	// allow access to context
	#include "dutables.hpp"

	// other user-required contents
	#include <assert.h>
	#include <stdlib.h>


    /* local stuff */
    using namespace mlc;

#line 64 "du3456g.cpp" // lalr1.cc:437


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
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

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
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
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
#line 159 "du3456g.cpp" // lalr1.cc:512

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
   mlaskal_parser ::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
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
              // Fall through.
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


  /// Build a parser object.
   mlaskal_parser :: mlaskal_parser  (mlc::yyscan_t2 yyscanner_yyarg, mlc::MlaskalCtx* ctx_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      yyscanner (yyscanner_yyarg),
      ctx (ctx_yyarg)
  {}

   mlaskal_parser ::~ mlaskal_parser  ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
   mlaskal_parser ::by_state::by_state ()
    : state (empty_state)
  {}

   mlaskal_parser ::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  void
   mlaskal_parser ::by_state::clear ()
  {
    state = empty_state;
  }

  void
   mlaskal_parser ::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

   mlaskal_parser ::by_state::by_state (state_type s)
    : state (s)
  {}

   mlaskal_parser ::symbol_number_type
   mlaskal_parser ::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

   mlaskal_parser ::stack_symbol_type::stack_symbol_type ()
  {}

   mlaskal_parser ::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 44: // FOR_DIRECTION
        value.YY_MOVE_OR_COPY< mlc::DUTOKGE_FOR_DIRECTION > (YY_MOVE (that.value));
        break;

      case 43: // OPER_MUL
        value.YY_MOVE_OR_COPY< mlc::DUTOKGE_OPER_MUL > (YY_MOVE (that.value));
        break;

      case 41: // OPER_REL
        value.YY_MOVE_OR_COPY< mlc::DUTOKGE_OPER_REL > (YY_MOVE (that.value));
        break;

      case 42: // OPER_SIGNADD
        value.YY_MOVE_OR_COPY< mlc::DUTOKGE_OPER_SIGNADD > (YY_MOVE (that.value));
        break;

      case 26: // IDENTIFIER
      case 63: // funcProcHeader
      case 68: // procedureHeader
      case 70: // functionHeader
        value.YY_MOVE_OR_COPY< mlc::ls_id_index > (YY_MOVE (that.value));
        break;

      case 27: // UINT
      case 97: // ordinalConstant
        value.YY_MOVE_OR_COPY< mlc::ls_int_index > (YY_MOVE (that.value));
        break;

      case 28: // REAL
        value.YY_MOVE_OR_COPY< mlc::ls_real_index > (YY_MOVE (that.value));
        break;

      case 29: // STRING
        value.YY_MOVE_OR_COPY< mlc::ls_str_index > (YY_MOVE (that.value));
        break;

      case 69: // functionParameters
      case 71: // formalParameters
      case 72: // formalParameterss
        value.YY_MOVE_OR_COPY< mlc::parameter_list_ptr > (YY_MOVE (that.value));
        break;

      case 73: // type
      case 74: // ordinalType
      case 75: // arrayType
      case 76: // ordinalOrID
        value.YY_MOVE_OR_COPY< mlc::type_pointer > (YY_MOVE (that.value));
        break;

      case 58: // identifiers
        value.YY_MOVE_OR_COPY< std::deque<mlc::ls_id_index> > (YY_MOVE (that.value));
        break;

      case 77: // ordinalOrIDs
        value.YY_MOVE_OR_COPY< std::deque<mlc::type_pointer> > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if defined __cplusplus && 201103L <= __cplusplus
    // that is emptied.
    that.state = empty_state;
#endif
  }

   mlaskal_parser ::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 44: // FOR_DIRECTION
        value.move< mlc::DUTOKGE_FOR_DIRECTION > (YY_MOVE (that.value));
        break;

      case 43: // OPER_MUL
        value.move< mlc::DUTOKGE_OPER_MUL > (YY_MOVE (that.value));
        break;

      case 41: // OPER_REL
        value.move< mlc::DUTOKGE_OPER_REL > (YY_MOVE (that.value));
        break;

      case 42: // OPER_SIGNADD
        value.move< mlc::DUTOKGE_OPER_SIGNADD > (YY_MOVE (that.value));
        break;

      case 26: // IDENTIFIER
      case 63: // funcProcHeader
      case 68: // procedureHeader
      case 70: // functionHeader
        value.move< mlc::ls_id_index > (YY_MOVE (that.value));
        break;

      case 27: // UINT
      case 97: // ordinalConstant
        value.move< mlc::ls_int_index > (YY_MOVE (that.value));
        break;

      case 28: // REAL
        value.move< mlc::ls_real_index > (YY_MOVE (that.value));
        break;

      case 29: // STRING
        value.move< mlc::ls_str_index > (YY_MOVE (that.value));
        break;

      case 69: // functionParameters
      case 71: // formalParameters
      case 72: // formalParameterss
        value.move< mlc::parameter_list_ptr > (YY_MOVE (that.value));
        break;

      case 73: // type
      case 74: // ordinalType
      case 75: // arrayType
      case 76: // ordinalOrID
        value.move< mlc::type_pointer > (YY_MOVE (that.value));
        break;

      case 58: // identifiers
        value.move< std::deque<mlc::ls_id_index> > (YY_MOVE (that.value));
        break;

      case 77: // ordinalOrIDs
        value.move< std::deque<mlc::type_pointer> > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

#if defined __cplusplus && __cplusplus < 201103L
   mlaskal_parser ::stack_symbol_type&
   mlaskal_parser ::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 44: // FOR_DIRECTION
        value.move< mlc::DUTOKGE_FOR_DIRECTION > (that.value);
        break;

      case 43: // OPER_MUL
        value.move< mlc::DUTOKGE_OPER_MUL > (that.value);
        break;

      case 41: // OPER_REL
        value.move< mlc::DUTOKGE_OPER_REL > (that.value);
        break;

      case 42: // OPER_SIGNADD
        value.move< mlc::DUTOKGE_OPER_SIGNADD > (that.value);
        break;

      case 26: // IDENTIFIER
      case 63: // funcProcHeader
      case 68: // procedureHeader
      case 70: // functionHeader
        value.move< mlc::ls_id_index > (that.value);
        break;

      case 27: // UINT
      case 97: // ordinalConstant
        value.move< mlc::ls_int_index > (that.value);
        break;

      case 28: // REAL
        value.move< mlc::ls_real_index > (that.value);
        break;

      case 29: // STRING
        value.move< mlc::ls_str_index > (that.value);
        break;

      case 69: // functionParameters
      case 71: // formalParameters
      case 72: // formalParameterss
        value.move< mlc::parameter_list_ptr > (that.value);
        break;

      case 73: // type
      case 74: // ordinalType
      case 75: // arrayType
      case 76: // ordinalOrID
        value.move< mlc::type_pointer > (that.value);
        break;

      case 58: // identifiers
        value.move< std::deque<mlc::ls_id_index> > (that.value);
        break;

      case 77: // ordinalOrIDs
        value.move< std::deque<mlc::type_pointer> > (that.value);
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
   mlaskal_parser ::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
   mlaskal_parser ::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  void
   mlaskal_parser ::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
   mlaskal_parser ::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if defined __cplusplus && 201103L <= __cplusplus
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
   mlaskal_parser ::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
   mlaskal_parser ::debug_stream () const
  {
    return *yycdebug_;
  }

  void
   mlaskal_parser ::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


   mlaskal_parser ::debug_level_type
   mlaskal_parser ::debug_level () const
  {
    return yydebug_;
  }

  void
   mlaskal_parser ::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

   mlaskal_parser ::state_type
   mlaskal_parser ::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
   mlaskal_parser ::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
   mlaskal_parser ::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
   mlaskal_parser ::operator() ()
  {
    return parse ();
  }

  int
   mlaskal_parser ::parse ()
  {
    // State.
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


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << '\n';

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (yyscanner, ctx));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

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
    yypush_ ("Shifting", yyn, YY_MOVE (yyla));
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
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
      case 44: // FOR_DIRECTION
        yylhs.value.emplace< mlc::DUTOKGE_FOR_DIRECTION > ();
        break;

      case 43: // OPER_MUL
        yylhs.value.emplace< mlc::DUTOKGE_OPER_MUL > ();
        break;

      case 41: // OPER_REL
        yylhs.value.emplace< mlc::DUTOKGE_OPER_REL > ();
        break;

      case 42: // OPER_SIGNADD
        yylhs.value.emplace< mlc::DUTOKGE_OPER_SIGNADD > ();
        break;

      case 26: // IDENTIFIER
      case 63: // funcProcHeader
      case 68: // procedureHeader
      case 70: // functionHeader
        yylhs.value.emplace< mlc::ls_id_index > ();
        break;

      case 27: // UINT
      case 97: // ordinalConstant
        yylhs.value.emplace< mlc::ls_int_index > ();
        break;

      case 28: // REAL
        yylhs.value.emplace< mlc::ls_real_index > ();
        break;

      case 29: // STRING
        yylhs.value.emplace< mlc::ls_str_index > ();
        break;

      case 69: // functionParameters
      case 71: // formalParameters
      case 72: // formalParameterss
        yylhs.value.emplace< mlc::parameter_list_ptr > ();
        break;

      case 73: // type
      case 74: // ordinalType
      case 75: // arrayType
      case 76: // ordinalOrID
        yylhs.value.emplace< mlc::type_pointer > ();
        break;

      case 58: // identifiers
        yylhs.value.emplace< std::deque<mlc::ls_id_index> > ();
        break;

      case 77: // ordinalOrIDs
        yylhs.value.emplace< std::deque<mlc::type_pointer> > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
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
  case 5:
#line 141 "../private-src/du3456g.y" // lalr1.cc:906
    {
					ctx->tab->add_label_entry(yystack_[2].location, yystack_[2].value.as< mlc::ls_int_index > (), ctx->tab->new_label());
				}
#line 785 "du3456g.cpp" // lalr1.cc:906
    break;

  case 7:
#line 149 "../private-src/du3456g.y" // lalr1.cc:906
    {
						ctx->tab->add_label_entry(yystack_[1].location, yystack_[1].value.as< mlc::ls_int_index > (), ctx->tab->new_label());
					}
#line 793 "du3456g.cpp" // lalr1.cc:906
    break;

  case 10:
#line 163 "../private-src/du3456g.y" // lalr1.cc:906
    {
						ctx->tab->add_const_int(yystack_[3].location, yystack_[3].value.as< mlc::ls_id_index > (), yystack_[1].value.as< mlc::ls_int_index > ());
					}
#line 801 "du3456g.cpp" // lalr1.cc:906
    break;

  case 11:
#line 170 "../private-src/du3456g.y" // lalr1.cc:906
    {
						ctx->tab->add_const_real(yystack_[3].location, yystack_[3].value.as< mlc::ls_id_index > (), yystack_[1].value.as< mlc::ls_real_index > ());
					}
#line 809 "du3456g.cpp" // lalr1.cc:906
    break;

  case 12:
#line 177 "../private-src/du3456g.y" // lalr1.cc:906
    {
						ctx->tab->add_const_str(yystack_[3].location, yystack_[3].value.as< mlc::ls_id_index > (), yystack_[1].value.as< mlc::ls_str_index > ());
					}
#line 817 "du3456g.cpp" // lalr1.cc:906
    break;

  case 13:
#line 184 "../private-src/du3456g.y" // lalr1.cc:906
    {
						auto sp = ctx->tab->find_symbol(yystack_[1].value.as< mlc::ls_id_index > ());
						auto type = sp->access_const()->type()->cat();
						if (type == TCAT_INT) {
							auto int_idx = sp->access_const()->access_int_const()->int_value();
							if (sp->kind() != SKIND_CONST) {
								message(DUERR_NOTCONST, yystack_[1].location, *int_idx);
							}
							ctx->tab->add_const_int(yystack_[3].location, yystack_[3].value.as< mlc::ls_id_index > (), int_idx);
						}
						else if (type == TCAT_REAL) {
							auto real_idx = sp->access_const()->access_real_const()->real_value();
							if (sp->kind() != SKIND_CONST) {
								message(DUERR_NOTCONST, yystack_[1].location, *real_idx);
							}
							ctx->tab->add_const_real(yystack_[3].location, yystack_[3].value.as< mlc::ls_id_index > (), real_idx);
						}
						else if (type == TCAT_STR) {
							auto str_idx = sp->access_const()->access_str_const()->str_value();
							if (sp->kind() != SKIND_CONST) {
								message(DUERR_NOTCONST, yystack_[1].location, *str_idx);
							}
							ctx->tab->add_const_str(yystack_[3].location, yystack_[3].value.as< mlc::ls_id_index > (), str_idx);
						}
						else if (type == TCAT_BOOL) {
							auto bool_val = sp->access_const()->access_bool_const()->bool_value();
							if (sp->kind() != SKIND_CONST) {
								message(DUERR_NOTCONST, yystack_[1].location, bool_val);
							}
							ctx->tab->add_const_bool(yystack_[3].location, yystack_[3].value.as< mlc::ls_id_index > (), bool_val);
						}
					}
#line 854 "du3456g.cpp" // lalr1.cc:906
    break;

  case 14:
#line 221 "../private-src/du3456g.y" // lalr1.cc:906
    {
						auto int_idx = yystack_[1].value.as< mlc::ls_int_index > ();
						if (yystack_[2].value.as< mlc::DUTOKGE_OPER_SIGNADD > () == mlc::DUTOKGE_OPER_SIGNADD::DUTOKGE_MINUS) {
  							int_idx = ctx->tab->ls_int().add(- *int_idx);
						}

						ctx->tab->add_const_int(yystack_[4].location, yystack_[4].value.as< mlc::ls_id_index > (), int_idx);
					}
#line 867 "du3456g.cpp" // lalr1.cc:906
    break;

  case 15:
#line 234 "../private-src/du3456g.y" // lalr1.cc:906
    {
						auto real_idx = yystack_[1].value.as< mlc::ls_real_index > ();
						if (yystack_[2].value.as< mlc::DUTOKGE_OPER_SIGNADD > () == mlc::DUTOKGE_OPER_SIGNADD::DUTOKGE_MINUS) {
  							real_idx = ctx->tab->ls_real().add(- *real_idx);
						}

						ctx->tab->add_const_real(yystack_[4].location, yystack_[4].value.as< mlc::ls_id_index > (), real_idx);
					}
#line 880 "du3456g.cpp" // lalr1.cc:906
    break;

  case 20:
#line 257 "../private-src/du3456g.y" // lalr1.cc:906
    {
					ctx->tab->add_type(yystack_[3].location, yystack_[3].value.as< mlc::ls_id_index > (), yystack_[1].value.as< mlc::type_pointer > ());
				}
#line 888 "du3456g.cpp" // lalr1.cc:906
    break;

  case 25:
#line 277 "../private-src/du3456g.y" // lalr1.cc:906
    {
					ctx->tab->add_var(yystack_[4].location, yystack_[4].value.as< mlc::ls_id_index > (), yystack_[1].value.as< mlc::type_pointer > ());

					for (mlc::ls_id_index id_idx : yystack_[3].value.as< std::deque<mlc::ls_id_index> > ()) {
								ctx->tab->add_var(yystack_[3].location, id_idx, yystack_[1].value.as< mlc::type_pointer > ());
					}
				}
#line 900 "du3456g.cpp" // lalr1.cc:906
    break;

  case 26:
#line 286 "../private-src/du3456g.y" // lalr1.cc:906
    {
						yylhs.value.as< std::deque<mlc::ls_id_index> > () = std::deque<mlc::ls_id_index>();
					}
#line 908 "du3456g.cpp" // lalr1.cc:906
    break;

  case 27:
#line 292 "../private-src/du3456g.y" // lalr1.cc:906
    {
						auto id_deq = yystack_[0].value.as< std::deque<mlc::ls_id_index> > ();
						id_deq.push_front(yystack_[1].value.as< mlc::ls_id_index > ());
						yylhs.value.as< std::deque<mlc::ls_id_index> > () = id_deq;
					}
#line 918 "du3456g.cpp" // lalr1.cc:906
    break;

  case 32:
#line 309 "../private-src/du3456g.y" // lalr1.cc:906
    {
						ctx->tab->enter(yystack_[1].location, yystack_[1].value.as< mlc::ls_id_index > ());
					}
#line 926 "du3456g.cpp" // lalr1.cc:906
    break;

  case 34:
#line 316 "../private-src/du3456g.y" // lalr1.cc:906
    {
						yylhs.value.as< mlc::ls_id_index > () = yystack_[0].value.as< mlc::ls_id_index > ();
					}
#line 934 "du3456g.cpp" // lalr1.cc:906
    break;

  case 35:
#line 320 "../private-src/du3456g.y" // lalr1.cc:906
    {
						yylhs.value.as< mlc::ls_id_index > () = yystack_[0].value.as< mlc::ls_id_index > ();
					}
#line 942 "du3456g.cpp" // lalr1.cc:906
    break;

  case 42:
#line 353 "../private-src/du3456g.y" // lalr1.cc:906
    {
				ctx->tab->leave(yystack_[0].location);
			}
#line 950 "du3456g.cpp" // lalr1.cc:906
    break;

  case 43:
#line 361 "../private-src/du3456g.y" // lalr1.cc:906
    {
							ctx->tab->add_proc(yystack_[2].location, yystack_[1].value.as< mlc::ls_id_index > (), yystack_[0].value.as< mlc::parameter_list_ptr > ());
							yylhs.value.as< mlc::ls_id_index > () = yystack_[1].value.as< mlc::ls_id_index > ();
						}
#line 959 "du3456g.cpp" // lalr1.cc:906
    break;

  case 44:
#line 368 "../private-src/du3456g.y" // lalr1.cc:906
    {
							yylhs.value.as< mlc::parameter_list_ptr > () = mlc::create_parameter_list();
						}
#line 967 "du3456g.cpp" // lalr1.cc:906
    break;

  case 45:
#line 374 "../private-src/du3456g.y" // lalr1.cc:906
    {
							yylhs.value.as< mlc::parameter_list_ptr > () = yystack_[1].value.as< mlc::parameter_list_ptr > ();
						}
#line 975 "du3456g.cpp" // lalr1.cc:906
    break;

  case 46:
#line 384 "../private-src/du3456g.y" // lalr1.cc:906
    {
						auto ts = ctx->tab->find_symbol(yystack_[0].value.as< mlc::ls_id_index > ())->access_type();
						if (! ts) { message(DUERR_NOTTYPE, yystack_[0].location, * yystack_[0].value.as< mlc::ls_id_index > ()); }
						mlc::type_pointer tp = ts->type();

						ctx->tab->add_fnc(yystack_[4].location, yystack_[3].value.as< mlc::ls_id_index > (), tp, yystack_[2].value.as< mlc::parameter_list_ptr > ());
						yylhs.value.as< mlc::ls_id_index > () = yystack_[3].value.as< mlc::ls_id_index > ();
					}
#line 988 "du3456g.cpp" // lalr1.cc:906
    break;

  case 47:
#line 400 "../private-src/du3456g.y" // lalr1.cc:906
    {
							auto pl_ptr = mlc::create_parameter_list();

							auto ts = ctx->tab->find_symbol(yystack_[1].value.as< mlc::ls_id_index > ())->access_type();
							if (! ts) { message(DUERR_NOTTYPE, yystack_[1].location, * yystack_[1].value.as< mlc::ls_id_index > ()); }

							mlc::type_pointer tp = ts->type();

							pl_ptr->append_parameter_by_reference(yystack_[4].value.as< mlc::ls_id_index > (), tp);
							for (mlc::ls_id_index id_idx : yystack_[3].value.as< std::deque<mlc::ls_id_index> > ()) {
								pl_ptr->append_parameter_by_reference(id_idx, tp);
							}

							pl_ptr->append_and_kill(yystack_[0].value.as< mlc::parameter_list_ptr > ());
							yylhs.value.as< mlc::parameter_list_ptr > () = pl_ptr;
						}
#line 1009 "du3456g.cpp" // lalr1.cc:906
    break;

  case 48:
#line 421 "../private-src/du3456g.y" // lalr1.cc:906
    {
							auto pl_ptr = mlc::create_parameter_list();

							auto ts = ctx->tab->find_symbol(yystack_[1].value.as< mlc::ls_id_index > ())->access_type();
							if (! ts) { message(DUERR_NOTTYPE, yystack_[1].location, * yystack_[1].value.as< mlc::ls_id_index > ()); }

							mlc::type_pointer tp = ts->type();
							pl_ptr->append_parameter_by_value(yystack_[4].value.as< mlc::ls_id_index > (), tp);
							for (mlc::ls_id_index ids : yystack_[3].value.as< std::deque<mlc::ls_id_index> > ()) {
								pl_ptr->append_parameter_by_value(ids, tp);
							}

							pl_ptr->append_and_kill(yystack_[0].value.as< mlc::parameter_list_ptr > ());

							yylhs.value.as< mlc::parameter_list_ptr > () = pl_ptr;
						}
#line 1030 "du3456g.cpp" // lalr1.cc:906
    break;

  case 49:
#line 440 "../private-src/du3456g.y" // lalr1.cc:906
    {
							yylhs.value.as< mlc::parameter_list_ptr > () = mlc::create_parameter_list();
						}
#line 1038 "du3456g.cpp" // lalr1.cc:906
    break;

  case 50:
#line 445 "../private-src/du3456g.y" // lalr1.cc:906
    {
							yylhs.value.as< mlc::parameter_list_ptr > () = yystack_[0].value.as< mlc::parameter_list_ptr > ();
						}
#line 1046 "du3456g.cpp" // lalr1.cc:906
    break;

  case 51:
#line 455 "../private-src/du3456g.y" // lalr1.cc:906
    {
				yylhs.value.as< mlc::type_pointer > () = yystack_[0].value.as< mlc::type_pointer > ();
			}
#line 1054 "du3456g.cpp" // lalr1.cc:906
    break;

  case 52:
#line 459 "../private-src/du3456g.y" // lalr1.cc:906
    {
				yylhs.value.as< mlc::type_pointer > () = yystack_[0].value.as< mlc::type_pointer > ();
			}
#line 1062 "du3456g.cpp" // lalr1.cc:906
    break;

  case 53:
#line 463 "../private-src/du3456g.y" // lalr1.cc:906
    {
				auto ts = ctx->tab->find_symbol(yystack_[0].value.as< mlc::ls_id_index > ())->access_type();
				if (! ts) { message(DUERR_NOTTYPE, yystack_[0].location, * yystack_[0].value.as< mlc::ls_id_index > ()); }
				yylhs.value.as< mlc::type_pointer > () = ts->type();
			}
#line 1072 "du3456g.cpp" // lalr1.cc:906
    break;

  case 54:
#line 473 "../private-src/du3456g.y" // lalr1.cc:906
    {
						yylhs.value.as< mlc::type_pointer > () = ctx->tab->create_range_type(yystack_[2].value.as< mlc::ls_int_index > (), yystack_[0].value.as< mlc::ls_int_index > ());
					}
#line 1080 "du3456g.cpp" // lalr1.cc:906
    break;

  case 55:
#line 489 "../private-src/du3456g.y" // lalr1.cc:906
    {
					if (yystack_[3].value.as< std::deque<mlc::type_pointer> > ().empty()) {
						yylhs.value.as< mlc::type_pointer > () = ctx->tab->create_array_type(yystack_[4].value.as< mlc::type_pointer > (), yystack_[0].value.as< mlc::type_pointer > ());
					}
					else {
						auto arr = ctx->tab->create_array_type(yystack_[3].value.as< std::deque<mlc::type_pointer> > ().back(), yystack_[0].value.as< mlc::type_pointer > ());
						yystack_[3].value.as< std::deque<mlc::type_pointer> > ().pop_back();
						while (!yystack_[3].value.as< std::deque<mlc::type_pointer> > ().empty()) {
							arr = ctx->tab->create_array_type(yystack_[3].value.as< std::deque<mlc::type_pointer> > ().back(), arr);
							yystack_[3].value.as< std::deque<mlc::type_pointer> > ().pop_back();
						}
						yylhs.value.as< mlc::type_pointer > () = ctx->tab->create_array_type(yystack_[4].value.as< mlc::type_pointer > (), arr);
					}
				}
#line 1099 "du3456g.cpp" // lalr1.cc:906
    break;

  case 56:
#line 506 "../private-src/du3456g.y" // lalr1.cc:906
    {
						ctx->tab->find_symbol(yystack_[0].value.as< mlc::ls_id_index > ());
						auto ts = ctx->tab->find_symbol(yystack_[0].value.as< mlc::ls_id_index > ())->access_type();
						if (! ts) { message(DUERR_NOTTYPE, yystack_[0].location, * yystack_[0].value.as< mlc::ls_id_index > ()); }
						yylhs.value.as< mlc::type_pointer > () = ts->type();
					}
#line 1110 "du3456g.cpp" // lalr1.cc:906
    break;

  case 57:
#line 513 "../private-src/du3456g.y" // lalr1.cc:906
    {
						yylhs.value.as< mlc::type_pointer > () = yystack_[0].value.as< mlc::type_pointer > ();
					}
#line 1118 "du3456g.cpp" // lalr1.cc:906
    break;

  case 58:
#line 519 "../private-src/du3456g.y" // lalr1.cc:906
    {
						yylhs.value.as< std::deque<mlc::type_pointer> > () = std::deque<mlc::type_pointer>();
					}
#line 1126 "du3456g.cpp" // lalr1.cc:906
    break;

  case 59:
#line 525 "../private-src/du3456g.y" // lalr1.cc:906
    {
						auto type_deq = yystack_[0].value.as< std::deque<mlc::type_pointer> > ();
						type_deq.push_front(yystack_[1].value.as< mlc::type_pointer > ());
						yylhs.value.as< std::deque<mlc::type_pointer> > () = type_deq;

					}
#line 1137 "du3456g.cpp" // lalr1.cc:906
    break;

  case 109:
#line 708 "../private-src/du3456g.y" // lalr1.cc:906
    {
							auto sp = ctx->tab->find_symbol(yystack_[0].value.as< mlc::ls_id_index > ());
							auto type = sp->access_const()->type()->cat();
							if (type == TCAT_INT) {
								auto int_idx = sp->access_const()->access_int_const()->int_value();
								if (yystack_[1].value.as< mlc::DUTOKGE_OPER_SIGNADD > () == mlc::DUTOKGE_OPER_SIGNADD::DUTOKGE_MINUS) {
  									int_idx = ctx->tab->ls_int().add(- *int_idx);
								}
								//TODO potentionaly DUERR_NOTCONST
								yylhs.value.as< mlc::ls_int_index > () = int_idx;
							}
							//TODO potentionaly DUERR_NOTORDINAL
						}
#line 1155 "du3456g.cpp" // lalr1.cc:906
    break;

  case 110:
#line 722 "../private-src/du3456g.y" // lalr1.cc:906
    {
							auto sp = ctx->tab->find_symbol(yystack_[0].value.as< mlc::ls_id_index > ());
							auto type = sp->access_const()->type()->cat();
							if (type == TCAT_INT) {
								auto int_idx = sp->access_const()->access_int_const()->int_value();
								//TODO potentionaly DUERR_NOTCONST
								yylhs.value.as< mlc::ls_int_index > () = int_idx;
							}
							//TODO potentionaly DUERR_NOTORDINAL
						}
#line 1170 "du3456g.cpp" // lalr1.cc:906
    break;

  case 111:
#line 734 "../private-src/du3456g.y" // lalr1.cc:906
    {
							auto int_idx = yystack_[0].value.as< mlc::ls_int_index > ();
							if (yystack_[1].value.as< mlc::DUTOKGE_OPER_SIGNADD > () == mlc::DUTOKGE_OPER_SIGNADD::DUTOKGE_MINUS) {
  								int_idx = ctx->tab->ls_int().add(- *int_idx);
							}

							yylhs.value.as< mlc::ls_int_index > () = int_idx;
						}
#line 1183 "du3456g.cpp" // lalr1.cc:906
    break;

  case 112:
#line 742 "../private-src/du3456g.y" // lalr1.cc:906
    { yylhs.value.as< mlc::ls_int_index > () = yystack_[0].value.as< mlc::ls_int_index > (); }
#line 1189 "du3456g.cpp" // lalr1.cc:906
    break;


#line 1193 "du3456g.cpp" // lalr1.cc:906
            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

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
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
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

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
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

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
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
   mlaskal_parser ::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  // Generate an error message.
  std::string
   mlaskal_parser ::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

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
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

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
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short  mlaskal_parser ::yypact_ninf_ = -141;

  const signed char  mlaskal_parser ::yytable_ninf_ = -111;

  const short
   mlaskal_parser ::yypact_[] =
  {
      31,    11,    41,    18,  -141,    47,    33,    38,    78,    52,
    -141,    59,    81,    63,    61,    60,    59,    71,    95,    52,
    -141,    35,    59,  -141,    70,    71,    79,    36,  -141,    76,
      77,    80,    82,   -11,  -141,     3,    71,  -141,    72,    79,
      83,    85,   106,    36,    93,  -141,  -141,  -141,  -141,  -141,
    -141,    94,    97,    90,    84,  -141,    45,    99,  -141,  -141,
      98,  -141,   105,   100,    79,  -141,   108,   108,    74,  -141,
      36,  -141,  -141,  -141,  -141,    -2,  -141,  -141,  -141,    39,
      72,     3,  -141,     6,  -141,   107,    74,   118,    91,    91,
      74,   120,    -7,   113,   102,  -141,  -141,  -141,  -141,  -141,
    -141,     4,  -141,  -141,    47,    84,  -141,   124,  -141,  -141,
    -141,   127,   133,    72,   114,   135,   102,  -141,   125,   128,
    -141,  -141,  -141,    91,   125,   126,   146,   -14,    -3,   123,
    -141,   148,   102,   129,    91,   122,    74,   156,    91,    91,
      78,   138,    -2,   131,  -141,    72,   137,  -141,  -141,   163,
    -141,    91,   139,    -3,    74,    91,    91,  -141,   125,   125,
    -141,   125,  -141,   122,   152,    91,   140,   142,  -141,  -141,
     102,  -141,   145,  -141,    81,  -141,   124,   165,   147,   153,
    -141,   144,  -141,  -141,  -141,   166,  -141,  -141,    -3,    -3,
    -141,  -141,  -141,    91,   141,  -141,    91,  -141,    91,   143,
      95,  -141,     3,   158,   157,  -141,   122,  -141,  -141,  -141,
      91,  -141,   145,  -141,   178,  -141,   157,     6,  -141,  -141,
    -141,   169,  -141,    74,  -141,  -141,   122,   102,  -141,  -141,
     180,  -141
  };

  const unsigned char
   mlaskal_parser ::yydefact_[] =
  {
       0,     0,     0,     0,     1,     4,     0,     0,     8,     6,
       2,     0,    18,     0,     0,     0,    16,     0,    23,     6,
       5,     0,    16,     9,     0,    21,     0,    30,     7,     0,
       0,     0,     0,     0,    17,     0,    21,    19,    26,    28,
       0,     0,    38,    36,     0,    35,    34,    13,    10,    11,
      12,     0,     0,     0,    53,   112,     0,     0,    51,    52,
       0,    22,     0,     0,    28,    24,    44,    44,    60,     3,
      36,    31,    32,    14,    15,     0,   109,   111,    20,     0,
      26,     0,    29,     0,    43,     0,    60,     0,     0,     0,
      60,     0,    78,     0,    40,    62,    64,    65,    66,    67,
      71,     0,    83,    37,     4,    56,    57,    58,   110,    54,
      27,     0,     0,    26,     0,     0,    40,    80,     0,    82,
     106,   107,   108,     0,     0,   100,     0,    90,    96,   104,
      99,     0,    40,     0,     0,     0,    60,     0,     0,     0,
       8,     0,     0,     0,    25,    26,     0,    45,    46,     0,
     103,     0,     0,    96,    60,     0,     0,    89,     0,     0,
      94,     0,    95,     0,     0,     0,     0,    87,    61,    63,
      40,    39,    85,    77,    18,    33,    58,     0,     0,     0,
      68,     0,   102,    93,    73,    62,    92,    91,    96,    96,
     105,    70,    75,     0,     0,    79,     0,    41,     0,     0,
      23,    59,     0,     0,    49,   101,     0,    98,    97,    81,
       0,    88,    85,    84,     0,    55,    49,     0,    48,    69,
      74,     0,    86,    60,    47,    50,     0,    40,    72,    76,
       0,    42
  };

  const short
   mlaskal_parser ::yypgoto_[] =
  {
    -141,  -141,  -141,    86,   172,    53,   181,   173,    20,   179,
     161,    -1,   174,   -70,   134,  -141,   175,  -141,  -141,   136,
    -141,  -111,  -141,  -141,   149,  -141,   -16,   -13,   -80,   -66,
    -141,    62,    29,   -84,  -128,  -127,  -141,  -141,  -141,  -141,
     -68,  -141,    -5,  -140,   -85,  -141,   -82,  -101,  -139,  -106,
    -141,  -141,   130
  };

  const short
   mlaskal_parser ::yydefgoto_[] =
  {
      -1,     2,     7,     8,    14,    12,    22,    23,    18,    36,
      37,    27,    64,    63,    65,    42,    70,   104,    44,    71,
      69,   137,   141,    45,    84,    46,   114,   218,    57,    58,
      59,   107,   143,    94,    95,    96,    97,    98,    99,   100,
     125,   102,   199,   166,   167,   157,   127,   128,   160,   129,
     162,   130,    60
  };

  const short
   mlaskal_parser ::yytable_[] =
  {
     101,   111,   116,   126,   131,   149,   132,   168,   169,   106,
     110,   181,   150,   112,   183,    53,    51,    52,   101,   155,
     158,   164,   101,   153,   105,    55,   185,   156,   134,    54,
      55,   -82,   113,   -82,     1,   191,   192,     3,   152,   159,
      56,     4,   138,   146,   139,    56,    40,    41,     5,   207,
     208,     6,   170,   172,   173,   190,   211,   188,   189,   197,
       9,    29,    30,    31,    32,   108,    55,   101,   101,    10,
     184,    76,    77,   186,   187,   178,   106,    33,   219,   220,
     194,    56,    86,    11,    13,    15,   101,    17,    87,    88,
      19,    20,    89,    21,    90,   101,    91,    24,   228,   229,
      92,    93,    26,    35,    62,    38,    47,    48,   209,    66,
      49,    67,    50,   212,    68,   118,   230,   119,   120,   121,
     122,  -110,   215,    72,    73,   221,   123,    74,    75,    78,
      86,    80,   136,   124,    81,    79,    87,    88,   101,   227,
      89,   115,    90,    83,    91,   117,   133,   135,    92,   118,
     147,   119,   120,   121,   122,   101,   142,   144,   101,   145,
     123,   148,   154,   151,   138,   171,   161,   163,   175,   165,
     177,   179,   180,   193,   196,   182,   195,   198,   202,   204,
     205,   203,   213,   206,   216,   210,   223,   217,   226,   231,
     140,    28,    16,   174,   200,    34,    25,    61,    82,   214,
      39,   225,    43,   224,   176,   201,   103,   222,     0,   109,
       0,     0,     0,     0,     0,     0,    85
  };

  const short
   mlaskal_parser ::yycheck_[] =
  {
      68,    81,    86,    88,    89,   116,    90,   135,   135,    75,
      80,   151,   118,     7,   153,    12,    27,    28,    86,    33,
      23,   132,    90,   124,    26,    27,   154,    41,    35,    26,
      27,    38,    26,    40,     3,   163,   163,    26,   123,    42,
      42,     0,    38,   113,    40,    42,    10,    11,    30,   188,
     189,     4,   136,   138,   139,   161,   196,   158,   159,   170,
      27,    26,    27,    28,    29,    26,    27,   135,   136,    31,
     154,    26,    27,   155,   156,   145,   142,    42,   206,   206,
     165,    42,     8,     5,    32,    26,   154,     6,    14,    15,
      27,    30,    18,    33,    20,   163,    22,    26,   226,   226,
      26,    27,     7,    33,    32,    26,    30,    30,   193,    26,
      30,    26,    30,   198,     8,    24,   227,    26,    27,    28,
      29,    37,   202,    30,    30,   210,    35,    30,    38,    30,
       8,    26,    30,    42,    34,    37,    14,    15,   206,   223,
      18,    34,    20,    35,    22,    27,    26,    34,    26,    24,
      36,    26,    27,    28,    29,   223,    32,    30,   226,    26,
      35,    26,    16,    35,    38,     9,    43,    19,    30,    40,
      39,    34,     9,    21,    32,    36,    36,    32,    13,    26,
      36,    34,    39,    17,    26,    44,     8,    30,    19,     9,
     104,    19,    11,   140,   174,    22,    17,    36,    64,   200,
      26,   217,    27,   216,   142,   176,    70,   212,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    67
  };

  const unsigned char
   mlaskal_parser ::yystos_[] =
  {
       0,     3,    46,    26,     0,    30,     4,    47,    48,    27,
      31,     5,    50,    32,    49,    26,    51,     6,    53,    27,
      30,    33,    51,    52,    26,    54,     7,    56,    49,    26,
      27,    28,    29,    42,    52,    33,    54,    55,    26,    57,
      10,    11,    60,    61,    63,    68,    70,    30,    30,    30,
      30,    27,    28,    12,    26,    27,    42,    73,    74,    75,
      97,    55,    32,    58,    57,    59,    26,    26,     8,    65,
      61,    64,    30,    30,    30,    38,    26,    27,    30,    37,
      26,    34,    59,    35,    69,    69,     8,    14,    15,    18,
      20,    22,    26,    27,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    64,    62,    26,    74,    76,    26,    97,
      58,    73,     7,    26,    71,    34,    78,    27,    24,    26,
      27,    28,    29,    35,    42,    85,    89,    91,    92,    94,
      96,    89,    78,    26,    35,    34,    30,    66,    38,    40,
      48,    67,    32,    77,    30,    26,    58,    36,    26,    66,
      94,    35,    89,    92,    16,    33,    41,    90,    23,    42,
      93,    43,    95,    19,    66,    40,    88,    89,    79,    80,
      78,     9,    89,    89,    50,    30,    76,    39,    58,    34,
       9,    88,    36,    93,    78,    79,    91,    91,    92,    92,
      94,    79,    80,    21,    89,    36,    32,    66,    32,    87,
      53,    77,    13,    34,    26,    36,    17,    93,    93,    89,
      44,    88,    89,    39,    56,    73,    26,    30,    72,    79,
      80,    89,    87,     8,    72,    71,    19,    78,    79,    80,
      66,     9
  };

  const unsigned char
   mlaskal_parser ::yyr1_[] =
  {
       0,    45,    46,    47,    48,    48,    49,    49,    50,    50,
      51,    51,    51,    51,    51,    51,    52,    52,    53,    53,
      54,    55,    55,    56,    56,    57,    58,    58,    59,    59,
      60,    60,    62,    61,    63,    63,    64,    64,    65,    65,
      66,    66,    67,    68,    69,    69,    70,    71,    71,    72,
      72,    73,    73,    73,    74,    75,    76,    76,    77,    77,
      78,    78,    78,    78,    78,    79,    79,    79,    79,    79,
      79,    79,    79,    80,    80,    80,    80,    81,    82,    82,
      83,    84,    85,    85,    86,    87,    87,    88,    88,    89,
      90,    90,    90,    91,    91,    92,    93,    93,    93,    94,
      94,    94,    94,    94,    95,    95,    96,    96,    96,    97,
      97,    97,    97
  };

  const unsigned char
   mlaskal_parser ::yyr2_[] =
  {
       0,     2,     5,     6,     0,     4,     0,     3,     0,     3,
       4,     4,     4,     4,     5,     5,     0,     2,     0,     3,
       4,     0,     2,     0,     3,     5,     0,     3,     0,     2,
       0,     2,     0,     5,     1,     1,     0,     2,     0,     4,
       0,     3,     8,     3,     0,     3,     5,     6,     5,     0,
       2,     1,     1,     1,     3,     7,     1,     1,     0,     3,
       0,     3,     1,     3,     1,     1,     1,     1,     4,     6,
       4,     1,     8,     4,     6,     4,     8,     3,     1,     4,
       2,     5,     1,     1,     5,     0,     3,     1,     3,     2,
       0,     2,     2,     3,     2,     2,     0,     3,     3,     1,
       1,     4,     3,     2,     0,     2,     1,     1,     1,     2,
       1,     2,     1
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const  mlaskal_parser ::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "PROGRAM", "LABEL", "CONST",
  "TYPE", "VAR", "BEGIN", "END", "PROCEDURE", "FUNCTION", "ARRAY", "OF",
  "GOTO", "IF", "THEN", "ELSE", "WHILE", "DO", "REPEAT", "UNTIL", "FOR",
  "OR", "NOT", "RECORD", "IDENTIFIER", "UINT", "REAL", "STRING",
  "SEMICOLON", "DOT", "COMMA", "EQ", "COLON", "LPAR", "RPAR", "DOTDOT",
  "LSBRA", "RSBRA", "ASSIGN", "OPER_REL", "OPER_SIGNADD", "OPER_MUL",
  "FOR_DIRECTION", "$accept", "mlaskal", "blockP", "labelBlock",
  "uintsLabels", "constBlock", "constantDecl", "constantDecls",
  "typeBlock", "typeDecl", "typeDecls", "varBlock", "varDecl",
  "identifiers", "varDecls", "functionBlock", "funcProcDecl", "$@1",
  "funcProcHeader", "funcProcDecls", "statementsBlock", "statements",
  "block", "procedureHeader", "functionParameters", "functionHeader",
  "formalParameters", "formalParameterss", "type", "ordinalType",
  "arrayType", "ordinalOrID", "ordinalOrIDs", "statement", "matchedStmt",
  "unmatchedStmt", "assignment", "procedureStmt", "gotoStmt", "repeatStmt",
  "variable", "arrayReference", "expressions", "realParameters",
  "expression", "relationalExpression", "simpleExpression", "term",
  "terms", "factor", "factors", "unsignedConstant", "ordinalConstant", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short
   mlaskal_parser ::yyrline_[] =
  {
       0,   120,   120,   127,   136,   137,   145,   146,   154,   155,
     159,   166,   173,   180,   216,   229,   243,   244,   248,   249,
     253,   261,   262,   267,   268,   272,   286,   289,   298,   299,
     303,   304,   309,   307,   315,   319,   324,   325,   329,   330,
     335,   336,   345,   358,   368,   371,   379,   394,   416,   440,
     443,   454,   458,   462,   470,   482,   505,   512,   519,   522,
     537,   538,   541,   542,   545,   547,   548,   549,   550,   554,
     560,   564,   565,   574,   578,   584,   588,   598,   603,   604,
     610,   614,   625,   626,   629,   635,   636,   641,   642,   651,
     654,   655,   657,   661,   664,   668,   671,   672,   675,   680,
     681,   682,   686,   689,   692,   693,   701,   702,   703,   706,
     721,   732,   742
  };

  // Print the state stack on the debug stream.
  void
   mlaskal_parser ::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << '\n';
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
   mlaskal_parser ::yy_reduce_print_ (int yyrule)
  {
    unsigned yylno = yyrline_[yyrule];
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
#line 1729 "du3456g.cpp" // lalr1.cc:1217
#line 752 "../private-src/du3456g.y" // lalr1.cc:1218



namespace yy {

	void mlaskal_parser::error(const location_type& l, const std::string& m)
	{
		message(DUERR_SYNTAX, l, m);
	}

}

