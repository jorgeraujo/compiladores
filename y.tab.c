/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     GREATEQ = 258,
     LESSEQ = 259,
     LESSGREAT = 260,
     OR = 261,
     AND = 262,
     MOD = 263,
     DIV = 264,
     NOT = 265,
     IFX = 266,
     THEN = 267,
     ELSE = 268,
     ASSIGN = 269,
     DO = 270,
     END = 271,
     FORWARD = 272,
     FUNCTION = 273,
     IF = 274,
     OUTPUT = 275,
     PARAMSTR = 276,
     PROGRAM = 277,
     REPEAT = 278,
     UNTIL = 279,
     VAL = 280,
     VAR = 281,
     WHILE = 282,
     WRITELN = 283,
     BEGIN_ = 284,
     ID = 285,
     INTLIT = 286,
     REALLIT = 287,
     STRING = 288
   };
#endif
/* Tokens.  */
#define GREATEQ 258
#define LESSEQ 259
#define LESSGREAT 260
#define OR 261
#define AND 262
#define MOD 263
#define DIV 264
#define NOT 265
#define IFX 266
#define THEN 267
#define ELSE 268
#define ASSIGN 269
#define DO 270
#define END 271
#define FORWARD 272
#define FUNCTION 273
#define IF 274
#define OUTPUT 275
#define PARAMSTR 276
#define PROGRAM 277
#define REPEAT 278
#define UNTIL 279
#define VAL 280
#define VAR 281
#define WHILE 282
#define WRITELN 283
#define BEGIN_ 284
#define ID 285
#define INTLIT 286
#define REALLIT 287
#define STRING 288




/* Copy the first part of user declarations.  */
#line 1 "mpaparser.y"

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	char *id;
	Node *brother,*son;
}Node;

/*typedef struct 
{
	var *next;
	char *declaration;
	union
	{
		char *string;
		char *id;
		int int_lit;
		float real_lit;
	}
}Var;*/

Node *root;
Node *temp;
Var  *list;
char *aux;
int i;



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 203 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   204

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNRULES -- Number of states.  */
#define YYNSTATES  160

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      47,    48,    12,     9,     2,    10,     2,    13,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       4,     3,     5,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     6,     7,
       8,    11,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    14,    18,    23,    24,    28,    29,
      33,    36,    40,    41,    43,    47,    48,    50,    52,    54,
      58,    62,    66,    72,    74,    75,    78,    83,    87,    88,
      93,    95,    96,    99,   101,   105,   108,   112,   113,   115,
     121,   126,   131,   141,   143,   146,   149,   150,   154,   155,
     157,   158,   163,   165,   167,   171,   172,   176,   180,   184,
     188,   191,   194,   197,   199,   201,   204,   208,   212,   216,
     220,   224,   228,   232,   236,   240,   244,   248,   250,   251,
     256,   260
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    51,    41,    52,    42,    -1,    29,    37,
      43,    27,    44,    -1,    53,    58,    72,    -1,    33,    55,
      41,    54,    -1,    -1,    55,    41,    54,    -1,    -1,    56,
      45,    37,    -1,    37,    57,    -1,    37,    46,    57,    -1,
      -1,    59,    -1,    60,    41,    59,    -1,    -1,    61,    -1,
      62,    -1,    63,    -1,    64,    41,    24,    -1,    66,    41,
      71,    -1,    64,    41,    71,    -1,    25,    37,    65,    45,
      37,    -1,    67,    -1,    -1,    25,    37,    -1,    43,    69,
      68,    44,    -1,    69,    41,    68,    -1,    -1,    70,    56,
      45,    37,    -1,    33,    -1,    -1,    53,    72,    -1,    73,
      -1,    36,    74,    23,    -1,    76,    75,    -1,    75,    41,
      76,    -1,    -1,    73,    -1,    26,    83,    19,    76,    77,
      -1,    34,    83,    22,    76,    -1,    30,    74,    31,    83,
      -1,    32,    43,    28,    43,    83,    44,    46,    37,    44,
      -1,    78,    -1,    35,    79,    -1,    20,    76,    -1,    -1,
      37,    21,    83,    -1,    -1,    80,    -1,    -1,    43,    81,
      82,    44,    -1,    83,    -1,    40,    -1,    82,    46,    81,
      -1,    -1,    83,     9,    83,    -1,    83,    10,    83,    -1,
      83,    11,    83,    -1,    47,    83,    48,    -1,    10,    83,
      -1,     9,    83,    -1,    17,    83,    -1,    38,    -1,    39,
      -1,    37,    84,    -1,    83,    12,    83,    -1,    83,    13,
      83,    -1,    83,    16,    83,    -1,    83,    15,    83,    -1,
      83,    14,    83,    -1,    83,     4,    83,    -1,    83,     5,
      83,    -1,    83,     3,    83,    -1,    83,     8,    83,    -1,
      83,     6,    83,    -1,    83,     7,    83,    -1,    85,    -1,
      -1,    43,    83,    86,    44,    -1,    86,    46,    83,    -1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    47,    47,    48,    49,    50,    51,    53,    54,    56,
      57,    58,    59,    61,    62,    63,    65,    66,    67,    69,
      70,    71,    72,    73,    74,    76,    77,    78,    79,    81,
      82,    83,    85,    86,    87,    88,    89,    90,    92,    93,
      94,    95,    96,    97,    98,   100,   101,   103,   104,   106,
     107,   109,   110,   111,   113,   114,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   138,   139,   141,
     142,   143
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "'='", "'<'", "'>'", "GREATEQ", "LESSEQ",
  "LESSGREAT", "'+'", "'-'", "OR", "'*'", "'/'", "AND", "MOD", "DIV",
  "NOT", "IFX", "THEN", "ELSE", "ASSIGN", "DO", "END", "FORWARD",
  "FUNCTION", "IF", "OUTPUT", "PARAMSTR", "PROGRAM", "REPEAT", "UNTIL",
  "VAL", "VAR", "WHILE", "WRITELN", "BEGIN_", "ID", "INTLIT", "REALLIT",
  "STRING", "\";\"", "\".\"", "\"(\"", "\")\"", "\":\"", "\",\"", "'('",
  "')'", "$accept", "Prog", "ProgHeading", "ProgBlock", "VarPart",
  "repVarPart", "VarDeclaration", "IDList", "repIDList", "FuncPart",
  "repFuncPart", "FuncDeclaration", "FuncDecl", "FuncDef", "FuncDef2",
  "FuncHeading", "opFuncHeading", "FuncIdent", "FormalParamList",
  "repFormalParamList", "FormalParams", "opFormalParams", "FuncBlock",
  "StatPart", "CompStat", "StatList", "repStat", "Stat", "opStat1",
  "opStat2", "opStat3", "WritelnPList", "opWritelnPList",
  "repWritelnPList", "Expr", "opExpr", "ParamList", "repParamList", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    61,    60,    62,   258,   259,   260,    43,
      45,   261,    42,    47,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    52,    53,    53,    54,    54,    55,
      56,    57,    57,    58,    59,    59,    60,    60,    60,    61,
      62,    63,    64,    65,    65,    66,    67,    68,    68,    69,
      70,    70,    71,    72,    73,    74,    75,    75,    76,    76,
      76,    76,    76,    76,    76,    77,    77,    78,    78,    79,
      79,    80,    81,    81,    82,    82,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    84,    84,    85,
      86,    86
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     5,     3,     4,     0,     3,     0,     3,
       2,     3,     0,     1,     3,     0,     1,     1,     1,     3,
       3,     3,     5,     1,     0,     2,     4,     3,     0,     4,
       1,     0,     2,     1,     3,     2,     3,     0,     1,     5,
       4,     4,     9,     1,     2,     2,     0,     3,     0,     1,
       0,     4,     1,     1,     3,     0,     3,     3,     3,     3,
       2,     2,     2,     1,     1,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     0,     4,
       3,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     6,     0,     0,     0,
      15,     0,    12,     0,     0,     2,     0,     0,    13,     0,
      16,    17,    18,     0,     0,     3,     0,    10,     8,     0,
      24,    48,     4,    33,    15,     6,     6,    12,     5,     0,
       9,    31,     0,    23,     0,    48,     0,     0,    50,     0,
      38,     0,    37,    43,    14,    19,     0,    21,    20,    11,
       8,    30,    28,     0,     0,     0,     0,     0,    78,    63,
      64,     0,     0,     0,     0,     0,     0,    44,    49,     0,
      34,    35,    32,     7,     0,     0,     0,    22,    61,    60,
      62,     0,    65,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,    48,    53,    55,    52,    47,    48,    26,    28,
       0,    81,    59,    73,    71,    72,    75,    76,    74,    56,
      57,    58,    66,    67,    70,    69,    68,    46,    41,     0,
      40,     0,    36,    27,    29,     0,    48,    39,     0,    51,
       0,    79,     0,    45,     0,    54,    80,     0,     0,    42
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     9,    56,    38,    39,    14,    27,    17,
      18,    19,    20,    21,    22,    23,    42,    24,    43,    84,
      85,    63,    57,    32,    50,    51,    81,    52,   147,    53,
      77,    78,   114,   141,   115,    92,    93,   145
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -82
static const yytype_int16 yypact[] =
{
     -27,   -19,    19,   -17,   -18,   -82,     5,    18,    13,    25,
      59,    41,    51,    52,    47,   -82,    67,    69,   -82,    66,
     -82,   -82,   -82,    76,    78,   -82,    60,   -82,    13,    81,
      -9,     7,   -82,   -82,    59,    -4,     5,    51,   -82,    80,
     -82,    89,   114,   -82,    77,     7,   117,    77,   133,   102,
     -82,   154,   -82,   -82,   -82,   -82,    69,   -82,   -82,   -82,
      13,   -82,    -7,    13,   141,    77,    77,    77,   136,   -82,
     -82,    77,   142,   149,   153,   122,    73,   -82,   -82,    77,
     -82,   143,   -82,   -82,   138,   144,   145,   -82,   127,   127,
     -82,    77,   -82,   -82,     1,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,     7,
      77,   140,     7,   -82,   -82,   159,   159,     7,   -82,    -7,
     150,   159,   -82,    87,    87,    87,    87,    87,    87,   127,
     127,   127,   -82,   -82,   -82,   -82,   -82,   166,   159,    77,
     -82,     2,   -82,   -82,   -82,    45,     7,   -82,    65,   -82,
      73,   -82,    77,   -82,   146,   -82,   159,   151,   147,   -82
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -82,   -82,   -82,   -82,   183,   134,   185,   132,   160,   -82,
     162,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,    79,
     158,   -82,   164,   148,   -16,   156,   -82,   -81,   -82,   -82,
     -82,   -82,    53,   -82,   -44,   -82,   -82,   -82
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -32
static const yytype_int16 yytable[] =
{
      72,    33,     1,    75,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,     4,     5,
      55,    88,    89,    90,     6,     7,    61,    94,   137,     8,
     -31,   140,   -25,    44,    41,   116,   142,    45,     8,    46,
      33,    47,    48,    31,    49,    11,   149,   121,   150,   122,
      12,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   153,   138,    15,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    65,    66,    16,    25,    65,    66,    26,   151,
      67,   152,    29,    28,    67,   148,   101,   102,   103,   104,
     105,   106,   107,   108,    30,    31,    37,    34,   156,   154,
      68,    69,    70,   113,    68,    69,    70,    35,    40,    36,
      71,    60,    61,    79,    71,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   104,
     105,   106,   107,   108,   112,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,    64,
      74,   109,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    76,    80,    87,    91,
     110,   111,   118,   139,   117,   119,   146,   144,   158,    10,
     120,   159,   157,    13,    83,    86,    54,    59,   143,    62,
      58,    73,     0,   155,    82
};

static const yytype_int16 yycheck[] =
{
      44,    17,    29,    47,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    37,     0,
      24,    65,    66,    67,    41,    43,    33,    71,   109,    33,
      37,   112,    41,    26,    43,    79,   117,    30,    33,    32,
      56,    34,    35,    36,    37,    27,    44,    91,    46,    48,
      37,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   146,   110,    42,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,     9,    10,    25,    44,     9,    10,    37,    44,
      17,    46,    45,    41,    17,   139,     9,    10,    11,    12,
      13,    14,    15,    16,    37,    36,    46,    41,   152,    44,
      37,    38,    39,    40,    37,    38,    39,    41,    37,    41,
      47,    41,    33,    21,    47,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    12,
      13,    14,    15,    16,    22,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    45,
      43,    19,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    43,    23,    37,    43,
      31,    28,    44,    43,    41,    41,    20,    37,    37,     6,
      45,    44,    46,     8,    60,    63,    34,    37,   119,    41,
      36,    45,    -1,   150,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    50,    51,    37,     0,    41,    43,    33,    52,
      53,    27,    37,    55,    56,    42,    25,    58,    59,    60,
      61,    62,    63,    64,    66,    44,    37,    57,    41,    45,
      37,    36,    72,    73,    41,    41,    41,    46,    54,    55,
      37,    43,    65,    67,    26,    30,    32,    34,    35,    37,
      73,    74,    76,    78,    59,    24,    53,    71,    71,    57,
      41,    33,    69,    70,    45,     9,    10,    17,    37,    38,
      39,    47,    83,    74,    43,    83,    43,    79,    80,    21,
      23,    75,    72,    54,    68,    69,    56,    37,    83,    83,
      83,    43,    84,    85,    83,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    19,
      31,    28,    22,    40,    81,    83,    83,    41,    44,    41,
      45,    83,    48,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    76,    83,    43,
      76,    82,    76,    68,    37,    86,    20,    77,    83,    44,
      46,    44,    46,    76,    44,    81,    83,    46,    37,    44
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 47 "mpaparser.y"
    {root = make_node("Program",NULL,(yyvsp[(1) - (4)]));(yyvsp[(1) - (4)])->brother = (yyvsp[(3) - (4)]);}
    break;

  case 3:
#line 48 "mpaparser.y"
    {(yyval) = make_node("ID",NULL,NULL);}
    break;

  case 4:
#line 49 "mpaparser.y"
    {(yyval) = (yyvsp[(1) - (3)]); (yyvsp[(1) - (3)])->brother = (yyvsp[(2) - (3)]); (yyvsp[(2) - (3)])->brother = (yyvsp[(3) - (3)]);}
    break;

  case 5:
#line 50 "mpaparser.y"
    {(yyvsp[(2) - (4)])->brother = (yyvsp[(4) - (4)]);(yyval) = make_node("VarPart",NULL,(yyvsp[(2) - (4)]));}
    break;

  case 6:
#line 51 "mpaparser.y"
    {(yyval) = make_node("VarPart",NULL,NULL);}
    break;

  case 7:
#line 53 "mpaparser.y"
    {(yyvsp[(1) - (3)])->brother = (yyvsp[(3) - (3)]); (yyval) = (yyvsp[(1) - (3)]);}
    break;

  case 8:
#line 54 "mpaparser.y"
    {(yyval) = NULL;}
    break;

  case 9:
#line 56 "mpaparser.y"
    {for(temp = (yyvsp[(1) - (3)]);temp->brother!=NULL;temp = temp->brother);temp->brother = (yyvsp[(3) - (3)]); (yyval) = make_node("VarDecl",NULL,(yyvsp[(1) - (3)]));}
    break;

  case 10:
#line 57 "mpaparser.y"
    {(yyval) = make_node("ID",(yyvsp[(2) - (2)]),NULL);}
    break;

  case 11:
#line 58 "mpaparser.y"
    {(yyval) = make_node("ID",(yyvsp[(3) - (3)]),NULL);}
    break;

  case 12:
#line 59 "mpaparser.y"
    {(yyval)  = NULL;}
    break;

  case 13:
#line 61 "mpaparser.y"
    {(yyval) = make_node("FuncPart",NULL,(yyvsp[(1) - (1)]));}
    break;

  case 14:
#line 62 "mpaparser.y"
    {(yyvsp[(1) - (3)])->brother = (yyvsp[(3) - (3)]);(yyval) = (yyvsp[(1) - (3)]);}
    break;

  case 15:
#line 63 "mpaparser.y"
    {(yyval) = NULL;}
    break;

  case 16:
#line 65 "mpaparser.y"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 17:
#line 66 "mpaparser.y"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 18:
#line 67 "mpaparser.y"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 19:
#line 69 "mpaparser.y"
    {(yyval) = make_node("FuncDecl",NULL,(yyvsp[(1) - (3)]));}
    break;

  case 20:
#line 70 "mpaparser.y"
    {(yyvsp[(1) - (3)])->brother = (yyvsp[(3) - (3)]); (yyval) = make_node("FuncDef",NULL,(yyvsp[(1) - (3)]));}
    break;

  case 21:
#line 71 "mpaparser.y"
    {(yyvsp[(1) - (3)])->brother = (yyvsp[(3) - (3)]); (yyval) = make_node("FuncDef2",NULL,(yyvsp[(1) - (3)]));}
    break;

  case 22:
#line 72 "mpaparser.y"
    {(yyvsp[(3) - (5)])->brother = make_node("ID",NULL,NULL);(yyval) = make_node("ID",(yyvsp[(3) - (5)]),NULL);}
    break;

  case 23:
#line 73 "mpaparser.y"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 24:
#line 74 "mpaparser.y"
    {(yyval) =  NULL;}
    break;

  case 25:
#line 76 "mpaparser.y"
    {(yyval) = make_node("ID",NULL,NULL);}
    break;

  case 26:
#line 77 "mpaparser.y"
    {(yyvsp[(2) - (4)])->brother = (yyvsp[(3) - (4)]); (yyval)= make_node("FuncParams",NULL,(yyvsp[(2) - (4)]));}
    break;

  case 27:
#line 78 "mpaparser.y"
    {(yyvsp[(1) - (3)])->brother = (yyvsp[(3) - (3)]); (yyval) = (yyvsp[(1) - (3)]);}
    break;

  case 28:
#line 79 "mpaparser.y"
    {(yyval) = NULL;}
    break;

  case 29:
#line 81 "mpaparser.y"
    {(yyval)->son = (yyvsp[(2) - (4)]);for(temp = (yyvsp[(2) - (4)]);temp->brother!=NULL;temp = temp->brother);temp->brother = (yyvsp[(4) - (4)]);}
    break;

  case 30:
#line 82 "mpaparser.y"
    {(yyval) = make_node("VarParams",NULL,NULL);}
    break;

  case 31:
#line 83 "mpaparser.y"
    {(yyval) = make_node("Params",NULL,NULL);}
    break;

  case 32:
#line 85 "mpaparser.y"
    {(yyvsp[(1) - (2)])->brother = (yyvsp[(2) - (2)]);(yyval) = (yyvsp[(1) - (2)]);}
    break;

  case 33:
#line 86 "mpaparser.y"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 34:
#line 87 "mpaparser.y"
    {(yyval) =(yyvsp[(2) - (3)]);}
    break;

  case 35:
#line 88 "mpaparser.y"
    {(yyvsp[(1) - (2)])->brother = (yyvsp[(2) - (2)]); (yyval) = make_node("StatList",NULL,(yyvsp[(1) - (2)]));}
    break;

  case 36:
#line 89 "mpaparser.y"
    {(yyvsp[(1) - (3)])->brother = (yyvsp[(3) - (3)]); (yyval) = (yyvsp[(1) - (3)]);}
    break;

  case 37:
#line 90 "mpaparser.y"
    {(yyval) = NULL;}
    break;

  case 38:
#line 92 "mpaparser.y"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 39:
#line 93 "mpaparser.y"
    {(yyvsp[(2) - (5)])->brother = (yyvsp[(4) - (5)]); (yyvsp[(4) - (5)])->brother = (yyvsp[(5) - (5)]);(yyval) = make_node("IfElse",NULL,(yyvsp[(2) - (5)]));}
    break;

  case 40:
#line 94 "mpaparser.y"
    {(yyvsp[(2) - (4)])->brother = (yyvsp[(4) - (4)]); (yyval) = make_node("WHILE",NULL,(yyvsp[(2) - (4)]));}
    break;

  case 41:
#line 95 "mpaparser.y"
    {for(temp = (yyvsp[(2) - (4)]);temp->brother!=NULL;temp = temp->brother);temp->brother = (yyvsp[(4) - (4)]); (yyval) = make_node("Repeat",NULL,(yyvsp[(2) - (4)]));}
    break;

  case 42:
#line 96 "mpaparser.y"
    {(yyvsp[(5) - (9)])->brother = make_node("ID",NULL,NULL); (yyval) = make_node("ValParam",NULL,(yyvsp[(5) - (9)]));}
    break;

  case 43:
#line 97 "mpaparser.y"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 44:
#line 98 "mpaparser.y"
    {(yyval) = make_node("Writeln",NULL,(yyvsp[(2) - (2)]));}
    break;

  case 45:
#line 100 "mpaparser.y"
    {(yyval) = (yyvsp[(2) - (2)]);}
    break;

  case 46:
#line 101 "mpaparser.y"
    {(yyval) = NULL;}
    break;

  case 47:
#line 103 "mpaparser.y"
    {temp = make_node("ID",(yyvsp[(3) - (3)]),NULL);(yyval) = make_node("ASSIGN",NULL,temp);}
    break;

  case 48:
#line 104 "mpaparser.y"
    {(yyval) = NULL;}
    break;

  case 49:
#line 106 "mpaparser.y"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 50:
#line 107 "mpaparser.y"
    {(yyval) = NULL;}
    break;

  case 51:
#line 109 "mpaparser.y"
    {(yyvsp[(2) - (4)])->brother = (yyvsp[(3) - (4)]); (yyval) = (yyvsp[(2) - (4)]);}
    break;

  case 52:
#line 110 "mpaparser.y"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 53:
#line 111 "mpaparser.y"
    {(yyval) = make_node("String",NULL,NULL);}
    break;

  case 54:
#line 113 "mpaparser.y"
    {(yyvsp[(1) - (3)])->brother = (yyvsp[(3) - (3)]); (yyval) = (yyvsp[(1) - (3)]);}
    break;

  case 55:
#line 114 "mpaparser.y"
    {(yyval) = NULL;}
    break;


/* Line 1267 of yacc.c.  */
#line 1821 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 146 "mpaparser.y"

int yyerror(char* s)
{
	fprintf(stderr, "%s\n", s);
	return 0;
}

int main()
{
	yyparse();
	return 0;
}

Node *make_node(char *name,Node *brother,Node *son)
{
	Node *new = malloc(sizeof(Node));
	strcpy(new->id,name);
	new->brother = brother;
	new->son = son;
	return new;
}

/*Var *make_var(char *name,char *string,char *id,int int_lit,float real_lit)
{
	Var *new = malloc(sizeof(Var));
	strcpy(new->declaration,name);
	strcpy(new->string,string);
	strcpy(new->id,id);
	new->int_lit = int_lit;
	new->real_lit = real_lit;
	return new;
}

void insert_var_list(Var *list,Var *new)
{
	Var *aux = list;
	while(aux->next !=NULL)
	{
		aux = aux->next;
	}
	aux->next = new;
}*/
