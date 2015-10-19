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
     SUBSTR = 303,
     SYSTEM = 304,
     VOID = 305,
     WHILE = 306,
     PLUS_IS = 307,
     MOD_IS = 308,
     MUL_IS = 309,
     MINUS_IS = 310,
     DIV_IS = 311,
     SHR_IS = 312,
     SHL_IS = 313,
     XOR_IS = 314,
     OR_IS = 315,
     AND_IS = 316,
     OR = 317,
     AND = 318,
     NOT_EQUAL = 319,
     EQUAL = 320,
     YOUNGER = 321,
     OLDER = 322,
     GREATER_EQUAL = 323,
     SMALLER_EQUAL = 324,
     SHR = 325,
     SHL = 326,
     DEC = 327,
     INC = 328
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



/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 210 "../parser.c"

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
#define YYLAST   832

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  97
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  87
/* YYNRULES -- Number of rules.  */
#define YYNRULES  208
/* YYNRULES -- Number of states.  */
#define YYNSTATES  342

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   328

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,     2,     2,     2,    82,    67,     2,
      94,    90,    80,    78,    91,    79,    95,    81,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    96,
      70,    52,    71,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    87,     2,    93,    66,     2,    88,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    92,    65,    89,    84,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    68,
      69,    72,    73,    74,    75,    76,    77,    85,    86
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
     185,   189,   193,   197,   201,   204,   207,   210,   213,   216,
     219,   222,   225,   230,   232,   234,   238,   240,   244,   246,
     250,   252,   255,   267,   272,   275,   276,   281,   283,   286,
     290,   296,   304,   309,   314,   318,   322,   326,   328,   330,
     332,   338,   341,   345,   348,   358,   360,   362,   364,   367,
     370,   372,   375,   379,   386,   394,   398,   399,   401,   403,
     404,   407,   409,   411,   413,   415,   417,   419,   421,   423,
     425,   427,   429,   431,   433,   435,   437,   439,   441,   443,
     444,   447,   448,   451,   453,   455,   457,   458,   460,   462,
     464,   466,   468,   470,   472,   474,   476,   478,   479,   481,
     482,   486,   488,   491,   492,   493,   496,   498,   500,   501,
     504,   506,   509,   511,   513,   516,   519,   521,   523,   525,
     528,   531,   534,   537,   539,   541,   543,   545,   547,   549,
     551,   553,   555,   557,   560,   564,   566,   570,   572,   574,
     576,   578,   580,   582,   585,   593,   595,   597,   599
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      98,     0,    -1,    98,   114,    -1,   114,    -1,    99,   109,
     118,    -1,   118,    -1,    -1,     6,    -1,    32,    -1,    33,
      -1,    43,    -1,    -1,   104,    88,    -1,    -1,   106,    89,
      -1,    -1,   108,    90,    -1,    -1,   110,    91,    -1,    91,
      99,    -1,   183,    -1,    91,   118,    -1,   183,    -1,    92,
     169,   105,    -1,   159,   177,    -1,   179,   125,    -1,    17,
     168,    -1,   183,    -1,    30,    -1,   116,    -1,    -1,   119,
     120,    -1,   120,    52,   120,    -1,   120,    87,   120,    93,
      -1,   120,    55,   120,    -1,   120,    57,   120,    -1,   120,
      54,   120,    -1,   120,    53,   120,    -1,   120,    56,   120,
      -1,   120,    62,   120,    -1,   120,    61,   120,    -1,   120,
      60,   120,    -1,   120,    59,   120,    -1,   120,    58,   120,
      -1,   120,    63,   120,    -1,   120,    64,   120,    -1,   120,
      69,   120,    -1,   120,    68,   120,    -1,   120,    70,   120,
      -1,   120,    71,   120,    -1,   120,    75,   120,    -1,   120,
      74,   120,    -1,   120,    78,   120,    -1,   120,    67,   120,
      -1,   120,    65,   120,    -1,   120,    66,   120,    -1,   120,
      77,   120,    -1,   120,    76,   120,    -1,   120,    79,   120,
      -1,   120,    80,   120,    -1,   120,    72,   120,    -1,   120,
      73,   120,    -1,   120,    81,   120,    -1,   120,    82,   120,
      -1,    79,   120,    -1,    86,   120,    -1,   120,    86,    -1,
      85,   120,    -1,   120,    85,    -1,    78,   120,    -1,    84,
     120,    -1,    83,   120,    -1,    94,   102,    90,   120,    -1,
     171,    -1,    36,    -1,    94,   120,   107,    -1,   126,    -1,
      88,   120,   103,    -1,   118,    -1,   122,    91,   121,    -1,
     121,    -1,    24,   142,    -1,   123,   148,   154,   166,   153,
     166,   154,   107,   100,   168,   162,    -1,   129,   131,   169,
     105,    -1,   128,   107,    -1,    -1,    30,   127,    95,    30,
      -1,    30,    -1,   182,   148,    -1,   147,   148,   118,    -1,
     172,   148,   118,   109,   118,    -1,   173,   148,   118,   109,
     118,   109,   118,    -1,   156,   148,   118,   112,    -1,   155,
     148,   118,   111,    -1,    37,   148,    99,    -1,    25,   148,
      99,    -1,   130,   148,   152,    -1,   139,    -1,    30,    -1,
      30,    -1,   148,   158,    90,   150,   157,    -1,   116,   183,
      -1,   117,   135,   120,    -1,    31,   142,    -1,   133,   148,
     118,   107,   168,   162,   163,   115,   162,    -1,    52,    -1,
      39,    -1,    21,    -1,   174,   175,    -1,   138,   137,    -1,
     137,    -1,   140,   141,    -1,   140,   109,   118,    -1,   140,
     109,   144,   109,   118,   141,    -1,   140,   109,   118,   109,
     144,   109,   118,    -1,    34,   148,   118,    -1,    -1,   163,
      -1,    96,    -1,    -1,   145,   146,    -1,    73,    -1,    72,
      -1,     5,    -1,    40,    -1,    20,    -1,    35,    -1,     9,
      -1,     8,    -1,     3,    -1,     4,    -1,    13,    -1,    15,
      -1,    14,    -1,    38,    -1,    26,    -1,    44,    -1,    46,
      -1,    45,    -1,    -1,   149,    94,    -1,    -1,   151,    92,
      -1,    99,    -1,   183,    -1,   118,    -1,    -1,   122,    -1,
     183,    -1,    18,    -1,    19,    -1,    41,    -1,     7,    -1,
      49,    -1,   138,    -1,   183,    -1,   160,    -1,    -1,   174,
      -1,    -1,   160,   109,   161,    -1,   161,    -1,   174,   116,
      -1,    -1,    -1,   136,   165,    -1,   118,    -1,   183,    -1,
      -1,   167,    96,    -1,   170,    -1,   169,   168,    -1,   183,
      -1,   113,    -1,    96,   183,    -1,   121,   166,    -1,   181,
      -1,   134,    -1,   124,    -1,   164,   166,    -1,   101,   166,
      -1,     1,   143,    -1,   171,    42,    -1,    42,    -1,    11,
      -1,    10,    -1,    12,    -1,    16,    -1,    22,    -1,    23,
      -1,    47,    -1,    48,    -1,   178,    -1,   176,   166,    -1,
     176,   109,   132,    -1,   132,    -1,     1,   143,   183,    -1,
     175,    -1,   125,    -1,    32,    -1,    43,    -1,    33,    -1,
      50,    -1,    51,   142,    -1,   180,   148,   118,   107,   100,
     168,   162,    -1,    27,    -1,    28,    -1,    29,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   110,   115,   122,   129,   135,   142,   144,
     146,   149,   149,   150,   150,   151,   151,   152,   152,   155,
     161,   165,   171,   175,   184,   187,   192,   198,   202,   209,
     216,   216,   226,   233,   241,   248,   255,   262,   269,   276,
     283,   290,   297,   304,   311,   318,   325,   332,   339,   346,
     353,   360,   367,   374,   381,   388,   395,   402,   409,   416,
     423,   430,   437,   444,   451,   457,   463,   469,   475,   481,
     487,   493,   499,   507,   512,   517,   524,   526,   535,   542,
     549,   553,   558,   575,   585,   588,   588,   593,   600,   606,
     613,   622,   633,   641,   649,   656,   663,   670,   674,   681,
     688,   703,   706,   716,   721,   736,   745,   747,   751,   759,
     765,   770,   785,   800,   822,   847,   856,   863,   870,   877,
     877,   885,   887,   891,   893,   895,   897,   899,   901,   903,
     905,   907,   909,   911,   913,   915,   917,   919,   921,   924,
     924,   925,   925,   928,   930,   934,   936,   943,   945,   949,
     951,   955,   957,   959,   963,   965,   969,   970,   974,   976,
     982,   986,   990,   998,  1004,  1012,  1020,  1022,  1025,  1025,
    1028,  1035,  1041,  1045,  1047,  1053,  1056,  1058,  1060,  1062,
    1065,  1068,  1073,  1079,  1088,  1090,  1092,  1094,  1096,  1098,
    1100,  1104,  1108,  1117,  1125,  1133,  1135,  1144,  1149,  1153,
    1155,  1157,  1161,  1168,  1173,  1189,  1191,  1193,  1197
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
  "STRINGTYPE", "STRLEN", "STRLWR", "STRUPR", "STRFIND", "SUBSTR",
  "SYSTEM", "VOID", "WHILE", "'='", "PLUS_IS", "MOD_IS", "MUL_IS",
  "MINUS_IS", "DIV_IS", "SHR_IS", "SHL_IS", "XOR_IS", "OR_IS", "AND_IS",
  "OR", "AND", "'|'", "'^'", "'&'", "NOT_EQUAL", "EQUAL", "'<'", "'>'",
  "YOUNGER", "OLDER", "GREATER_EQUAL", "SMALLER_EQUAL", "SHR", "SHL",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'~'", "DEC", "INC", "'['",
  "'`'", "'}'", "')'", "','", "'{'", "']'", "'('", "'.'", "';'", "$accept",
  "input", "args", "break_ok", "break_stat", "casttype", "backtick", "$@1",
  "closebrace", "$@2", "closepar", "$@3", "comma", "$@4", "comma_arglist",
  "comma_expr", "compound", "def_var_or_fun", "else_tail", "enterid",
  "entervarid", "err_expression", "$@5", "expression", "expr_code",
  "expr_list", "for", "for_stat", "funcdef", "func_or_var", "$@6",
  "function", "funid", "funname", "funvars", "idexpr", "if", "if_stat",
  "initassign", "leave_key", "local_list", "locals", "makelist",
  "makelist_expr", "makelist_normal", "nesting", "ok", "older_younger",
  "$@7", "old_young", "one_arg_funs", "openpar", "$@8", "openbrace", "$@9",
  "opt_arglist", "opt_expression", "opt_expr_list", "optint_special",
  "optint_string", "opt_locals", "opt_parlist", "opt_vartype", "pars",
  "partype", "popdead", "pushdead", "return_stat", "return_tail",
  "semicol", "$@10", "statement", "statements", "stm", "string",
  "two_arg_funs", "three_arg_funs", "type_of_var", "vardefs", "varnames",
  "var_or_fun", "vartype", "voidtype", "while", "while_stat",
  "zero_arg_funs", "zeroframe", YY_NULL
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
     305,   306,    61,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   124,    94,    38,   319,   320,
      60,    62,   321,   322,   323,   324,   325,   326,    43,    45,
      42,    47,    37,    33,   126,   327,   328,    91,    96,   125,
      41,    44,   123,    93,    40,    46,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    97,    98,    98,    99,    99,   100,   101,   102,   102,
     102,   104,   103,   106,   105,   108,   107,   110,   109,   111,
     111,   112,   112,   113,   114,   114,   115,   115,   116,   117,
     119,   118,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   121,   122,
     122,   123,   124,   125,   126,   127,   126,   126,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   129,   130,
     131,   132,   132,   133,   134,   135,   136,   136,   137,   138,
     138,   139,   139,   139,   139,   140,   141,   142,   143,   145,
     144,   146,   146,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   149,
     148,   151,   150,   152,   152,   153,   153,   154,   154,   155,
     155,   156,   156,   156,   157,   157,   158,   158,   159,   159,
     160,   160,   161,   162,   163,   164,   165,   165,   167,   166,
     168,   169,   169,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   171,   171,   172,   172,   172,   172,   172,   172,
     172,   173,   174,   175,   176,   176,   176,   177,   177,   178,
     178,   178,   179,   180,   181,   182,   182,   182,   183
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
       3,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     1,     1,     3,     1,     3,     1,     3,
       1,     2,    11,     4,     2,     0,     4,     1,     2,     3,
       5,     7,     4,     4,     3,     3,     3,     1,     1,     1,
       5,     2,     3,     2,     9,     1,     1,     1,     2,     2,
       1,     2,     3,     6,     7,     3,     0,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     0,     2,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     0,
       3,     1,     2,     0,     0,     2,     1,     1,     0,     2,
       1,     2,     1,     1,     2,     2,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     2,     7,     1,     1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     159,   199,   201,   200,   202,   159,     3,     0,   158,   192,
       0,     1,     2,     0,    28,   208,     0,   198,   139,   195,
     197,    17,    24,    98,    25,   118,   208,   101,   105,     0,
     208,   157,     0,     0,     0,   193,     0,   196,   129,   130,
     123,   152,   128,   127,   185,   184,   186,   131,   133,   132,
     187,   149,   150,   125,   188,   189,   139,   135,   205,   206,
     207,    87,   139,   126,    74,   139,   134,   124,   151,   183,
     136,   138,   137,   190,   191,   153,     0,     0,     0,     0,
       0,     0,     0,     0,   102,    76,    15,   139,    97,    17,
     139,   139,   139,    73,   139,   139,   139,     0,   172,     0,
      17,   161,     0,   140,    28,   194,    18,   169,    30,     0,
      30,    30,    69,    64,    71,    70,    67,    65,    11,     8,
       9,    10,     0,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,    66,     0,    84,     0,
      30,    30,   111,    30,    30,    30,   182,    30,    30,    88,
       0,     7,   107,   164,   164,   106,   164,   208,   208,   168,
      83,     0,   173,    78,     0,   168,   139,   178,   139,   177,
      30,   168,   171,   170,   139,   176,   141,     0,   162,    17,
       5,     0,   115,    17,    77,     0,     0,    75,    32,    37,
      36,    34,    38,    35,    43,    42,    41,    40,    39,    44,
      45,    54,    55,    53,    47,    46,    48,    49,    60,    61,
      51,    50,    57,    56,    52,    58,    59,    62,    63,     0,
      16,    17,    96,   144,    17,    17,     0,    89,   208,   208,
      17,    17,   181,    81,   117,   103,   203,     0,   174,   180,
      14,    31,   175,    30,    30,   166,   165,   167,   179,    30,
     208,     0,   160,    30,    86,    12,    72,    33,   119,    30,
     122,   121,   120,    30,    93,    20,    30,    92,    22,    30,
      30,    23,    80,   147,   168,   148,    15,    15,   110,   154,
     100,     0,   155,   142,     4,    17,   116,    17,    21,    90,
      17,    30,    30,     0,     6,   109,   108,    30,   113,    30,
      79,   145,   168,   163,     0,   114,    91,    30,   164,   163,
      15,   208,   204,     6,     0,   163,    27,     0,    26,   104,
     163,    82
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   199,   324,   179,   122,   204,   205,   180,   181,
     158,   159,   273,    34,   284,   287,   182,     6,   335,    15,
      16,   183,   184,    84,   185,   293,   186,   187,    17,    85,
     109,    86,    18,    87,    30,    19,   188,   189,    29,   190,
     298,   299,    88,    89,   162,   253,    26,   245,   246,   282,
      90,    31,    32,   270,   271,   242,   322,   294,    91,    92,
     300,    99,     7,   100,   101,   328,   254,   191,   266,    35,
      36,   192,    97,   193,    93,    94,    95,     8,    20,    21,
      22,     9,    10,   194,   195,    96,    98
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -300
static const yytype_int16 yypact[] =
{
     -13,  -300,  -300,  -300,  -300,    23,  -300,    12,  -300,  -300,
       4,  -300,  -300,   -79,   -58,    -8,    -3,  -300,  -300,  -300,
    -300,   -43,  -300,  -300,  -300,  -300,  -300,  -300,  -300,   660,
    -300,    -4,   -31,    37,   -16,  -300,   -19,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,   -68,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,  -300,   660,   660,   660,   660,
     660,   660,   660,   572,   745,  -300,  -300,  -300,  -300,   -14,
    -300,  -300,  -300,    36,  -300,  -300,  -300,   384,  -300,    -9,
      -7,  -300,    37,  -300,  -300,  -300,  -300,  -300,  -300,   -11,
    -300,  -300,   -54,   -54,   -54,   -54,   -54,   -54,   745,  -300,
    -300,  -300,    -5,   745,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,  -300,  -300,   660,  -300,    17,
      18,   -32,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
     -79,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,    25,  -300,  -300,   660,  -300,  -300,  -300,  -300,  -300,
     -10,  -300,  -300,  -300,  -300,  -300,  -300,    -4,  -300,    22,
    -300,    52,  -300,    26,  -300,    27,   660,  -300,   745,   745,
     745,   745,   745,   745,   745,   745,   745,   745,   745,    24,
      54,   228,   121,   285,   366,   366,   141,   141,   141,   141,
     141,   141,    73,    73,   157,   157,   -54,   -54,   -54,   703,
    -300,    47,  -300,  -300,    48,  -300,    -1,  -300,    56,    57,
    -300,  -300,  -300,  -300,  -300,  -300,  -300,   384,  -300,  -300,
    -300,   745,  -300,   -10,  -300,  -300,  -300,  -300,  -300,  -300,
      -4,    21,  -300,  -300,  -300,  -300,   -54,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,  -300,    58,  -300,  -300,  -300,  -300,  -300,    -4,
    -300,    15,  -300,  -300,  -300,  -300,  -300,    53,  -300,  -300,
    -300,  -300,    60,   478,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,   478,  -300,  -300,    18,  -300,  -300,
    -300,   100,  -300,  -300,   478,  -300,  -300,   478,  -300,  -300,
    -300,  -300
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -300,  -300,  -101,  -171,  -300,  -300,  -300,  -300,  -100,  -300,
    -119,  -300,   -20,  -300,  -300,  -300,  -300,   159,  -300,    63,
    -300,  -103,  -300,   195,  -257,  -300,  -300,  -300,   161,  -300,
    -300,  -300,  -300,  -300,  -300,   134,  -300,  -300,  -300,  -300,
    -130,  -300,  -300,  -300,  -134,  -152,     3,  -104,  -300,  -300,
    -300,   -44,  -300,  -300,  -300,  -300,  -300,  -148,  -300,  -300,
    -300,  -300,  -300,  -300,   -12,  -261,  -147,  -300,  -300,  -176,
    -300,  -299,     7,  -300,  -300,  -300,  -300,   -29,   -97,  -300,
    -300,  -300,  -300,  -300,  -300,  -300,   -15
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -209
static const yytype_int16 yytable[] =
{
      27,    33,   102,   259,   207,   200,   292,   202,   200,   262,
     203,    37,   108,    13,   323,   268,    13,    25,   110,     1,
       2,   111,   255,    11,   256,   329,   -99,   -85,     1,     2,
       3,   155,   156,   157,    23,   338,   -98,     4,   340,     3,
    -119,  -119,    14,   160,   -29,   104,   163,   164,   165,    28,
     167,   168,   169,  -168,   320,     1,     2,   200,   244,   241,
     247,   248,   249,   103,   250,   251,     3,   104,   332,   161,
     292,   280,   281,     4,   339,   106,  -116,   107,   166,   341,
     197,   196,   274,  -156,   201,   206,  -208,   265,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   240,  -208,   155,
     156,   157,   -95,   303,   260,   275,   -94,   334,   312,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,  -143,  -112,   155,
     156,   157,   263,   -19,   264,   243,   327,   283,   286,   311,
     269,   150,   151,   152,   153,   154,  -146,   291,   155,   156,
     157,   296,   337,   258,    12,   198,   297,   105,   102,   315,
     304,    24,   318,   252,   305,   267,   306,   313,   314,   330,
     200,   331,   307,   308,   257,   272,   309,   310,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   316,     0,   155,   156,   157,   321,
       0,   333,     0,     0,   325,     0,   326,   148,   149,   150,
     151,   152,   153,   154,   278,   279,   155,   156,   157,     0,
     289,   290,     0,   285,   288,     0,     0,   152,   153,   154,
       0,   301,   155,   156,   157,     0,     0,     0,   295,     0,
       0,     0,     0,     0,     0,   302,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     301,   112,   113,   114,   115,   116,   117,   118,   123,     0,
       0,     0,     0,     0,     0,   317,     0,     0,     0,     0,
     319,     0,     0,     0,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,     0,   295,   155,   156,   157,   336,     0,     0,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
       0,     0,   239,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,     0,     0,
     155,   156,   157,     0,     0,     0,     0,     0,     0,   261,
       0,     0,     0,     0,     0,   170,     0,   -30,   -30,   -30,
     171,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   276,   -30,   -30,   -30,   172,   -30,   -30,   173,   -30,
     -30,   -30,   -30,   -30,   -30,   174,     0,     0,   -30,   -30,
     -30,   -30,   -30,   175,   -30,   -30,   -30,     0,   -30,   -30,
     -30,   -30,   -30,   -30,     0,   176,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,     0,
       0,   155,   156,   157,     0,     0,     0,     0,     0,     0,
       0,     0,   -30,   -30,     0,     0,     0,   -30,   -30,   -30,
     -30,     0,   -30,   -13,     0,     0,   177,     0,   -30,   170,
     178,   -30,   -30,   -30,   171,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,   172,
     -30,   -30,   173,   -30,   -30,   -30,   -30,   -30,   -30,   174,
       0,     0,   -30,   -30,   -30,   -30,   -30,   175,   -30,   -30,
     -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,   176,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -30,   -30,     0,     0,
       0,   -30,   -30,   -30,   -30,     0,   -30,     0,     0,     0,
     177,     0,   -30,     0,   178,    38,    39,    40,     0,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,     0,
      51,    52,    53,     0,    54,    55,     0,    56,    57,    58,
      59,    60,    61,     0,   119,   120,    62,    63,    64,    65,
      66,     0,    67,    68,    69,   121,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,    77,     0,     0,     0,    78,    79,    80,    81,     0,
      82,     0,     0,    38,    39,    40,    83,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     0,    51,    52,
      53,     0,    54,    55,     0,    56,    57,    58,    59,    60,
      61,     0,     0,     0,    62,    63,    64,    65,    66,     0,
      67,    68,    69,     0,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,    77,
       0,     0,     0,    78,    79,    80,    81,     0,    82,     0,
       0,     0,     0,     0,    83,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,     0,     0,   155,   156,
     157,     0,     0,     0,     0,     0,   277,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,     0,     0,
     155,   156,   157
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-300)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      15,    21,    31,   179,   123,   108,   263,   110,   111,   185,
     111,    26,    56,     1,   313,   191,     1,    96,    62,    32,
      33,    65,   174,     0,   176,   324,    94,    95,    32,    33,
      43,    85,    86,    87,    30,   334,    94,    50,   337,    43,
      72,    73,    30,    87,    52,    30,    90,    91,    92,    52,
      94,    95,    96,    96,   311,    32,    33,   160,   161,   160,
     163,   164,   165,    94,   167,   168,    43,    30,   329,    89,
     327,    72,    73,    50,   335,    91,    90,    96,    42,   340,
     100,    90,    30,    90,    95,    90,    96,   190,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    90,    90,    85,
      86,    87,    90,    92,    89,    88,    90,    17,   294,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    90,    90,    85,
      86,    87,   186,    90,   188,   160,   322,    91,    91,    91,
     194,    78,    79,    80,    81,    82,    96,   257,    85,    86,
      87,   264,   333,   178,     5,   102,   269,    33,   197,   299,
     273,    10,   306,   170,   278,   190,   279,   296,   297,   327,
     283,   328,   283,   286,   177,   197,   289,   290,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,   301,    -1,    85,    86,    87,   312,
      -1,   330,    -1,    -1,   317,    -1,   319,    76,    77,    78,
      79,    80,    81,    82,   244,   245,    85,    86,    87,    -1,
     250,   251,    -1,   248,   249,    -1,    -1,    80,    81,    82,
      -1,   270,    85,    86,    87,    -1,    -1,    -1,   263,    -1,
      -1,    -1,    -1,    -1,    -1,   270,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     299,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
     310,    -1,    -1,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,   327,    85,    86,    87,   331,    -1,    -1,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
      -1,    -1,   157,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    -1,
      85,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,   184,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,   206,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    47,    48,    49,    -1,    51,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      -1,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,    -1,    -1,    -1,    83,    84,    85,
      86,    -1,    88,    89,    -1,    -1,    92,    -1,    94,     1,
      96,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    -1,    -1,
      -1,    83,    84,    85,    86,    -1,    88,    -1,    -1,    -1,
      92,    -1,    94,    -1,    96,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    -1,    22,    23,    -1,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    -1,    -1,    -1,    83,    84,    85,    86,    -1,
      88,    -1,    -1,     3,     4,     5,    94,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    -1,    22,    23,    -1,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,
      40,    41,    42,    -1,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      -1,    -1,    -1,    83,    84,    85,    86,    -1,    88,    -1,
      -1,    -1,    -1,    -1,    94,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    -1,    85,    86,
      87,    -1,    -1,    -1,    -1,    -1,    93,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    -1,
      85,    86,    87
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,    33,    43,    50,    98,   114,   159,   174,   178,
     179,     0,   114,     1,    30,   116,   117,   125,   129,   132,
     175,   176,   177,    30,   125,    96,   143,   183,    52,   135,
     131,   148,   149,   109,   110,   166,   167,   183,     3,     4,
       5,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    18,    19,    20,    22,    23,    25,    26,    27,    28,
      29,    30,    34,    35,    36,    37,    38,    40,    41,    42,
      44,    45,    46,    47,    48,    49,    78,    79,    83,    84,
      85,    86,    88,    94,   120,   126,   128,   130,   139,   140,
     147,   155,   156,   171,   172,   173,   182,   169,   183,   158,
     160,   161,   174,    94,    30,   132,    91,    96,   148,   127,
     148,   148,   120,   120,   120,   120,   120,   120,   120,    32,
      33,    43,   102,   120,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    85,    86,    87,   107,   108,
     148,   109,   141,   148,   148,   148,    42,   148,   148,   148,
       1,     6,    21,    24,    31,    39,    51,    92,    96,   101,
     105,   106,   113,   118,   119,   121,   123,   124,   133,   134,
     136,   164,   168,   170,   180,   181,    90,   109,   116,    99,
     118,    95,   118,    99,   103,   104,    90,   107,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
      90,    99,   152,   183,   118,   144,   145,   118,   118,   118,
     118,   118,   143,   142,   163,   142,   142,   169,   183,   166,
      89,   120,   166,   148,   148,   118,   165,   183,   166,   148,
     150,   151,   161,   109,    30,    88,   120,    93,   109,   109,
      72,    73,   146,    91,   111,   183,    91,   112,   183,   109,
     109,   105,   121,   122,   154,   183,   118,   118,   137,   138,
     157,   174,   183,    92,   118,   144,   118,    99,   118,   118,
     118,    91,   166,   107,   107,   137,   175,   109,   141,   109,
     121,   118,   153,   168,   100,   118,   118,   166,   162,   168,
     154,   163,   162,   107,    17,   115,   183,   100,   168,   162,
     168,   162
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
#line 118 "../parser"
    {
            (yyval) = *multargs(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 123 "../parser"
    {
            (yyval) = *firstarg(&(yyvsp[(1) - (1)]));
        }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 129 "../parser"
    {
            break_ok++;
        }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 136 "../parser"
    {
            (yyval) = *break_stmnt();
        }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 149 "../parser"
    {parse_error = err_backtick_expected; }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 150 "../parser"
    {parse_error = err_closebrace_expected; }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 151 "../parser"
    {parse_error = err_closepar_expected; }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 152 "../parser"
    {parse_error = err_comma_expected; }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 157 "../parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 167 "../parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 178 "../parser"
    {
            (yyval) = (yyvsp[(2) - (3)]);
        }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 194 "../parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 203 "../parser"
    {
            entervar();
        }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 210 "../parser"
    {
        (yyval) = *fetchvar();
    }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 216 "../parser"
    {
            parse_error = err_in_expression;
        }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 220 "../parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 229 "../parser"
    {
            (yyval) = *assign(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 237 "../parser"
    {
            (yyval) = *indexOp(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]));
        }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 244 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), multiply, "*=");
        }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 251 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), divide, "/=");
        }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 258 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), modulo, "%=");
        }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 265 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), addition, "+=");
        }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 272 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), subtract, "-=");
        }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 279 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), band, "&=");
        }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 286 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), bor, "|=");
        }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 293 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), xor, "^=");
        }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 300 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), shl, "<<=");
        }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 307 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), shr, ">>=");
        }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 314 "../parser"
    {
            (yyval) = *or_boolean(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 321 "../parser"
    {
            (yyval) = *and_boolean(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 328 "../parser"
    {
            (yyval) = *equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 335 "../parser"
    {
            (yyval) = *unequal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 342 "../parser"
    {
            (yyval) = *smaller(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 349 "../parser"
    {
            (yyval) = *greater(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 356 "../parser"
    {
            (yyval) = *sm_equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 363 "../parser"
    {
            (yyval) = *gr_equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 370 "../parser"
    {
            (yyval) = *addition(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 377 "../parser"
    {
            (yyval) = *band(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 384 "../parser"
    {
            (yyval) = *bor(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 391 "../parser"
    {
            (yyval) = *xor(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 398 "../parser"
    {
            (yyval) = *shl(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 405 "../parser"
    {
            (yyval) = *shr(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 412 "../parser"
    {
            (yyval) = *subtract(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 419 "../parser"
    {
            (yyval) = *multiply(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 426 "../parser"
    {
            (yyval) = *young(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 433 "../parser"
    {
            (yyval) = *old(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 440 "../parser"
    {
            (yyval) = *divide(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 447 "../parser"
    {
            (yyval) = *modulo(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 453 "../parser"
    {
            (yyval) = *negate(&(yyvsp[(2) - (2)]));
        }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 459 "../parser"
    {
            (yyval) = *incdec(pre_op, op_inc, &(yyvsp[(2) - (2)]));
        }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 465 "../parser"
    {
            (yyval) = *incdec(post_op, op_inc, &(yyvsp[(1) - (2)]));
        }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 471 "../parser"
    {
            (yyval) = *incdec(pre_op, op_dec, &(yyvsp[(2) - (2)]));
        }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 477 "../parser"
    {
            (yyval) = *incdec(post_op, op_dec, &(yyvsp[(1) - (2)]));
        }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 483 "../parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 489 "../parser"
    {
            (yyval) = *bnot(&(yyvsp[(2) - (2)]));
        }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 495 "../parser"
    {
            (yyval) = *not_boolean(&(yyvsp[(2) - (2)]));
        }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 503 "../parser"
    {
            (yyval) = *cast((yyvsp[(2) - (4)]).type, &(yyvsp[(4) - (4)]));
        }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 508 "../parser"
    {
            (yyval) = *stackframe(e_str | e_const);
        }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 513 "../parser"
    {
            (yyval) = *stackframe(e_int | e_const);
        }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 520 "../parser"
    {
            (yyval) = (yyvsp[(2) - (3)]);
        }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 529 "../parser"
    {
            (yyval) = *onearg(f_backtick, &(yyvsp[(2) - (3)]));
        }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 536 "../parser"
    {
            (yyval) = *expr_stmnt(&(yyvsp[(1) - (1)]));
        }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 545 "../parser"
    {
            (yyval) = *catcode(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 569 "../parser"
    {
            (yyval) = *for_stmnt(&(yyvsp[(3) - (11)]), &(yyvsp[(5) - (11)]), &(yyvsp[(7) - (11)]), &(yyvsp[(10) - (11)]));
        }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 579 "../parser"
    {
            close_fun(&(yyvsp[(3) - (4)]));
        }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 588 "../parser"
    { (yyvsp[(1) - (1)])=*fetchvar() ;}
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 589 "../parser"
    {
    		(yyval) = *listcount(&(yyvsp[(1) - (4)]));
    	}
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 594 "../parser"
    {
            (yyval) = *fetchvar();
        }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 602 "../parser"
    {
            (yyval) = *zeroargs((yyvsp[(1) - (2)]).type);
        }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 609 "../parser"
    {
            (yyval) = *onearg((yyvsp[(1) - (3)]).type, &(yyvsp[(3) - (3)]));
        }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 618 "../parser"
    {
            (yyval) = *twoargs((yyvsp[(1) - (5)]).type, &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]));
        }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 629 "../parser"
    {
            (yyval) = *threeargs((yyvsp[(1) - (7)]).type, &(yyvsp[(3) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(7) - (7)]));
        }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 637 "../parser"
    {
            (yyval) = *optint_string((yyvsp[(1) - (4)]).type, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]));
        }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 645 "../parser"
    {
            (yyval) = *optint_special((yyvsp[(1) - (4)]).type, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]));
        }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 652 "../parser"
    {
            (yyval) = *specials(f_printf, &(yyvsp[(3) - (3)]));
        }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 659 "../parser"
    {
            (yyval) = *exec_fprintf((yyvsp[(1) - (3)]).type, &(yyvsp[(3) - (3)]));
        }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 666 "../parser"
    {
            (yyval) = *callfun((yyvsp[(1) - (3)]).evalue, &(yyvsp[(3) - (3)]));
        }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 675 "../parser"
    {
            open_fun();
        }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 682 "../parser"
    {
            (yyval).evalue = fetchfun();
        }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 693 "../parser"
    {
            make_frame();
            outbin((yyvsp[(5) - (5)]).code, (yyvsp[(5) - (5)]).codelen);
        }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 709 "../parser"
    {
        initialization = 0;
        (yyval) = *expr_stmnt(assign(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])));    /* explicit initialization */
    }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 730 "../parser"
    {
            (yyval) = *if_stmnt(&(yyvsp[(3) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(8) - (9)]));
        }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 737 "../parser"
    {
        initialization = 1;
    }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 753 "../parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 761 "../parser"
    {
        (yyval) = *catcode(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]));        /* cat initialization code */
    }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 772 "../parser"
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
#line 788 "../parser"
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
#line 806 "../parser"
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
#line 829 "../parser"
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
#line 850 "../parser"
    {
            (yyval) = (yyvsp[(3) - (3)]);
        }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 856 "../parser"
    {
            (yyval) = *stackframe(e_int | e_const);
            (yyval).evalue = O_FILE;
        }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 864 "../parser"
    {
            nestlevel++;
        }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 871 "../parser"
    {
            yyerrok;
        }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 877 "../parser"
    {parse_error = err_older_younger; }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 879 "../parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 924 "../parser"
    {parse_error = err_openpar_expected; }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 925 "../parser"
    {parse_error = err_openbrace_expected; }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 936 "../parser"
    {
            (yyval) = *stackframe(e_int | e_const);
            (yyval).evalue = 1;
        }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 976 "../parser"
    {
            vartype = e_int;
        }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 992 "../parser"
    {
            n_params++;
        }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 998 "../parser"
    {
            pop_dead();
        }
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 1004 "../parser"
    {
            push_dead();                    /* set new dead-level */
        }
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 1014 "../parser"
    {
            (yyval) = *return_stmnt((yyvsp[(1) - (2)]).type, &(yyvsp[(2) - (2)]));
        }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 1025 "../parser"
    {parse_error = err_semicol_expected; }
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 1029 "../parser"
    {
            sem_err = 0;
        }
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 1037 "../parser"
    {
            (yyval) = *cat_stmnt(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]));
        }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 1049 "../parser"
    {
            (yyval) = (yyvsp[(1) - (2)]);
        }
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 1075 "../parser"
    {
        stringbuf = xstrcat(stringbuf, lexstring);/* catenate the new string */
    }
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 1080 "../parser"
    {
        free(stringbuf);                    /* free former string */
        stringbuf = xstrdup(lexstring);     /* duplicate initial string */
    }
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 1109 "../parser"
    {
            parse_error = err_identifier_expected;
            vartype = (yyvsp[(1) - (1)]).type;
        }
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 1119 "../parser"
    {
        (yyval) = (yyvsp[(1) - (2)]);                    /* initialization code */
    }
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 1128 "../parser"
    {
            (yyval) = *catcode(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));    /* catenate variable    */
                                        /* initialization code  */
        }
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 1138 "../parser"
    {
            (yyval) = (yyvsp[(3) - (3)]);
        }
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 1145 "../parser"
    {
            global_init = *catcode(&global_init, &(yyvsp[(1) - (1)]));
        }
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 1162 "../parser"
    {
            vartype = 0;
        }
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 1180 "../parser"
    {
            (yyval) = *while_stmnt(&(yyvsp[(3) - (7)]), &(yyvsp[(6) - (7)]));
        }
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 1197 "../parser"
    {
            (yyval) = *stackframe(0);
        }
    break;


/* Line 1792 of yacc.c  */
#line 2816 "../parser.c"
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
#line 1201 "../parser"


int yywrap(void)
{
    return 1;
}
