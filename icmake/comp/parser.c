/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 3 "../parser"


#include "iccomp.h"


/* Line 371 of yacc.c  */
#line 74 "../parser.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ARG_HEAD = 258,
     ARG_TAIL = 259,
     ASCII = 260,
     BREAK = 261,
     CHDIR = 262,
     CMD_HEAD = 263,
     CMD_TAIL = 264,
     C_BASE = 265,
     C_EXT = 266,
     C_PATH = 267,
     G_BASE = 268,
     G_EXT = 269,
     G_PATH = 270,
     ELEMENT = 271,
     ELSE = 272,
     EXEC = 273,
     EXECUTE = 274,
     EXISTS = 275,
     EXIT = 276,
     FGETS = 277,
     FIELDS = 278,
     FOR = 279,
     FPRINTF = 280,
     GETENV = 281,
     GETCH = 282,
     GETPID = 283,
     GETS = 284,
     IDENTIFIER = 285,
     IF = 286,
     INT = 287,
     LIST = 288,
     MAKELIST = 289,
     M_ECHO = 290,
     NUMBER = 291,
     PRINTF = 292,
     PUTENV = 293,
     RETURN = 294,
     SIZEOFLIST = 295,
     STAT = 296,
     STRING = 297,
     STRINGTYPE = 298,
     STRLEN = 299,
     STRLWR = 300,
     STRUPR = 301,
     STRFIND = 302,
     STRFORMAT = 303,
     SUBSTR = 304,
     SYSTEM = 305,
     TRIM = 306,
     TRIMLEFT = 307,
     TRIMRIGHT = 308,
     VOID = 309,
     WHILE = 310,
     PLUS_IS = 311,
     MOD_IS = 312,
     MUL_IS = 313,
     MINUS_IS = 314,
     DIV_IS = 315,
     SHR_IS = 316,
     SHL_IS = 317,
     XOR_IS = 318,
     OR_IS = 319,
     AND_IS = 320,
     OR = 321,
     AND = 322,
     NOT_EQUAL = 323,
     EQUAL = 324,
     YOUNGER = 325,
     OLDER = 326,
     GREATER_EQUAL = 327,
     SMALLER_EQUAL = 328,
     SHR = 329,
     SHL = 330,
     DEC = 331,
     INC = 332
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 217 "../parser.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   817

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  86
/* YYNRULES -- Number of rules.  */
#define YYNRULES  211
/* YYNRULES -- Number of states.  */
#define YYNSTATES  347

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   332

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,     2,     2,     2,    86,    71,     2,
      99,    95,    84,    82,    96,    83,    92,    85,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   100,
      74,    56,    75,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    91,     2,    98,    70,     2,    93,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    97,    69,    94,    88,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    72,    73,    76,    77,    78,    79,    80,
      81,    89,    90
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    12,    14,    15,    17,    19,
      21,    23,    24,    27,    28,    31,    32,    35,    36,    39,
      42,    44,    47,    49,    53,    56,    59,    62,    64,    66,
      68,    69,    72,    76,    81,    85,    89,    93,    97,   101,
     105,   109,   113,   117,   121,   125,   129,   133,   137,   141,
     145,   149,   153,   157,   161,   165,   169,   173,   177,   181,
     185,   189,   193,   197,   201,   205,   208,   211,   214,   217,
     220,   223,   226,   229,   234,   236,   238,   242,   244,   248,
     250,   254,   256,   259,   271,   276,   279,   281,   284,   288,
     294,   302,   307,   312,   316,   320,   324,   328,   330,   332,
     334,   340,   343,   347,   350,   360,   362,   364,   366,   369,
     372,   374,   377,   381,   388,   396,   400,   401,   403,   405,
     406,   409,   411,   413,   415,   417,   419,   421,   423,   425,
     427,   429,   431,   433,   435,   437,   439,   441,   443,   445,
     447,   449,   451,   452,   455,   456,   459,   461,   463,   465,
     466,   468,   470,   472,   474,   476,   478,   480,   482,   484,
     486,   487,   489,   490,   494,   496,   499,   500,   501,   504,
     506,   508,   509,   512,   514,   517,   519,   521,   524,   527,
     529,   531,   533,   536,   539,   542,   545,   547,   549,   551,
     553,   555,   557,   559,   561,   563,   565,   568,   572,   574,
     578,   580,   582,   584,   586,   588,   590,   593,   601,   603,
     605,   607
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     102,     0,    -1,   102,   118,    -1,   118,    -1,   103,   113,
     122,    -1,   122,    -1,    -1,     6,    -1,    32,    -1,    33,
      -1,    43,    -1,    -1,   108,    93,    -1,    -1,   110,    94,
      -1,    -1,   112,    95,    -1,    -1,   114,    96,    -1,    96,
     103,    -1,   186,    -1,    96,   122,    -1,   186,    -1,    97,
     172,   109,    -1,   162,   180,    -1,   182,   129,    -1,    17,
     171,    -1,   186,    -1,    30,    -1,   120,    -1,    -1,   123,
     124,    -1,   124,    56,   124,    -1,   124,    91,   124,    98,
      -1,   124,    92,    30,    -1,   124,    59,   124,    -1,   124,
      61,   124,    -1,   124,    58,   124,    -1,   124,    57,   124,
      -1,   124,    60,   124,    -1,   124,    66,   124,    -1,   124,
      65,   124,    -1,   124,    64,   124,    -1,   124,    63,   124,
      -1,   124,    62,   124,    -1,   124,    67,   124,    -1,   124,
      68,   124,    -1,   124,    73,   124,    -1,   124,    72,   124,
      -1,   124,    74,   124,    -1,   124,    75,   124,    -1,   124,
      79,   124,    -1,   124,    78,   124,    -1,   124,    82,   124,
      -1,   124,    71,   124,    -1,   124,    69,   124,    -1,   124,
      70,   124,    -1,   124,    81,   124,    -1,   124,    80,   124,
      -1,   124,    83,   124,    -1,   124,    84,   124,    -1,   124,
      76,   124,    -1,   124,    77,   124,    -1,   124,    85,   124,
      -1,   124,    86,   124,    -1,    83,   124,    -1,    90,   124,
      -1,   124,    90,    -1,    89,   124,    -1,   124,    89,    -1,
      82,   124,    -1,    88,   124,    -1,    87,   124,    -1,    99,
     106,    95,   124,    -1,   174,    -1,    36,    -1,    99,   124,
     111,    -1,   130,    -1,    93,   124,   107,    -1,   122,    -1,
     126,    96,   125,    -1,   125,    -1,    24,   145,    -1,   127,
     151,   157,   169,   156,   169,   157,   111,   104,   171,   165,
      -1,   132,   134,   172,   109,    -1,   131,   111,    -1,    30,
      -1,   185,   151,    -1,   150,   151,   122,    -1,   175,   151,
     122,   113,   122,    -1,   176,   151,   122,   113,   122,   113,
     122,    -1,   159,   151,   122,   116,    -1,   158,   151,   122,
     115,    -1,    37,   151,   103,    -1,    25,   151,   103,    -1,
      48,   151,   103,    -1,   133,   151,   155,    -1,   142,    -1,
      30,    -1,    30,    -1,   151,   161,    95,   153,   160,    -1,
     120,   186,    -1,   121,   138,   124,    -1,    31,   145,    -1,
     136,   151,   122,   111,   171,   165,   166,   119,   165,    -1,
      56,    -1,    39,    -1,    21,    -1,   177,   178,    -1,   141,
     140,    -1,   140,    -1,   143,   144,    -1,   143,   113,   122,
      -1,   143,   113,   147,   113,   122,   144,    -1,   143,   113,
     122,   113,   147,   113,   122,    -1,    34,   151,   122,    -1,
      -1,   166,    -1,   100,    -1,    -1,   148,   149,    -1,    77,
      -1,    76,    -1,     5,    -1,    40,    -1,    20,    -1,    35,
      -1,     9,    -1,     8,    -1,     3,    -1,     4,    -1,    13,
      -1,    15,    -1,    14,    -1,    38,    -1,    26,    -1,    44,
      -1,    46,    -1,    45,    -1,    51,    -1,    52,    -1,    53,
      -1,    -1,   152,    99,    -1,    -1,   154,    97,    -1,   103,
      -1,   186,    -1,   122,    -1,    -1,   126,    -1,   186,    -1,
      18,    -1,    19,    -1,    41,    -1,     7,    -1,    50,    -1,
     141,    -1,   186,    -1,   163,    -1,    -1,   177,    -1,    -1,
     163,   113,   164,    -1,   164,    -1,   177,   120,    -1,    -1,
      -1,   139,   168,    -1,   122,    -1,   186,    -1,    -1,   170,
     100,    -1,   173,    -1,   172,   171,    -1,   186,    -1,   117,
      -1,   100,   186,    -1,   125,   169,    -1,   184,    -1,   137,
      -1,   128,    -1,   167,   169,    -1,   105,   169,    -1,     1,
     146,    -1,   174,    42,    -1,    42,    -1,    11,    -1,    10,
      -1,    12,    -1,    16,    -1,    22,    -1,    23,    -1,    47,
      -1,    49,    -1,   181,    -1,   179,   169,    -1,   179,   113,
     135,    -1,   135,    -1,     1,   146,   186,    -1,   178,    -1,
     129,    -1,    32,    -1,    43,    -1,    33,    -1,    54,    -1,
      55,   145,    -1,   183,   151,   122,   111,   104,   171,   165,
      -1,    27,    -1,    28,    -1,    29,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   113,   113,   116,   121,   128,   135,   141,   148,   150,
     152,   155,   155,   156,   156,   157,   157,   158,   158,   161,
     167,   171,   177,   181,   190,   193,   198,   204,   208,   215,
     222,   222,   232,   239,   247,   254,   261,   268,   275,   282,
     289,   296,   303,   310,   317,   324,   331,   338,   345,   352,
     359,   366,   373,   380,   387,   394,   401,   408,   415,   422,
     429,   436,   443,   450,   457,   464,   470,   476,   482,   488,
     494,   500,   506,   512,   520,   525,   530,   537,   539,   548,
     555,   562,   566,   571,   588,   598,   601,   608,   614,   621,
     630,   641,   649,   657,   664,   671,   678,   685,   689,   696,
     703,   718,   721,   731,   736,   751,   760,   762,   766,   774,
     780,   785,   800,   815,   837,   862,   871,   878,   885,   892,
     892,   900,   902,   906,   908,   910,   912,   914,   916,   918,
     920,   922,   924,   926,   928,   930,   932,   934,   936,   938,
     940,   942,   945,   945,   946,   946,   949,   951,   955,   957,
     964,   966,   970,   972,   976,   978,   980,   984,   986,   990,
     991,   995,   997,  1003,  1007,  1011,  1019,  1025,  1033,  1041,
    1043,  1046,  1046,  1049,  1056,  1062,  1066,  1068,  1074,  1077,
    1079,  1081,  1083,  1086,  1089,  1094,  1100,  1109,  1111,  1113,
    1115,  1117,  1119,  1121,  1125,  1129,  1138,  1146,  1154,  1156,
    1165,  1170,  1174,  1176,  1178,  1182,  1189,  1194,  1210,  1212,
    1214,  1218
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ARG_HEAD", "ARG_TAIL", "ASCII", "BREAK",
  "CHDIR", "CMD_HEAD", "CMD_TAIL", "C_BASE", "C_EXT", "C_PATH", "G_BASE",
  "G_EXT", "G_PATH", "ELEMENT", "ELSE", "EXEC", "EXECUTE", "EXISTS",
  "EXIT", "FGETS", "FIELDS", "FOR", "FPRINTF", "GETENV", "GETCH", "GETPID",
  "GETS", "IDENTIFIER", "IF", "INT", "LIST", "MAKELIST", "M_ECHO",
  "NUMBER", "PRINTF", "PUTENV", "RETURN", "SIZEOFLIST", "STAT", "STRING",
  "STRINGTYPE", "STRLEN", "STRLWR", "STRUPR", "STRFIND", "STRFORMAT",
  "SUBSTR", "SYSTEM", "TRIM", "TRIMLEFT", "TRIMRIGHT", "VOID", "WHILE",
  "'='", "PLUS_IS", "MOD_IS", "MUL_IS", "MINUS_IS", "DIV_IS", "SHR_IS",
  "SHL_IS", "XOR_IS", "OR_IS", "AND_IS", "OR", "AND", "'|'", "'^'", "'&'",
  "NOT_EQUAL", "EQUAL", "'<'", "'>'", "YOUNGER", "OLDER", "GREATER_EQUAL",
  "SMALLER_EQUAL", "SHR", "SHL", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'",
  "'~'", "DEC", "INC", "'['", "'.'", "'`'", "'}'", "')'", "','", "'{'",
  "']'", "'('", "';'", "$accept", "input", "args", "break_ok",
  "break_stat", "casttype", "backtick", "$@1", "closebrace", "$@2",
  "closepar", "$@3", "comma", "$@4", "comma_arglist", "comma_expr",
  "compound", "def_var_or_fun", "else_tail", "enterid", "entervarid",
  "err_expression", "$@5", "expression", "expr_code", "expr_list", "for",
  "for_stat", "funcdef", "func_or_var", "function", "funid", "funname",
  "funvars", "idexpr", "if", "if_stat", "initassign", "leave_key",
  "local_list", "locals", "makelist", "makelist_expr", "makelist_normal",
  "nesting", "ok", "older_younger", "$@6", "old_young", "one_arg_funs",
  "openpar", "$@7", "openbrace", "$@8", "opt_arglist", "opt_expression",
  "opt_expr_list", "optint_special", "optint_string", "opt_locals",
  "opt_parlist", "opt_vartype", "pars", "partype", "popdead", "pushdead",
  "return_stat", "return_tail", "semicol", "$@9", "statement",
  "statements", "stm", "string", "two_arg_funs", "three_arg_funs",
  "type_of_var", "vardefs", "varnames", "var_or_fun", "vartype",
  "voidtype", "while", "while_stat", "zero_arg_funs", "zeroframe", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,    61,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   124,
      94,    38,   323,   324,    60,    62,   325,   326,   327,   328,
     329,   330,    43,    45,    42,    47,    37,    33,   126,   331,
     332,    91,    46,    96,   125,    41,    44,   123,    93,    40,
      59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   101,   102,   102,   103,   103,   104,   105,   106,   106,
     106,   108,   107,   110,   109,   112,   111,   114,   113,   115,
     115,   116,   116,   117,   118,   118,   119,   119,   120,   121,
     123,   122,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   125,
     126,   126,   127,   128,   129,   130,   130,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   132,   133,
     134,   135,   135,   136,   137,   138,   139,   139,   140,   141,
     141,   142,   142,   142,   142,   143,   144,   145,   146,   148,
     147,   149,   149,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   152,   151,   154,   153,   155,   155,   156,   156,
     157,   157,   158,   158,   159,   159,   159,   160,   160,   161,
     161,   162,   162,   163,   163,   164,   165,   166,   167,   168,
     168,   170,   169,   171,   172,   172,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   174,   174,   175,   175,   175,
     175,   175,   175,   175,   176,   177,   178,   179,   179,   179,
     180,   180,   181,   181,   181,   182,   183,   184,   185,   185,
     185,   186
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     0,     1,     1,     1,
       1,     0,     2,     0,     2,     0,     2,     0,     2,     2,
       1,     2,     1,     3,     2,     2,     2,     1,     1,     1,
       0,     2,     3,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     4,     1,     1,     3,     1,     3,     1,
       3,     1,     2,    11,     4,     2,     1,     2,     3,     5,
       7,     4,     4,     3,     3,     3,     3,     1,     1,     1,
       5,     2,     3,     2,     9,     1,     1,     1,     2,     2,
       1,     2,     3,     6,     7,     3,     0,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     0,     2,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     0,     3,     1,     2,     0,     0,     2,     1,
       1,     0,     2,     1,     2,     1,     1,     2,     2,     1,
       1,     1,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     2,     7,     1,     1,
       1,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     162,   202,   204,   203,   205,   162,     3,     0,   161,   195,
       0,     1,     2,     0,    28,   211,     0,   201,   142,   198,
     200,    17,    24,    98,    25,   118,   211,   101,   105,     0,
     211,   160,     0,     0,     0,   196,     0,   199,   129,   130,
     123,   155,   128,   127,   188,   187,   189,   131,   133,   132,
     190,   152,   153,   125,   191,   192,   142,   135,   208,   209,
     210,    86,   142,   126,    75,   142,   134,   124,   154,   186,
     136,   138,   137,   193,   142,   194,   156,   139,   140,   141,
       0,     0,     0,     0,     0,     0,     0,     0,   102,    77,
      15,   142,    97,    17,   142,   142,   142,    74,   142,   142,
     142,     0,   175,     0,    17,   164,     0,   143,    28,   197,
      18,   172,    30,    30,    30,    30,    70,    65,    72,    71,
      68,    66,    11,     8,     9,    10,     0,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
      67,     0,     0,    85,     0,    30,    30,   111,    30,    30,
      30,   185,    30,    30,    87,     0,     7,   107,   167,   167,
     106,   167,   211,   211,   171,    84,     0,   176,    79,     0,
     171,   142,   181,   142,   180,    30,   171,   174,   173,   142,
     179,   144,     0,   165,    17,     5,   115,    17,    17,    78,
       0,     0,    76,    32,    38,    37,    35,    39,    36,    44,
      43,    42,    41,    40,    45,    46,    55,    56,    54,    48,
      47,    49,    50,    61,    62,    52,    51,    58,    57,    53,
      59,    60,    63,    64,     0,    34,    16,    17,    96,   147,
      17,    17,     0,    88,   211,   211,    17,    17,   184,    82,
     117,   103,   206,     0,   177,   183,    14,    31,   178,    30,
      30,   169,   168,   170,   182,    30,   211,     0,   163,    30,
      12,    73,    33,   119,    30,   122,   121,   120,    30,    92,
      20,    30,    91,    22,    30,    30,    23,    81,   150,   171,
     151,    15,    15,   110,   157,   100,     0,   158,   145,     4,
      17,   116,    17,    21,    89,    17,    30,    30,     0,     6,
     109,   108,    30,   113,    30,    80,   148,   171,   166,     0,
     114,    90,    30,   167,   166,    15,   211,   207,     6,     0,
     166,    27,     0,    26,   104,   166,    83
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   204,   329,   184,   126,   209,   210,   185,   186,
     163,   164,   279,    34,   289,   292,   187,     6,   340,    15,
      16,   188,   189,    88,   190,   298,   191,   192,    17,    89,
      90,    18,    91,    30,    19,   193,   194,    29,   195,   303,
     304,    92,    93,   167,   259,    26,   251,   252,   287,    94,
      31,    32,   276,   277,   248,   327,   299,    95,    96,   305,
     103,     7,   104,   105,   333,   260,   196,   272,    35,    36,
     197,   101,   198,    97,    98,    99,     8,    20,    21,    22,
       9,    10,   199,   200,   100,   102
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -312
static const yytype_int16 yypact[] =
{
      -7,  -312,  -312,  -312,  -312,    33,  -312,    12,  -312,  -312,
     -13,  -312,  -312,   -73,   -69,   -21,   -10,  -312,  -312,  -312,
    -312,   -49,  -312,  -312,  -312,  -312,  -312,  -312,  -312,   681,
    -312,   -11,   -44,    38,   -24,  -312,   -23,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
    -312,   -19,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
     681,   681,   681,   681,   681,   681,   681,   588,   725,  -312,
    -312,  -312,  -312,   -16,  -312,  -312,  -312,    39,  -312,  -312,
    -312,   390,  -312,   -12,    24,  -312,    38,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,   -52,   -52,   -52,   -52,
     -52,   -52,   725,  -312,  -312,  -312,    25,   725,   681,   681,
     681,   681,   681,   681,   681,   681,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   681,   681,   681,  -312,
    -312,   681,    52,  -312,    30,    31,    -6,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,   -73,  -312,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,    -9,  -312,  -312,   681,
    -312,  -312,  -312,  -312,  -312,    28,  -312,  -312,  -312,  -312,
    -312,  -312,   -11,  -312,    34,  -312,  -312,    43,    44,  -312,
      53,   681,  -312,   725,   725,   725,   725,   725,   725,   725,
     725,   725,   725,   725,   120,   289,   376,   475,   224,   568,
     568,    51,    51,    51,    51,    51,    51,   136,   136,    73,
      73,   -52,   -52,   -52,    32,  -312,  -312,    49,  -312,  -312,
      54,  -312,    -2,  -312,    55,    56,  -312,  -312,  -312,  -312,
    -312,  -312,  -312,   390,  -312,  -312,  -312,   725,  -312,    28,
    -312,  -312,  -312,  -312,  -312,  -312,   -11,    57,  -312,  -312,
    -312,   -52,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,    60,  -312,
    -312,  -312,  -312,  -312,   -11,  -312,    13,  -312,  -312,  -312,
    -312,  -312,    65,  -312,  -312,  -312,  -312,    48,   490,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,   490,
    -312,  -312,    31,  -312,  -312,  -312,   150,  -312,  -312,   490,
    -312,  -312,   490,  -312,  -312,  -312,  -312
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -312,  -312,  -107,  -169,  -312,  -312,  -312,  -312,   -92,  -312,
    -118,  -312,   -20,  -312,  -312,  -312,  -312,   167,  -312,    68,
    -312,  -109,  -312,   196,  -254,  -312,  -312,  -312,   166,  -312,
    -312,  -312,  -312,  -312,   144,  -312,  -312,  -312,  -312,  -126,
    -312,  -312,  -312,  -124,  -112,    41,   -76,  -312,  -312,  -312,
     -46,  -312,  -312,  -312,  -312,  -312,  -108,  -312,  -312,  -312,
    -312,  -312,  -312,    21,  -311,  -119,  -312,  -312,  -172,  -312,
    -298,    47,  -312,  -312,  -312,  -312,   -29,   -74,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,   -15
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -212
static const yytype_int16 yytable[] =
{
      27,    33,   106,   205,   206,   205,   205,   207,   208,   212,
     112,    37,   265,    13,    13,   297,   113,    23,   268,   114,
     328,     1,     2,   337,   274,     1,     2,    25,   115,   344,
     -98,   334,     3,    11,   346,   -29,     3,   159,   160,   161,
     162,   343,    14,   108,   345,   165,    28,     4,   168,   169,
     170,  -171,   172,   173,   174,   107,   205,   250,   247,   253,
     254,   255,   325,   256,   257,     1,     2,   261,   108,   262,
    -119,  -119,   110,   166,   285,   286,     3,   111,   297,  -116,
     -99,   171,   245,   201,   202,   266,   271,     4,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,  -159,
     211,   159,   160,   161,   162,   246,  -211,   317,  -211,   -94,
     282,   152,   153,   154,   155,   156,   157,   158,   -93,   -95,
     159,   160,   161,   162,  -146,   269,   280,   270,  -149,  -112,
     249,   288,   291,   275,   308,   332,   316,   156,   157,   158,
     -19,   301,   159,   160,   161,   162,   302,   339,   264,   342,
     309,   296,    12,   106,   203,   311,    24,   109,   320,   205,
     273,   312,   313,   318,   319,   314,   315,   323,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   310,   326,   159,
     160,   161,   162,   330,   336,   331,   258,   338,   154,   155,
     156,   157,   158,   278,   335,   159,   160,   161,   162,   263,
     283,   284,   321,     0,     0,     0,   294,   295,     0,   290,
     293,     0,     0,     0,     0,     0,     0,   306,     0,     0,
       0,     0,     0,     0,   300,     0,     0,     0,     0,     0,
       0,   307,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   306,   116,   117,   118,   119,
     120,   121,   122,   127,     0,     0,     0,     0,     0,     0,
     322,     0,     0,     0,     0,   324,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,     0,     0,   159,   160,   161,   162,   300,     0,     0,
       0,   341,     0,     0,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,     0,     0,   244,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     0,     0,   159,   160,
     161,   162,     0,     0,     0,   267,     0,     0,     0,     0,
       0,   175,     0,   -30,   -30,   -30,   176,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   281,   -30,   -30,
     -30,   177,   -30,   -30,   178,   -30,   -30,   -30,   -30,   -30,
     -30,   179,     0,     0,   -30,   -30,   -30,   -30,   -30,   180,
     -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,     0,   181,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,     0,     0,   159,   160,   161,   162,     0,
       0,     0,   -30,   -30,     0,     0,     0,   -30,   -30,   -30,
     -30,     0,     0,   -30,   -13,     0,     0,   182,     0,   -30,
     183,   175,     0,   -30,   -30,   -30,   176,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,
     -30,   177,   -30,   -30,   178,   -30,   -30,   -30,   -30,   -30,
     -30,   179,     0,     0,   -30,   -30,   -30,   -30,   -30,   180,
     -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,     0,   181,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,     0,     0,   159,   160,   161,   162,     0,     0,
       0,     0,   -30,   -30,     0,     0,     0,   -30,   -30,   -30,
     -30,     0,     0,   -30,     0,     0,     0,   182,     0,   -30,
     183,    38,    39,    40,     0,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     0,    51,    52,    53,     0,
      54,    55,     0,    56,    57,    58,    59,    60,    61,     0,
     123,   124,    62,    63,    64,    65,    66,     0,    67,    68,
      69,   125,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,     0,     0,   159,   160,   161,
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,    81,     0,     0,     0,    82,    83,    84,    85,     0,
       0,    86,     0,     0,    38,    39,    40,    87,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     0,    51,
      52,    53,     0,    54,    55,     0,    56,    57,    58,    59,
      60,    61,     0,     0,     0,    62,    63,    64,    65,    66,
       0,    67,    68,    69,     0,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,    81,     0,     0,     0,    82,    83,
      84,    85,     0,     0,    86,     0,     0,     0,     0,     0,
      87,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,     0,     0,   159,   160,   161,   162
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-312)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      15,    21,    31,   112,   113,   114,   115,   114,   115,   127,
      56,    26,   184,     1,     1,   269,    62,    30,   190,    65,
     318,    32,    33,   334,   196,    32,    33,   100,    74,   340,
      99,   329,    43,     0,   345,    56,    43,    89,    90,    91,
      92,   339,    30,    30,   342,    91,    56,    54,    94,    95,
      96,   100,    98,    99,   100,    99,   165,   166,   165,   168,
     169,   170,   316,   172,   173,    32,    33,   179,    30,   181,
      76,    77,    96,    93,    76,    77,    43,   100,   332,    95,
      99,    42,    30,    95,   104,    94,   195,    54,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    95,
      95,    89,    90,    91,    92,    95,    95,   299,   100,    95,
      98,    80,    81,    82,    83,    84,    85,    86,    95,    95,
      89,    90,    91,    92,    95,   191,    93,   193,   100,    95,
     165,    96,    96,   199,    97,   327,    96,    84,    85,    86,
      95,   270,    89,    90,    91,    92,   275,    17,   183,   338,
     279,   263,     5,   202,   106,   284,    10,    33,   304,   288,
     195,   288,   291,   301,   302,   294,   295,   311,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,   283,   317,    89,
      90,    91,    92,   322,   333,   324,   175,   335,    82,    83,
      84,    85,    86,   202,   332,    89,    90,    91,    92,   182,
     250,   251,   306,    -1,    -1,    -1,   256,   257,    -1,   254,
     255,    -1,    -1,    -1,    -1,    -1,    -1,   276,    -1,    -1,
      -1,    -1,    -1,    -1,   269,    -1,    -1,    -1,    -1,    -1,
      -1,   276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,    80,    81,    82,    83,
      84,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
     310,    -1,    -1,    -1,    -1,   315,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    -1,    -1,    89,    90,    91,    92,   332,    -1,    -1,
      -1,   336,    -1,    -1,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,    -1,    -1,   161,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    -1,    -1,    89,    90,
      91,    92,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,   211,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    -1,    -1,    89,    90,    91,    92,    -1,
      -1,    -1,    82,    83,    -1,    -1,    -1,    87,    88,    89,
      90,    -1,    -1,    93,    94,    -1,    -1,    97,    -1,    99,
     100,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    -1,    -1,    89,    90,    91,    92,    -1,    -1,
      -1,    -1,    82,    83,    -1,    -1,    -1,    87,    88,    89,
      90,    -1,    -1,    93,    -1,    -1,    -1,    97,    -1,    99,
     100,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    -1,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    -1,    -1,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      -1,    93,    -1,    -1,     3,     4,     5,    99,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    -1,    22,    23,    -1,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      -1,    40,    41,    42,    -1,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    87,    88,
      89,    90,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,
      99,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    -1,    -1,    89,    90,    91,    92
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,    33,    43,    54,   102,   118,   162,   177,   181,
     182,     0,   118,     1,    30,   120,   121,   129,   132,   135,
     178,   179,   180,    30,   129,   100,   146,   186,    56,   138,
     134,   151,   152,   113,   114,   169,   170,   186,     3,     4,
       5,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    18,    19,    20,    22,    23,    25,    26,    27,    28,
      29,    30,    34,    35,    36,    37,    38,    40,    41,    42,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      82,    83,    87,    88,    89,    90,    93,    99,   124,   130,
     131,   133,   142,   143,   150,   158,   159,   174,   175,   176,
     185,   172,   186,   161,   163,   164,   177,    99,    30,   135,
      96,   100,   151,   151,   151,   151,   124,   124,   124,   124,
     124,   124,   124,    32,    33,    43,   106,   124,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    89,
      90,    91,    92,   111,   112,   151,   113,   144,   151,   151,
     151,    42,   151,   151,   151,     1,     6,    21,    24,    31,
      39,    55,    97,   100,   105,   109,   110,   117,   122,   123,
     125,   127,   128,   136,   137,   139,   167,   171,   173,   183,
     184,    95,   113,   120,   103,   122,   122,   103,   103,   107,
     108,    95,   111,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,    30,    95,   103,   155,   186,
     122,   147,   148,   122,   122,   122,   122,   122,   146,   145,
     166,   145,   145,   172,   186,   169,    94,   124,   169,   151,
     151,   122,   168,   186,   169,   151,   153,   154,   164,   113,
      93,   124,    98,   113,   113,    76,    77,   149,    96,   115,
     186,    96,   116,   186,   113,   113,   109,   125,   126,   157,
     186,   122,   122,   140,   141,   160,   177,   186,    97,   122,
     147,   122,   103,   122,   122,   122,    96,   169,   111,   111,
     140,   178,   113,   144,   113,   125,   122,   156,   171,   104,
     122,   122,   169,   165,   171,   157,   166,   165,   111,    17,
     119,   186,   104,   171,   165,   171,   165
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 4:
/* Line 1792 of yacc.c  */
#line 124 "../parser"
    {
            (yyval) = *multargs(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 129 "../parser"
    {
            (yyval) = *firstarg(&(yyvsp[(1) - (1)]));
        }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 135 "../parser"
    {
            break_ok++;
        }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 142 "../parser"
    {
            (yyval) = *break_stmnt();
        }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 155 "../parser"
    {parse_error = err_backtick_expected; }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 156 "../parser"
    {parse_error = err_closebrace_expected; }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 157 "../parser"
    {parse_error = err_closepar_expected; }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 158 "../parser"
    {parse_error = err_comma_expected; }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 163 "../parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 173 "../parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 184 "../parser"
    {
            (yyval) = (yyvsp[(2) - (3)]);
        }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 200 "../parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 209 "../parser"
    {
            entervar();
        }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 216 "../parser"
    {
        (yyval) = *fetchvar();
    }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 222 "../parser"
    {
            parse_error = err_in_expression;
        }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 226 "../parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 235 "../parser"
    {
            (yyval) = *assign(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 243 "../parser"
    {
            (yyval) = *indexOp(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]));
        }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 250 "../parser"
    {
    			(yyval) = *attribute(&(yyvsp[(1) - (3)]));
    		}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 257 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), multiply, "*=");
        }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 264 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), divide, "/=");
        }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 271 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), modulo, "%=");
        }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 278 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), addition, "+=");
        }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 285 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), subtract, "-=");
        }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 292 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), band, "&=");
        }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 299 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), bor, "|=");
        }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 306 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), xor, "^=");
        }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 313 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), shl, "<<=");
        }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 320 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), shr, ">>=");
        }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 327 "../parser"
    {
            (yyval) = *or_boolean(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 334 "../parser"
    {
            (yyval) = *and_boolean(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 341 "../parser"
    {
            (yyval) = *equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 348 "../parser"
    {
            (yyval) = *unequal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 355 "../parser"
    {
            (yyval) = *smaller(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 362 "../parser"
    {
            (yyval) = *greater(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 369 "../parser"
    {
            (yyval) = *sm_equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 376 "../parser"
    {
            (yyval) = *gr_equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 383 "../parser"
    {
            (yyval) = *addition(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 390 "../parser"
    {
            (yyval) = *band(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 397 "../parser"
    {
            (yyval) = *bor(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 404 "../parser"
    {
            (yyval) = *xor(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 411 "../parser"
    {
            (yyval) = *shl(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 418 "../parser"
    {
            (yyval) = *shr(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 425 "../parser"
    {
            (yyval) = *subtract(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 432 "../parser"
    {
            (yyval) = *multiply(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 439 "../parser"
    {
            (yyval) = *young(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 446 "../parser"
    {
            (yyval) = *old(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 453 "../parser"
    {
            (yyval) = *divide(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 460 "../parser"
    {
            (yyval) = *modulo(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 466 "../parser"
    {
            (yyval) = *negate(&(yyvsp[(2) - (2)]));
        }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 472 "../parser"
    {
            (yyval) = *incdec(pre_op, op_inc, &(yyvsp[(2) - (2)]));
        }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 478 "../parser"
    {
            (yyval) = *incdec(post_op, op_inc, &(yyvsp[(1) - (2)]));
        }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 484 "../parser"
    {
            (yyval) = *incdec(pre_op, op_dec, &(yyvsp[(2) - (2)]));
        }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 490 "../parser"
    {
            (yyval) = *incdec(post_op, op_dec, &(yyvsp[(1) - (2)]));
        }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 496 "../parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 502 "../parser"
    {
            (yyval) = *bnot(&(yyvsp[(2) - (2)]));
        }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 508 "../parser"
    {
            (yyval) = *not_boolean(&(yyvsp[(2) - (2)]));
        }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 516 "../parser"
    {
            (yyval) = *cast((yyvsp[(2) - (4)]).type, &(yyvsp[(4) - (4)]));
        }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 521 "../parser"
    {
            (yyval) = *stackframe(e_str | e_const);
        }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 526 "../parser"
    {
            (yyval) = *stackframe(e_int | e_const);
        }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 533 "../parser"
    {
            (yyval) = (yyvsp[(2) - (3)]);
        }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 542 "../parser"
    {
            (yyval) = *onearg(f_backtick, &(yyvsp[(2) - (3)]));
        }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 549 "../parser"
    {
            (yyval) = *expr_stmnt(&(yyvsp[(1) - (1)]));
        }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 558 "../parser"
    {
            (yyval) = *catcode(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 582 "../parser"
    {
            (yyval) = *for_stmnt(&(yyvsp[(3) - (11)]), &(yyvsp[(5) - (11)]), &(yyvsp[(7) - (11)]), &(yyvsp[(10) - (11)]));
        }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 592 "../parser"
    {
            close_fun(&(yyvsp[(3) - (4)]));
        }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 602 "../parser"
    {
            (yyval) = *fetchvar();
        }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 610 "../parser"
    {
            (yyval) = *zeroargs((yyvsp[(1) - (2)]).type);
        }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 617 "../parser"
    {
            (yyval) = *onearg((yyvsp[(1) - (3)]).type, &(yyvsp[(3) - (3)]));
        }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 626 "../parser"
    {
            (yyval) = *twoargs((yyvsp[(1) - (5)]).type, &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]));
        }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 637 "../parser"
    {
            (yyval) = *threeargs((yyvsp[(1) - (7)]).type, &(yyvsp[(3) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(7) - (7)]));
        }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 645 "../parser"
    {
            (yyval) = *optint_string((yyvsp[(1) - (4)]).type, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]));
        }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 653 "../parser"
    {
            (yyval) = *optint_special((yyvsp[(1) - (4)]).type, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]));
        }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 660 "../parser"
    {
            (yyval) = *specials(f_printf, &(yyvsp[(3) - (3)]));
        }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 667 "../parser"
    {
            (yyval) = *exec_fprintf((yyvsp[(1) - (3)]).type, &(yyvsp[(3) - (3)]));
        }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 674 "../parser"
    {
            (yyval) = *specials(f_strformat, &(yyvsp[(3) - (3)]));
        }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 681 "../parser"
    {
            (yyval) = *callfun((yyvsp[(1) - (3)]).evalue, &(yyvsp[(3) - (3)]));
        }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 690 "../parser"
    {
            open_fun();
        }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 697 "../parser"
    {
            (yyval).evalue = fetchfun();
        }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 708 "../parser"
    {
            make_frame();
            outbin((yyvsp[(5) - (5)]).code, (yyvsp[(5) - (5)]).codelen);
        }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 724 "../parser"
    {
        initialization = 0;
        (yyval) = *expr_stmnt(assign(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])));    /* explicit initialization */
    }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 745 "../parser"
    {
            (yyval) = *if_stmnt(&(yyvsp[(3) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(8) - (9)]));
        }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 752 "../parser"
    {
        initialization = 1;
    }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 768 "../parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 776 "../parser"
    {
        (yyval) = *catcode(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]));        /* cat initialization code */
    }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 787 "../parser"
    {
            (yyval) = *makelist
                 (
                     multargs
                     (
                         firstarg(&(yyvsp[(2) - (2)])),     /* O_FILE is passed */
                         &(yyvsp[(1) - (2)])                /* expression is passed */
                     ),
                     op_hlt                 /* not op_younger or op_older */
                 );
        }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 803 "../parser"
    {
            (yyval) = *makelist
                 (
                     multargs
                     (
                         firstarg(&(yyvsp[(1) - (3)])),     /* fileattribute is passed */
                         &(yyvsp[(3) - (3)])                /* expression is passed */
                     ),
                     op_hlt                 /* not op_younger or op_older */
                 );
        }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 821 "../parser"
    {
            (yyval) = *makelist
                 (
                    multargs
                    (
                        multargs
                        (
                            firstarg(&(yyvsp[(6) - (6)])),  /* O_FILE   is passed */
                            &(yyvsp[(1) - (6)])             /* 1st expression is passed */
                        ),
                        &(yyvsp[(5) - (6)])                 /* 2nd expression is passed */
                     ),
                     (yyvsp[(3) - (6)]).type                /* older/younger */
                 );
        }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 844 "../parser"
    {
            (yyval) = *makelist
                 (
                    multargs
                    (
                        multargs
                        (
                            firstarg(&(yyvsp[(1) - (7)])),  /* attribute is passed */
                            &(yyvsp[(3) - (7)])             /* 2nd expression is passed */
                        ),
                        &(yyvsp[(7) - (7)])                 /* 3rd expression is passed */
                     ),
                     (yyvsp[(5) - (7)]).type                /* older/younger */
                 );
        }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 865 "../parser"
    {
            (yyval) = (yyvsp[(3) - (3)]);
        }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 871 "../parser"
    {
            (yyval) = *stackframe(e_int | e_const);
            (yyval).evalue = O_FILE;
        }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 879 "../parser"
    {
            nestlevel++;
        }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 886 "../parser"
    {
            yyerrok;
        }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 892 "../parser"
    {parse_error = err_older_younger; }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 894 "../parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 945 "../parser"
    {parse_error = err_openpar_expected; }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 946 "../parser"
    {parse_error = err_openbrace_expected; }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 957 "../parser"
    {
            (yyval) = *stackframe(e_int | e_const);
            (yyval).evalue = 1;
        }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 997 "../parser"
    {
            vartype = e_int;
        }
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 1013 "../parser"
    {
            n_params++;
        }
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 1019 "../parser"
    {
            pop_dead();
        }
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 1025 "../parser"
    {
            push_dead();                    /* set new dead-level */
        }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 1035 "../parser"
    {
            (yyval) = *return_stmnt((yyvsp[(1) - (2)]).type, &(yyvsp[(2) - (2)]));
        }
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 1046 "../parser"
    {parse_error = err_semicol_expected; }
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 1050 "../parser"
    {
            sem_err = 0;
        }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 1058 "../parser"
    {
            (yyval) = *cat_stmnt(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]));
        }
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 1070 "../parser"
    {
            (yyval) = (yyvsp[(1) - (2)]);
        }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 1096 "../parser"
    {
        stringbuf = xstrcat(stringbuf, lexstring);/* catenate the new string */
    }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 1101 "../parser"
    {
        free(stringbuf);                    /* free former string */
        stringbuf = xstrdup(lexstring);     /* duplicate initial string */
    }
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 1130 "../parser"
    {
            parse_error = err_identifier_expected;
            vartype = (yyvsp[(1) - (1)]).type;
        }
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 1140 "../parser"
    {
        (yyval) = (yyvsp[(1) - (2)]);                    /* initialization code */
    }
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 1149 "../parser"
    {
            (yyval) = *catcode(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));    /* catenate variable    */
                                        /* initialization code  */
        }
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 1159 "../parser"
    {
            (yyval) = (yyvsp[(3) - (3)]);
        }
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 1166 "../parser"
    {
            global_init = *catcode(&global_init, &(yyvsp[(1) - (1)]));
        }
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 1183 "../parser"
    {
            vartype = 0;
        }
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 1201 "../parser"
    {
            (yyval) = *while_stmnt(&(yyvsp[(3) - (7)]), &(yyvsp[(6) - (7)]));
        }
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 1218 "../parser"
    {
            (yyval) = *stackframe(0);
        }
    break;


/* Line 1792 of yacc.c  */
#line 2828 "../parser.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


/* Line 2055 of yacc.c  */
#line 1222 "../parser"


int yywrap(void)
{
    return 1;
}
