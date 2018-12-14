%language "c++"
%require "3.0.4"
%defines
%define parser_class_name{ mlaskal_parser }
%define api.token.constructor
%define api.token.prefix{DUTOK_}
%define api.value.type variant
%define parse.assert
%define parse.error verbose

%locations
%define api.location.type{ unsigned }

%code requires
{
	// this code is emitted to du3456g.hpp

	// allow references to semantic types in %type
#include "dutables.hpp"

#include <deque>

	// avoid no-case warnings when compiling du3g.hpp
#pragma warning (disable:4065)

// adjust YYLLOC_DEFAULT macro for our api.location.type
#define YYLLOC_DEFAULT(res,rhs,N)	(res = (N)?YYRHSLOC(rhs, 1):YYRHSLOC(rhs, 0))
// supply missing YY_NULL in bfexpg.hpp
#define YY_NULL	0
#define YY_NULLPTR	0
}

%param{ mlc::yyscan_t2 yyscanner }	// formal name "yyscanner" is enforced by flex
%param{ mlc::MlaskalCtx* ctx }

%start mlaskal

%code
{
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
}

%token EOF	0	"end of file"

%token PROGRAM			/* program */
%token LABEL			    /* label */
%token CONST			    /* const */
%token TYPE			    /* type */
%token VAR			    /* var */
%token BEGIN			    /* begin */
%token END			    /* end */
%token PROCEDURE			/* procedure */
%token FUNCTION			/* function */
%token ARRAY			    /* array */
%token OF				    /* of */
%token GOTO			    /* goto */
%token IF				    /* if */
%token THEN			    /* then */
%token ELSE			    /* else */
%token WHILE			    /* while */
%token DO				    /* do */
%token REPEAT			    /* repeat */
%token UNTIL			    /* until */
%token FOR			    /* for */
%token OR				    /* or */
%token NOT			    /* not */
%token RECORD			    /* record */

/* literals */
%token<mlc::ls_id_index> IDENTIFIER			/* identifier */
%token<mlc::ls_int_index> UINT			    /* unsigned integer */
%token<mlc::ls_real_index> REAL			    /* real number */
%token<mlc::ls_str_index> STRING			    /* string */

/* delimiters */
%token SEMICOLON			/* ; */
%token DOT			    /* . */
%token COMMA			    /* , */
%token EQ				    /* = */
%token COLON			    /* : */
%token LPAR			    /* ( */
%token RPAR			    /* ) */
%token DOTDOT			    /* .. */
%token LSBRA			    /* [ */
%token RSBRA			    /* ] */
%token ASSIGN			    /* := */

/* grouped operators and keywords */
%token<mlc::DUTOKGE_OPER_REL> OPER_REL			    /* <, <=, <>, >=, > */
%token<mlc::DUTOKGE_OPER_SIGNADD> OPER_SIGNADD		    /* +, - */
%token<mlc::DUTOKGE_OPER_MUL> OPER_MUL			    /* *, /, div, mod, and */
%token<mlc::DUTOKGE_FOR_DIRECTION> FOR_DIRECTION		    /* to, downto */

%type<mlc::parameter_list_ptr> functionParameters formalParameters formalParameterss
%type<std::deque<mlc::ls_id_index>> identifiers
%type<mlc::ls_id_index> funcProcHeader functionHeader procedureHeader
%type<mlc::type_pointer> type ordinalType arrayType ordinalOrID
%type<std::deque<mlc::type_pointer>> ordinalOrIDs
%type<mlc::ls_int_index> ordinalConstant

%%

/* mlaskal-c-1 */

mlaskal:	PROGRAM
		    IDENTIFIER
		    SEMICOLON
			blockP
			DOT
		;

blockP:		labelBlock
			constBlock
			typeBlock
			varBlock
			functionBlock
			statementsBlock
		;


labelBlock:		/* lambda */
			|	LABEL
				UINT
				uintsLabels
				SEMICOLON
				{
					ctx->tab->add_label_entry(@2, $2, ctx->tab->new_label());
				}
			;
uintsLabels:		/* lambda */
				|	COMMA
					UINT
					uintsLabels
					{
						ctx->tab->add_label_entry(@2, $2, ctx->tab->new_label());
					}
				;

constBlock:		/* lambda */
			|	CONST
				constantDecl
				constantDecls
			;
constantDecl:		IDENTIFIER
					EQ
					UINT
					SEMICOLON
					{
						ctx->tab->add_const_int(@1, $1, $3);
					}
				|	IDENTIFIER
					EQ
					REAL
					SEMICOLON
					{
						ctx->tab->add_const_real(@1, $1, $3);
					}
				|	IDENTIFIER
					EQ
					STRING
					SEMICOLON
					{
						ctx->tab->add_const_str(@1, $1, $3);
					}
				|	IDENTIFIER
					EQ
					IDENTIFIER
					SEMICOLON
					{
						auto sp = ctx->tab->find_symbol($3);
						auto type = sp->access_const()->type()->cat();
						if (type == TCAT_INT) {
							auto int_idx = sp->access_const()->access_int_const()->int_value();
							if (sp->kind() != SKIND_CONST) {
								message(DUERR_NOTCONST, @3, *int_idx);
							}
							ctx->tab->add_const_int(@1, $1, int_idx);
						}
						else if (type == TCAT_REAL) {
							auto real_idx = sp->access_const()->access_real_const()->real_value();
							if (sp->kind() != SKIND_CONST) {
								message(DUERR_NOTCONST, @3, *real_idx);
							}
							ctx->tab->add_const_real(@1, $1, real_idx);
						}
						else if (type == TCAT_STR) {
							auto str_idx = sp->access_const()->access_str_const()->str_value();
							if (sp->kind() != SKIND_CONST) {
								message(DUERR_NOTCONST, @3, *str_idx);
							}
							ctx->tab->add_const_str(@1, $1, str_idx);
						}
						else if (type == TCAT_BOOL) {
							auto bool_val = sp->access_const()->access_bool_const()->bool_value();
							if (sp->kind() != SKIND_CONST) {
								message(DUERR_NOTCONST, @3, bool_val);
							}
							ctx->tab->add_const_bool(@1, $1, bool_val);
						}
					}
				|	IDENTIFIER
					EQ
					OPER_SIGNADD
					UINT
					SEMICOLON
					{
						auto int_idx = $4;
						if ($3 == mlc::DUTOKGE_OPER_SIGNADD::DUTOKGE_MINUS) {
  							int_idx = ctx->tab->ls_int().add(- *int_idx);
						}

						ctx->tab->add_const_int(@1, $1, int_idx);
					}
				|	IDENTIFIER
					EQ
					OPER_SIGNADD
					REAL
					SEMICOLON
					{
						auto real_idx = $4;
						if ($3 == mlc::DUTOKGE_OPER_SIGNADD::DUTOKGE_MINUS) {
  							real_idx = ctx->tab->ls_real().add(- *real_idx);
						}

						ctx->tab->add_const_real(@1, $1, real_idx);
					}
				;
constantDecls:		/* lambda */
				|	constantDecl
					constantDecls
				;

typeBlock:		/* lambda */
			|	TYPE
				typeDecl
				typeDecls
			;
typeDecl:		IDENTIFIER
				EQ
				type
				SEMICOLON
				{
					ctx->tab->add_type(@1, $1, $3);
				}
			;
typeDecls:		/* lambda */
			|	typeDecl
				typeDecls
			;


varBlock:		/* lambda */
			|	VAR
				varDecl
				varDecls
			;
varDecl:		IDENTIFIER
				identifiers
				COLON
				type
				SEMICOLON
				{
					ctx->tab->add_var(@1, $1, $4);

					for (mlc::ls_id_index id_idx : $2) {
								ctx->tab->add_var(@2, id_idx, $4);
					}
				}
			;
identifiers:		/* lambda */
					{
						$$ = std::deque<mlc::ls_id_index>();
					}
				|	COMMA
					IDENTIFIER
					identifiers
					{
						auto id_deq = $3;
						id_deq.push_front($2);
						$$ = id_deq;
					}
				;
varDecls:		/* lambda */
			|	varDecl
				varDecls
			;

functionBlock:		/* lambda */
				|	funcProcDecl
					funcProcDecls
				;
funcProcDecl:		funcProcHeader
					SEMICOLON
					{
						ctx->tab->enter(@1, $1);
					}
					block
					SEMICOLON
				;
funcProcHeader:		functionHeader
					{
						$$ = $1;
					}
				|	procedureHeader
					{
						$$ = $1;
					}
				;
funcProcDecls:		/* lambda */
				|	funcProcDecl
					funcProcDecls
				;

statementsBlock:		/* lambda */
					|	BEGIN
						statement
						statements
						END
					;
statements:		/* lambda */
			|	SEMICOLON
				statement
				statements
			;



/* mlaskal-c-1a */

block:		labelBlock
			constBlock
			typeBlock
			varBlock
			BEGIN
			statement
			statements
			END
			{
				ctx->tab->leave(@8);
			}
		;

procedureHeader:		PROCEDURE
						IDENTIFIER
						functionParameters
						{
							ctx->tab->add_proc(@1, $2, $3);
							$$ = $2;
						}
					;

functionParameters:		/* lambda */
						{
							$$ = mlc::create_parameter_list();
						}
					|	LPAR
						formalParameters
						RPAR
						{
							$$ = $2;
						}
					;

functionHeader:		FUNCTION
					IDENTIFIER
					functionParameters
					COLON
					IDENTIFIER
					{
						auto ts = ctx->tab->find_symbol($5)->access_type();
						if (! ts) { message(DUERR_NOTTYPE, @5, * $5); }
						mlc::type_pointer tp = ts->type();

						ctx->tab->add_fnc(@1, $2, tp, $3);
						$$ = $2;
					}
				;

formalParameters:		VAR
						IDENTIFIER
						identifiers
						COLON
						IDENTIFIER
						formalParameterss
						{
							auto pl_ptr = mlc::create_parameter_list();

							auto ts = ctx->tab->find_symbol($5)->access_type();
							if (! ts) { message(DUERR_NOTTYPE, @5, * $5); }

							mlc::type_pointer tp = ts->type();

							pl_ptr->append_parameter_by_reference($2, tp);
							for (mlc::ls_id_index id_idx : $3) {
								pl_ptr->append_parameter_by_reference(id_idx, tp);
							}

							pl_ptr->append_and_kill($6);
							$$ = pl_ptr;
						}
					|	IDENTIFIER
						identifiers
						COLON
						IDENTIFIER
						formalParameterss
						{
							auto pl_ptr = mlc::create_parameter_list();

							auto ts = ctx->tab->find_symbol($4)->access_type();
							if (! ts) { message(DUERR_NOTTYPE, @4, * $4); }

							mlc::type_pointer tp = ts->type();
							pl_ptr->append_parameter_by_value($1, tp);
							for (mlc::ls_id_index ids : $2) {
								pl_ptr->append_parameter_by_value(ids, tp);
							}

							pl_ptr->append_and_kill($5);

							$$ = pl_ptr;
						}
					;

formalParameterss:		/* lambda */
						{
							$$ = mlc::create_parameter_list();
						}
					|	SEMICOLON
						formalParameters
						{
							$$ = $2;
						}
					;



/* mlaskal-c-3.en */

type:		ordinalType
			{
				$$ = $1;
			}
		|	arrayType
			{
				$$ = $1;
			}
		|	IDENTIFIER
			{
				auto ts = ctx->tab->find_symbol($1)->access_type();
				if (! ts) { message(DUERR_NOTTYPE, @1, * $1); }
				$$ = ts->type();
			}
		;

ordinalType:		ordinalConstant
					DOTDOT
					ordinalConstant
					{
						$$ = ctx->tab->create_range_type($1, $3);
					}
				;
// IDENTIFIER	ordinal type ID | type ID | structured type ID


/* mlaskal-c-4 */

arrayType:		ARRAY
				LSBRA
				ordinalOrID
				ordinalOrIDs
				RSBRA
				OF
				type
				{
					if ($4.empty()) {
						$$ = ctx->tab->create_array_type($3, $7);
					}
					else {
						auto arr = ctx->tab->create_array_type($4.back(), $7);
						$4.pop_back();
						while (!$4.empty()) {
							arr = ctx->tab->create_array_type($4.back(), arr);
							$4.pop_back();
						}
						$$ = ctx->tab->create_array_type($3, arr);
					}
				}
			;

ordinalOrID:		IDENTIFIER
					{
						ctx->tab->find_symbol($1);
						auto ts = ctx->tab->find_symbol($1)->access_type();
						if (! ts) { message(DUERR_NOTTYPE, @1, * $1); }
						$$ = ts->type();
					}
				|	ordinalType
					{
						$$ = $1;
					}
				;

ordinalOrIDs:		/* lambda */
					{
						$$ = std::deque<mlc::type_pointer>();
					}
				|	COMMA
					ordinalOrID
					ordinalOrIDs
					{
						auto type_deq = $3;
						type_deq.push_front($2);
						$$ = type_deq;
					}
				;



/* mlaskal-c-5 */

statement:		/* lambda */
			|	UINT
				COLON
				matchedStmt
			|	matchedStmt
			|	UINT
				COLON
				unmatchedStmt
			|	unmatchedStmt
			;
matchedStmt:		assignment
				|	procedureStmt
				|	gotoStmt
				|	BEGIN
					statement
					statements
					END
				|	IF
					expression
					THEN
					matchedStmt
					ELSE
					matchedStmt
				|	WHILE
					expression
					DO
					matchedStmt
				|	repeatStmt
				|	FOR
					IDENTIFIER
					ASSIGN
					expression
					FOR_DIRECTION
					expression
					DO
					matchedStmt
				;
unmatchedStmt:		IF
					expression
					THEN
					statement
				|	IF
					expression
					THEN
					matchedStmt
					ELSE
					unmatchedStmt
				|	WHILE
					expression
					DO
					unmatchedStmt
				|	FOR
					IDENTIFIER
					ASSIGN
					expression
					FOR_DIRECTION
					expression
					DO
					unmatchedStmt
				;

assignment:		variable
				ASSIGN
				expression
			;

procedureStmt:		IDENTIFIER
				|	IDENTIFIER
					LPAR
					realParameters
					RPAR
				;

gotoStmt:		GOTO
				UINT
			;

repeatStmt:		REPEAT
				statement
				statements
				UNTIL
				expression
			;



/* mlaskal-c-6 */

variable:		IDENTIFIER
			|	arrayReference
			;

arrayReference:		variable
					LSBRA
					expression
					expressions
					RSBRA
				;
expressions:		/* lambda */
					|	COMMA
						expression
						expressions
					;

realParameters:		expression
				|	expression
					COMMA
					realParameters
				;



/* malskal-c-7 */

expression:		simpleExpression
				relationalExpression
			;
relationalExpression:		/* lambda */
						|	OPER_REL
							simpleExpression
						|	EQ
							simpleExpression
						;

simpleExpression:		OPER_SIGNADD
						term
						terms
					|	term
						terms
					;

term:		factor
			factors
		;
terms:		/* lambda */
		|	OPER_SIGNADD
			term
			terms
		|	OR
			term
			terms
		;

factor:		unsignedConstant
		|	variable
		|	IDENTIFIER
			LPAR
			realParameters
			RPAR
		|	LPAR
			expression
			RPAR
		|	NOT
			factor
		;
factors:		/* lambda */
			|	OPER_MUL
				factor
			;



/* mlaskal-c-8 */

unsignedConstant:		UINT
					|	REAL
					|	STRING
					;

ordinalConstant:		OPER_SIGNADD
						IDENTIFIER
						{
							auto sp = ctx->tab->find_symbol($2);
							auto type = sp->access_const()->type()->cat();
							if (type == TCAT_INT) {
								auto int_idx = sp->access_const()->access_int_const()->int_value();
								if ($1 == mlc::DUTOKGE_OPER_SIGNADD::DUTOKGE_MINUS) {
  									int_idx = ctx->tab->ls_int().add(- *int_idx);
								}
								//TODO potentionaly DUERR_NOTCONST
								$$ = int_idx;
							}
							//TODO potentionaly DUERR_NOTORDINAL
						}
					|	IDENTIFIER
						{
							auto sp = ctx->tab->find_symbol($1);
							auto type = sp->access_const()->type()->cat();
							if (type == TCAT_INT) {
								auto int_idx = sp->access_const()->access_int_const()->int_value();
								//TODO potentionaly DUERR_NOTCONST
								$$ = int_idx;
							}
							//TODO potentionaly DUERR_NOTORDINAL
						}
					|	OPER_SIGNADD
						UINT
						{
							auto int_idx = $2;
							if ($1 == mlc::DUTOKGE_OPER_SIGNADD::DUTOKGE_MINUS) {
  								int_idx = ctx->tab->ls_int().add(- *int_idx);
							}

							$$ = int_idx;
						}
					|	UINT
						{
							$$ = $1;
						}
					;



/* mlaskal-c-9 | mlaskal-c-10 */

/* Both uint and real are directly parsed in lexical analysis. */
/* Also identifiers, Letters and Digits are passed as tokens. */

%%


namespace yy {

	void mlaskal_parser::error(const location_type& l, const std::string& m)
	{
		message(DUERR_SYNTAX, l, m);
	}

}

