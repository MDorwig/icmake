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
#line 3 "parser"


#include "iccomp.h"


/* Line 371 of yacc.c  */
#line 74 "parser.c"

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
     CAPTURE = 262,
     CHDIR = 263,
     CMD_HEAD = 264,
     CMD_TAIL = 265,
     C_BASE = 266,
     C_EXT = 267,
     C_PATH = 268,
     G_BASE = 269,
     G_EXT = 270,
     G_PATH = 271,
     ELEMENT = 272,
     ELSE = 273,
     EXEC = 274,
     EXECUTE = 275,
     EXISTS = 276,
     EXIT = 277,
     FGETS = 278,
     FIELDS = 279,
     FOR = 280,
     FPRINTF = 281,
     GETENV = 282,
     GETCH = 283,
     GETPID = 284,
     GETS = 285,
     IDENTIFIER = 286,
     IF = 287,
     INT = 288,
     LIST = 289,
     MAKELIST = 290,
     M_ECHO = 291,
     NUMBER = 292,
     PRINTF = 293,
     PUTENV = 294,
     RETURN = 295,
     SIZEOFLIST = 296,
     STAT = 297,
     STRING = 298,
     STRINGTYPE = 299,
     STRLEN = 300,
     STRLWR = 301,
     STRUPR = 302,
     STRFIND = 303,
     SUBSTR = 304,
     SYSTEM = 305,
     TRIMLEFT = 306,
     TRIMRIGHT = 307,
     VOID = 308,
     WHILE = 309,
     PLUS_IS = 310,
     MOD_IS = 311,
     MUL_IS = 312,
     MINUS_IS = 313,
     DIV_IS = 314,
     SHR_IS = 315,
     SHL_IS = 316,
     XOR_IS = 317,
     OR_IS = 318,
     AND_IS = 319,
     OR = 320,
     AND = 321,
     NOT_EQUAL = 322,
     EQUAL = 323,
     YOUNGER = 324,
     OLDER = 325,
     GREATER_EQUAL = 326,
     SMALLER_EQUAL = 327,
     SHR = 328,
     SHL = 329,
     DEC = 330,
     INC = 331
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
#line 216 "parser.c"

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
#define YYLAST   848

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  87
/* YYNRULES -- Number of rules.  */
#define YYNRULES  211
/* YYNRULES -- Number of states.  */
#define YYNSTATES  348

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   331

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,     2,     2,     2,    85,    70,     2,
      97,    93,    83,    81,    94,    82,    98,    84,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    99,
      73,    55,    74,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    90,     2,    96,    69,     2,    91,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    95,    68,    92,    87,     2,     2,     2,
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
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    71,    72,    75,    76,    77,    78,    79,    80,
      88,    89
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
     219,   222,   225,   230,   232,   234,   238,   240,   244,   249,
     251,   255,   257,   260,   272,   277,   280,   281,   286,   288,
     291,   295,   301,   309,   314,   319,   323,   327,   331,   333,
     335,   337,   343,   346,   350,   353,   363,   365,   367,   369,
     372,   375,   377,   380,   384,   391,   399,   403,   404,   406,
     408,   409,   412,   414,   416,   418,   420,   422,   424,   426,
     428,   430,   432,   434,   436,   438,   440,   442,   444,   446,
     448,   450,   452,   453,   456,   457,   460,   462,   464,   466,
     467,   469,   471,   473,   475,   477,   479,   481,   483,   485,
     487,   488,   490,   491,   495,   497,   500,   501,   502,   505,
     507,   509,   510,   513,   515,   518,   520,   522,   525,   528,
     530,   532,   534,   537,   540,   543,   546,   548,   550,   552,
     554,   556,   558,   560,   562,   564,   566,   569,   573,   575,
     579,   581,   583,   585,   587,   589,   591,   594,   602,   604,
     606,   608
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     101,     0,    -1,   101,   117,    -1,   117,    -1,   102,   112,
     121,    -1,   121,    -1,    -1,     6,    -1,    33,    -1,    34,
      -1,    44,    -1,    -1,   107,    91,    -1,    -1,   109,    92,
      -1,    -1,   111,    93,    -1,    -1,   113,    94,    -1,    94,
     102,    -1,   186,    -1,    94,   121,    -1,   186,    -1,    95,
     172,   108,    -1,   162,   180,    -1,   182,   128,    -1,    18,
     171,    -1,   186,    -1,    31,    -1,   119,    -1,    -1,   122,
     123,    -1,   123,    55,   123,    -1,   123,    90,   123,    96,
      -1,   123,    58,   123,    -1,   123,    60,   123,    -1,   123,
      57,   123,    -1,   123,    56,   123,    -1,   123,    59,   123,
      -1,   123,    65,   123,    -1,   123,    64,   123,    -1,   123,
      63,   123,    -1,   123,    62,   123,    -1,   123,    61,   123,
      -1,   123,    66,   123,    -1,   123,    67,   123,    -1,   123,
      72,   123,    -1,   123,    71,   123,    -1,   123,    73,   123,
      -1,   123,    74,   123,    -1,   123,    78,   123,    -1,   123,
      77,   123,    -1,   123,    81,   123,    -1,   123,    70,   123,
      -1,   123,    68,   123,    -1,   123,    69,   123,    -1,   123,
      80,   123,    -1,   123,    79,   123,    -1,   123,    82,   123,
      -1,   123,    83,   123,    -1,   123,    75,   123,    -1,   123,
      76,   123,    -1,   123,    84,   123,    -1,   123,    85,   123,
      -1,    82,   123,    -1,    89,   123,    -1,   123,    89,    -1,
      88,   123,    -1,   123,    88,    -1,    81,   123,    -1,    87,
     123,    -1,    86,   123,    -1,    97,   105,    93,   123,    -1,
     174,    -1,    37,    -1,    97,   123,   110,    -1,   129,    -1,
      91,   123,   106,    -1,     7,    97,   123,    93,    -1,   121,
      -1,   125,    94,   124,    -1,   124,    -1,    25,   145,    -1,
     126,   151,   157,   169,   156,   169,   157,   110,   103,   171,
     165,    -1,   132,   134,   172,   108,    -1,   131,   110,    -1,
      -1,    31,   130,    98,    31,    -1,    31,    -1,   185,   151,
      -1,   150,   151,   121,    -1,   175,   151,   121,   112,   121,
      -1,   176,   151,   121,   112,   121,   112,   121,    -1,   159,
     151,   121,   115,    -1,   158,   151,   121,   114,    -1,    38,
     151,   102,    -1,    26,   151,   102,    -1,   133,   151,   155,
      -1,   142,    -1,    31,    -1,    31,    -1,   151,   161,    93,
     153,   160,    -1,   119,   186,    -1,   120,   138,   123,    -1,
      32,   145,    -1,   136,   151,   121,   110,   171,   165,   166,
     118,   165,    -1,    55,    -1,    40,    -1,    22,    -1,   177,
     178,    -1,   141,   140,    -1,   140,    -1,   143,   144,    -1,
     143,   112,   121,    -1,   143,   112,   147,   112,   121,   144,
      -1,   143,   112,   121,   112,   147,   112,   121,    -1,    35,
     151,   121,    -1,    -1,   166,    -1,    99,    -1,    -1,   148,
     149,    -1,    76,    -1,    75,    -1,     5,    -1,    41,    -1,
      21,    -1,    36,    -1,    10,    -1,     9,    -1,     3,    -1,
       4,    -1,    14,    -1,    16,    -1,    15,    -1,    39,    -1,
      27,    -1,    45,    -1,    47,    -1,    46,    -1,    51,    -1,
      52,    -1,    -1,   152,    97,    -1,    -1,   154,    95,    -1,
     102,    -1,   186,    -1,   121,    -1,    -1,   125,    -1,   186,
      -1,    19,    -1,    20,    -1,    42,    -1,     8,    -1,    50,
      -1,   141,    -1,   186,    -1,   163,    -1,    -1,   177,    -1,
      -1,   163,   112,   164,    -1,   164,    -1,   177,   119,    -1,
      -1,    -1,   139,   168,    -1,   121,    -1,   186,    -1,    -1,
     170,    99,    -1,   173,    -1,   172,   171,    -1,   186,    -1,
     116,    -1,    99,   186,    -1,   124,   169,    -1,   184,    -1,
     137,    -1,   127,    -1,   167,   169,    -1,   104,   169,    -1,
       1,   146,    -1,   174,    43,    -1,    43,    -1,    12,    -1,
      11,    -1,    13,    -1,    17,    -1,    23,    -1,    24,    -1,
      48,    -1,    49,    -1,   181,    -1,   179,   169,    -1,   179,
     112,   135,    -1,   135,    -1,     1,   146,   186,    -1,   178,
      -1,   128,    -1,    33,    -1,    44,    -1,    34,    -1,    53,
      -1,    54,   145,    -1,   183,   151,   121,   110,   103,   171,
     165,    -1,    28,    -1,    29,    -1,    30,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   110,   110,   113,   118,   125,   132,   138,   145,   147,
     149,   152,   152,   153,   153,   154,   154,   155,   155,   158,
     164,   168,   174,   178,   187,   190,   195,   201,   205,   212,
     219,   219,   229,   236,   244,   251,   258,   265,   272,   279,
     286,   293,   300,   307,   314,   321,   328,   335,   342,   349,
     356,   363,   370,   377,   384,   391,   398,   405,   412,   419,
     426,   433,   440,   447,   454,   460,   466,   472,   478,   484,
     490,   496,   502,   510,   515,   520,   527,   529,   537,   544,
     551,   558,   562,   567,   584,   594,   597,   597,   602,   609,
     615,   622,   631,   642,   650,   658,   665,   672,   679,   683,
     690,   697,   712,   715,   725,   730,   745,   754,   756,   760,
     768,   774,   779,   794,   809,   831,   856,   865,   872,   879,
     886,   886,   894,   896,   900,   902,   904,   906,   908,   910,
     912,   914,   916,   918,   920,   922,   924,   926,   928,   930,
     932,   934,   937,   937,   938,   938,   941,   943,   947,   949,
     956,   958,   962,   964,   968,   970,   972,   976,   978,   982,
     983,   987,   989,   995,   999,  1003,  1011,  1017,  1025,  1033,
    1035,  1038,  1038,  1041,  1048,  1054,  1058,  1060,  1066,  1069,
    1071,  1073,  1075,  1078,  1081,  1086,  1092,  1101,  1103,  1105,
    1107,  1109,  1111,  1113,  1117,  1121,  1130,  1138,  1146,  1148,
    1157,  1162,  1166,  1168,  1170,  1174,  1181,  1186,  1202,  1204,
    1206,  1210
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ARG_HEAD", "ARG_TAIL", "ASCII", "BREAK",
  "CAPTURE", "CHDIR", "CMD_HEAD", "CMD_TAIL", "C_BASE", "C_EXT", "C_PATH",
  "G_BASE", "G_EXT", "G_PATH", "ELEMENT", "ELSE", "EXEC", "EXECUTE",
  "EXISTS", "EXIT", "FGETS", "FIELDS", "FOR", "FPRINTF", "GETENV", "GETCH",
  "GETPID", "GETS", "IDENTIFIER", "IF", "INT", "LIST", "MAKELIST",
  "M_ECHO", "NUMBER", "PRINTF", "PUTENV", "RETURN", "SIZEOFLIST", "STAT",
  "STRING", "STRINGTYPE", "STRLEN", "STRLWR", "STRUPR", "STRFIND",
  "SUBSTR", "SYSTEM", "TRIMLEFT", "TRIMRIGHT", "VOID", "WHILE", "'='",
  "PLUS_IS", "MOD_IS", "MUL_IS", "MINUS_IS", "DIV_IS", "SHR_IS", "SHL_IS",
  "XOR_IS", "OR_IS", "AND_IS", "OR", "AND", "'|'", "'^'", "'&'",
  "NOT_EQUAL", "EQUAL", "'<'", "'>'", "YOUNGER", "OLDER", "GREATER_EQUAL",
  "SMALLER_EQUAL", "SHR", "SHL", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'",
  "'~'", "DEC", "INC", "'['", "'`'", "'}'", "')'", "','", "'{'", "']'",
  "'('", "'.'", "';'", "$accept", "input", "args", "break_ok",
  "break_stat", "casttype", "backtick", "$@1", "closebrace", "$@2",
  "closepar", "$@3", "comma", "$@4", "comma_arglist", "comma_expr",
  "compound", "def_var_or_fun", "else_tail", "enterid", "entervarid",
  "err_expression", "$@5", "expression", "expr_code", "expr_list", "for",
  "for_stat", "funcdef", "func_or_var", "$@6", "function", "funid",
  "funname", "funvars", "idexpr", "if", "if_stat", "initassign",
  "leave_key", "local_list", "locals", "makelist", "makelist_expr",
  "makelist_normal", "nesting", "ok", "older_younger", "$@7", "old_young",
  "one_arg_funs", "openpar", "$@8", "openbrace", "$@9", "opt_arglist",
  "opt_expression", "opt_expr_list", "optint_special", "optint_string",
  "opt_locals", "opt_parlist", "opt_vartype", "pars", "partype", "popdead",
  "pushdead", "return_stat", "return_tail", "semicol", "$@10", "statement",
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
     305,   306,   307,   308,   309,    61,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   124,    94,
      38,   322,   323,    60,    62,   324,   325,   326,   327,   328,
     329,    43,    45,    42,    47,    37,    33,   126,   330,   331,
      91,    96,   125,    41,    44,   123,    93,    40,    46,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   102,   102,   103,   104,   105,   105,
     105,   107,   106,   109,   108,   111,   110,   113,   112,   114,
     114,   115,   115,   116,   117,   117,   118,   118,   119,   120,
     122,   121,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   124,
     125,   125,   126,   127,   128,   129,   130,   129,   129,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   132,
     133,   134,   135,   135,   136,   137,   138,   139,   139,   140,
     141,   141,   142,   142,   142,   142,   143,   144,   145,   146,
     148,   147,   149,   149,   150,   150,   150,   150,   150,   150,
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
       3,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     1,     1,     3,     1,     3,     4,     1,
       3,     1,     2,    11,     4,     2,     0,     4,     1,     2,
       3,     5,     7,     4,     4,     3,     3,     3,     1,     1,
       1,     5,     2,     3,     2,     9,     1,     1,     1,     2,
       2,     1,     2,     3,     6,     7,     3,     0,     1,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
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
     200,    17,    24,    99,    25,   119,   211,   102,   106,     0,
     211,   160,     0,     0,     0,   196,     0,   199,   130,   131,
     124,     0,   155,   129,   128,   188,   187,   189,   132,   134,
     133,   190,   152,   153,   126,   191,   192,   142,   136,   208,
     209,   210,    88,   142,   127,    74,   142,   135,   125,   154,
     186,   137,   139,   138,   193,   194,   156,   140,   141,     0,
       0,     0,     0,     0,     0,     0,     0,   103,    76,    15,
     142,    98,    17,   142,   142,   142,    73,   142,   142,   142,
       0,   175,     0,    17,   164,     0,   143,    28,   197,    18,
     172,     0,    30,     0,    30,    30,    69,    64,    71,    70,
      67,    65,    11,     8,     9,    10,     0,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
      66,     0,    85,     0,    30,    30,   112,    30,    30,    30,
     185,    30,    30,    89,     0,     7,   108,   167,   167,   107,
     167,   211,   211,   171,    84,     0,   176,    79,     0,   171,
     142,   181,   142,   180,    30,   171,   174,   173,   142,   179,
     144,     0,   165,     0,    17,     5,     0,   116,    17,    77,
       0,     0,    75,    32,    37,    36,    34,    38,    35,    43,
      42,    41,    40,    39,    44,    45,    54,    55,    53,    47,
      46,    48,    49,    60,    61,    51,    50,    57,    56,    52,
      58,    59,    62,    63,     0,    16,    17,    97,   147,    17,
      17,     0,    90,   211,   211,    17,    17,   184,    82,   118,
     104,   206,     0,   177,   183,    14,    31,   178,    30,    30,
     169,   168,   170,   182,    30,   211,     0,   163,    78,    30,
      87,    12,    72,    33,   120,    30,   123,   122,   121,    30,
      94,    20,    30,    93,    22,    30,    30,    23,    81,   150,
     171,   151,    15,    15,   111,   157,   101,     0,   158,   145,
       4,    17,   117,    17,    21,    91,    17,    30,    30,     0,
       6,   110,   109,    30,   114,    30,    80,   148,   171,   166,
       0,   115,    92,    30,   167,   166,    15,   211,   207,     6,
       0,   166,    27,     0,    26,   105,   166,    83
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   204,   330,   183,   126,   209,   210,   184,   185,
     162,   163,   279,    34,   290,   293,   186,     6,   341,    15,
      16,   187,   188,    87,   189,   299,   190,   191,    17,    88,
     113,    89,    18,    90,    30,    19,   192,   193,    29,   194,
     304,   305,    91,    92,   166,   258,    26,   250,   251,   288,
      93,    31,    32,   275,   276,   247,   328,   300,    94,    95,
     306,   102,     7,   103,   104,   334,   259,   195,   271,    35,
      36,   196,   100,   197,    96,    97,    98,     8,    20,    21,
      22,     9,    10,   198,   199,    99,   101
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -315
static const yytype_int16 yypact[] =
{
     -18,  -315,  -315,  -315,  -315,    34,  -315,     7,  -315,  -315,
     -17,  -315,  -315,   -74,   -54,    -1,     2,  -315,  -315,  -315,
    -315,   -35,  -315,  -315,  -315,  -315,  -315,  -315,  -315,   676,
    -315,   -16,   -32,    45,   -14,  -315,   -13,  -315,  -315,  -315,
    -315,    22,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,   -68,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,   676,
     676,   676,   676,   676,   676,   676,   585,   758,  -315,  -315,
    -315,  -315,   -11,  -315,  -315,  -315,    41,  -315,  -315,  -315,
     391,  -315,    27,    32,  -315,    45,  -315,  -315,  -315,  -315,
    -315,   676,  -315,    28,  -315,  -315,   -66,   -66,   -66,   -66,
     -66,   -66,   758,  -315,  -315,  -315,    35,   758,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,  -315,
    -315,   676,  -315,    50,    51,   -39,  -315,  -315,  -315,  -315,
    -315,  -315,  -315,  -315,   -74,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,    56,  -315,  -315,   676,  -315,
    -315,  -315,  -315,  -315,    52,  -315,  -315,  -315,  -315,  -315,
    -315,   -16,  -315,   719,    68,  -315,    96,  -315,    76,  -315,
      59,   676,  -315,   758,   758,   758,   758,   758,   758,   758,
     758,   758,   758,   758,   122,   292,   377,   473,   567,    57,
      57,    74,    74,    74,    74,    74,    74,   138,   138,   -38,
     -38,   -66,   -66,   -66,    33,  -315,    78,  -315,  -315,    80,
    -315,   -27,  -315,    81,    83,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,   391,  -315,  -315,  -315,   758,  -315,    52,  -315,
    -315,  -315,  -315,  -315,  -315,   -16,    86,  -315,  -315,  -315,
    -315,  -315,   -66,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,    88,
    -315,  -315,  -315,  -315,  -315,   -16,  -315,     9,  -315,  -315,
    -315,  -315,  -315,    95,  -315,  -315,  -315,  -315,   109,   488,
    -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
     488,  -315,  -315,    51,  -315,  -315,  -315,   195,  -315,  -315,
     488,  -315,  -315,   488,  -315,  -315,  -315,  -315
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -315,  -315,  -111,  -124,  -315,  -315,  -315,  -315,   -45,  -315,
    -118,  -315,   -20,  -315,  -315,  -315,  -315,   219,  -315,   120,
    -315,  -109,  -315,   198,  -256,  -315,  -315,  -315,   221,  -315,
    -315,  -315,  -315,  -315,  -315,   199,  -315,  -315,  -315,  -315,
     -72,  -315,  -315,  -315,   -78,   -99,    63,   -44,  -315,  -315,
    -315,   -24,  -315,  -315,  -315,  -315,  -315,   -92,  -315,  -315,
    -315,  -315,  -315,  -315,    42,  -314,   -90,  -315,  -315,  -176,
    -315,  -299,    61,  -315,  -315,  -315,  -315,   -29,   -62,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,   -15
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -212
static const yytype_int16 yytable[] =
{
      27,    33,   105,   205,   208,   207,   205,   264,    13,   212,
      13,    37,   298,   267,    23,     1,     2,     1,     2,   273,
     329,   338,   159,   160,   161,    25,     3,   345,     3,  -100,
     -86,   335,   347,   112,    11,     4,  -120,  -120,    14,   114,
     107,   344,   115,   -99,   346,   156,   157,   158,   286,   287,
     159,   160,   161,   246,   -29,   205,   249,    28,   252,   253,
     254,   326,   255,   256,  -171,   106,   164,     1,     2,   167,
     168,   169,   165,   171,   172,   173,   107,   298,     3,   260,
     109,   261,  -117,   201,   170,   270,   110,     4,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   111,
     200,   159,   160,   161,   318,  -159,   206,   280,   211,   283,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   245,  -211,   159,   160,   161,   265,   248,
     281,  -211,   333,   152,   153,   154,   155,   156,   157,   158,
     302,   -96,   159,   160,   161,   303,   268,   263,   269,   -95,
     310,  -146,   105,  -113,   274,   289,   312,   292,   313,   272,
     205,   309,   317,   314,   319,   320,   315,   316,   -19,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,  -149,   327,
     159,   160,   161,   340,   331,   343,   332,   297,   339,   154,
     155,   156,   157,   158,    12,   202,   159,   160,   161,   284,
     285,    24,   108,   321,   324,   295,   296,   257,   291,   294,
     311,   336,   262,   277,   337,   322,   307,     0,     0,     0,
       0,     0,     0,   301,     0,     0,     0,     0,     0,     0,
     308,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   307,   116,   117,   118,
     119,   120,   121,   122,   127,     0,     0,     0,     0,     0,
       0,   323,     0,     0,     0,     0,   325,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
       0,     0,     0,     0,     0,     0,     0,     0,   301,     0,
       0,     0,   342,     0,     0,     0,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,     0,     0,   244,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,     0,     0,
     159,   160,   161,     0,     0,     0,   266,     0,     0,     0,
       0,     0,   174,     0,   -30,   -30,   -30,   175,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   282,
     -30,   -30,   -30,   176,   -30,   -30,   177,   -30,   -30,   -30,
     -30,   -30,   -30,   178,     0,     0,   -30,   -30,   -30,   -30,
     -30,   179,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,     0,   180,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,     0,     0,   159,   160,   161,     0,     0,
       0,     0,   -30,   -30,     0,     0,     0,   -30,   -30,   -30,
     -30,     0,   -30,   -13,     0,     0,   181,     0,   -30,   174,
     182,   -30,   -30,   -30,   175,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,
     176,   -30,   -30,   177,   -30,   -30,   -30,   -30,   -30,   -30,
     178,     0,     0,   -30,   -30,   -30,   -30,   -30,   179,   -30,
     -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,     0,   180,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,     0,
       0,   159,   160,   161,     0,     0,     0,     0,     0,   -30,
     -30,     0,     0,     0,   -30,   -30,   -30,   -30,     0,   -30,
       0,     0,     0,   181,     0,   -30,     0,   182,    38,    39,
      40,     0,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,    52,    53,    54,     0,    55,    56,
       0,    57,    58,    59,    60,    61,    62,     0,   123,   124,
      63,    64,    65,    66,    67,     0,    68,    69,    70,   125,
      71,    72,    73,    74,    75,    76,    77,    78,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,     0,     0,   159,   160,   161,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,     0,     0,
       0,    81,    82,    83,    84,     0,    85,     0,     0,    38,
      39,    40,    86,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,     0,    52,    53,    54,     0,    55,
      56,     0,    57,    58,    59,    60,    61,    62,     0,     0,
       0,    63,    64,    65,    66,    67,     0,    68,    69,    70,
       0,    71,    72,    73,    74,    75,    76,    77,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,    80,     0,
       0,     0,    81,    82,    83,    84,     0,    85,     0,     0,
       0,     0,     0,    86,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,     0,     0,   159,   160,   161,
       0,     0,   278,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,     0,     0,   159,   160,   161
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-315)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      15,    21,    31,   112,   115,   114,   115,   183,     1,   127,
       1,    26,   268,   189,    31,    33,    34,    33,    34,   195,
     319,   335,    88,    89,    90,    99,    44,   341,    44,    97,
      98,   330,   346,    57,     0,    53,    75,    76,    31,    63,
      31,   340,    66,    97,   343,    83,    84,    85,    75,    76,
      88,    89,    90,   164,    55,   164,   165,    55,   167,   168,
     169,   317,   171,   172,    99,    97,    90,    33,    34,    93,
      94,    95,    92,    97,    98,    99,    31,   333,    44,   178,
      94,   180,    93,   103,    43,   194,    99,    53,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    97,
      93,    88,    89,    90,   300,    93,    98,    31,    93,    96,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    93,    93,    88,    89,    90,    92,   164,
      91,    99,   328,    79,    80,    81,    82,    83,    84,    85,
     269,    93,    88,    89,    90,   274,   190,   182,   192,    93,
     279,    93,   201,    93,   198,    94,   285,    94,   289,   194,
     289,    95,    94,   292,   302,   303,   295,   296,    93,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    99,   318,
      88,    89,    90,    18,   323,   339,   325,   262,   336,    81,
      82,    83,    84,    85,     5,   105,    88,    89,    90,   249,
     250,    10,    33,   305,   312,   255,   256,   174,   253,   254,
     284,   333,   181,   201,   334,   307,   275,    -1,    -1,    -1,
      -1,    -1,    -1,   268,    -1,    -1,    -1,    -1,    -1,    -1,
     275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   305,    79,    80,    81,
      82,    83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,   311,    -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   333,    -1,
      -1,    -1,   337,    -1,    -1,    -1,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,    -1,    -1,   161,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      88,    89,    90,    -1,    -1,    -1,   188,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,   211,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    54,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    88,    89,    90,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,    88,
      89,    -1,    91,    92,    -1,    -1,    95,    -1,    97,     1,
      99,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    54,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    -1,
      -1,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    86,    87,    88,    89,    -1,    91,
      -1,    -1,    -1,    95,    -1,    97,    -1,    99,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    -1,    23,    24,
      -1,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    86,    87,    88,    89,    -1,    91,    -1,    -1,     3,
       4,     5,    97,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    -1,    23,
      24,    -1,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    86,    87,    88,    89,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    97,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    -1,    -1,    88,    89,    90,
      -1,    -1,    93,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    -1,    -1,    88,    89,    90
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    33,    34,    44,    53,   101,   117,   162,   177,   181,
     182,     0,   117,     1,    31,   119,   120,   128,   132,   135,
     178,   179,   180,    31,   128,    99,   146,   186,    55,   138,
     134,   151,   152,   112,   113,   169,   170,   186,     3,     4,
       5,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    19,    20,    21,    23,    24,    26,    27,    28,
      29,    30,    31,    35,    36,    37,    38,    39,    41,    42,
      43,    45,    46,    47,    48,    49,    50,    51,    52,    81,
      82,    86,    87,    88,    89,    91,    97,   123,   129,   131,
     133,   142,   143,   150,   158,   159,   174,   175,   176,   185,
     172,   186,   161,   163,   164,   177,    97,    31,   135,    94,
      99,    97,   151,   130,   151,   151,   123,   123,   123,   123,
     123,   123,   123,    33,    34,    44,   105,   123,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    88,
      89,    90,   110,   111,   151,   112,   144,   151,   151,   151,
      43,   151,   151,   151,     1,     6,    22,    25,    32,    40,
      54,    95,    99,   104,   108,   109,   116,   121,   122,   124,
     126,   127,   136,   137,   139,   167,   171,   173,   183,   184,
      93,   112,   119,   123,   102,   121,    98,   121,   102,   106,
     107,    93,   110,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,    93,   102,   155,   186,   121,
     147,   148,   121,   121,   121,   121,   121,   146,   145,   166,
     145,   145,   172,   186,   169,    92,   123,   169,   151,   151,
     121,   168,   186,   169,   151,   153,   154,   164,    93,   112,
      31,    91,   123,    96,   112,   112,    75,    76,   149,    94,
     114,   186,    94,   115,   186,   112,   112,   108,   124,   125,
     157,   186,   121,   121,   140,   141,   160,   177,   186,    95,
     121,   147,   121,   102,   121,   121,   121,    94,   169,   110,
     110,   140,   178,   112,   144,   112,   124,   121,   156,   171,
     103,   121,   121,   169,   165,   171,   157,   166,   165,   110,
      18,   118,   186,   103,   171,   165,   171,   165
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
#line 121 "parser"
    {
            (yyval) = *multargs(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 126 "parser"
    {
            (yyval) = *firstarg(&(yyvsp[(1) - (1)]));
        }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 132 "parser"
    {
            break_ok++;
        }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 139 "parser"
    {
            (yyval) = *break_stmnt();
        }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 152 "parser"
    {parse_error = err_backtick_expected; }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 153 "parser"
    {parse_error = err_closebrace_expected; }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 154 "parser"
    {parse_error = err_closepar_expected; }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 155 "parser"
    {parse_error = err_comma_expected; }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 160 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 170 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 181 "parser"
    {
            (yyval) = (yyvsp[(2) - (3)]);
        }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 197 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 206 "parser"
    {
            entervar();
        }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 213 "parser"
    {
        (yyval) = *fetchvar();
    }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 219 "parser"
    {
            parse_error = err_in_expression;
        }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 223 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 232 "parser"
    {
            (yyval) = *assign(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 240 "parser"
    {
            (yyval) = *indexOp(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]));
        }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 247 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), multiply, "*=");
        }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 254 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), divide, "/=");
        }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 261 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), modulo, "%=");
        }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 268 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), addition, "+=");
        }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 275 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), subtract, "-=");
        }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 282 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), band, "&=");
        }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 289 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), bor, "|=");
        }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 296 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), xor, "^=");
        }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 303 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), shl, "<<=");
        }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 310 "parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), shr, ">>=");
        }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 317 "parser"
    {
            (yyval) = *or_boolean(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 324 "parser"
    {
            (yyval) = *and_boolean(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 331 "parser"
    {
            (yyval) = *equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 338 "parser"
    {
            (yyval) = *unequal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 345 "parser"
    {
            (yyval) = *smaller(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 352 "parser"
    {
            (yyval) = *greater(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 359 "parser"
    {
            (yyval) = *sm_equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 366 "parser"
    {
            (yyval) = *gr_equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 373 "parser"
    {
            (yyval) = *addition(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 380 "parser"
    {
            (yyval) = *band(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 387 "parser"
    {
            (yyval) = *bor(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 394 "parser"
    {
            (yyval) = *xor(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 401 "parser"
    {
            (yyval) = *shl(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 408 "parser"
    {
            (yyval) = *shr(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 415 "parser"
    {
            (yyval) = *subtract(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 422 "parser"
    {
            (yyval) = *multiply(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 429 "parser"
    {
            (yyval) = *young(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 436 "parser"
    {
            (yyval) = *old(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 443 "parser"
    {
            (yyval) = *divide(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 450 "parser"
    {
            (yyval) = *modulo(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 456 "parser"
    {
            (yyval) = *negate(&(yyvsp[(2) - (2)]));
        }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 462 "parser"
    {
            (yyval) = *incdec(pre_op, op_inc, &(yyvsp[(2) - (2)]));
        }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 468 "parser"
    {
            (yyval) = *incdec(post_op, op_inc, &(yyvsp[(1) - (2)]));
        }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 474 "parser"
    {
            (yyval) = *incdec(pre_op, op_dec, &(yyvsp[(2) - (2)]));
        }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 480 "parser"
    {
            (yyval) = *incdec(post_op, op_dec, &(yyvsp[(1) - (2)]));
        }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 486 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 492 "parser"
    {
            (yyval) = *bnot(&(yyvsp[(2) - (2)]));
        }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 498 "parser"
    {
            (yyval) = *not_boolean(&(yyvsp[(2) - (2)]));
        }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 506 "parser"
    {
            (yyval) = *cast((yyvsp[(2) - (4)]).type, &(yyvsp[(4) - (4)]));
        }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 511 "parser"
    {
            (yyval) = *stackframe(e_str | e_const);
        }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 516 "parser"
    {
            (yyval) = *stackframe(e_int | e_const);
        }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 523 "parser"
    {
            (yyval) = (yyvsp[(2) - (3)]);
        }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 532 "parser"
    {
            (yyval) = *onearg(f_backtick, &(yyvsp[(2) - (3)]));
        }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 538 "parser"
    {
     		(yyval) = *onearg(f_backtick, &(yyvsp[(3) - (4)]));	
     	}
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 545 "parser"
    {
            (yyval) = *expr_stmnt(&(yyvsp[(1) - (1)]));
        }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 554 "parser"
    {
            (yyval) = *catcode(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 578 "parser"
    {
            (yyval) = *for_stmnt(&(yyvsp[(3) - (11)]), &(yyvsp[(5) - (11)]), &(yyvsp[(7) - (11)]), &(yyvsp[(10) - (11)]));
        }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 588 "parser"
    {
            close_fun(&(yyvsp[(3) - (4)]));
        }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 597 "parser"
    { (yyvsp[(1) - (1)])=*fetchvar(); }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 598 "parser"
    {
    		(yyval) = *listcount(&(yyvsp[(1) - (4)]));
    	}
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 603 "parser"
    {
            (yyval) = *fetchvar();
        }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 611 "parser"
    {
            (yyval) = *zeroargs((yyvsp[(1) - (2)]).type);
        }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 618 "parser"
    {
            (yyval) = *onearg((yyvsp[(1) - (3)]).type, &(yyvsp[(3) - (3)]));
        }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 627 "parser"
    {
            (yyval) = *twoargs((yyvsp[(1) - (5)]).type, &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]));
        }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 638 "parser"
    {
            (yyval) = *threeargs((yyvsp[(1) - (7)]).type, &(yyvsp[(3) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(7) - (7)]));
        }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 646 "parser"
    {
            (yyval) = *optint_string((yyvsp[(1) - (4)]).type, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]));
        }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 654 "parser"
    {
            (yyval) = *optint_special((yyvsp[(1) - (4)]).type, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]));
        }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 661 "parser"
    {
            (yyval) = *specials(f_printf, &(yyvsp[(3) - (3)]));
        }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 668 "parser"
    {
            (yyval) = *exec_fprintf((yyvsp[(1) - (3)]).type, &(yyvsp[(3) - (3)]));
        }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 675 "parser"
    {
            (yyval) = *callfun((yyvsp[(1) - (3)]).evalue, &(yyvsp[(3) - (3)]));
        }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 684 "parser"
    {
            open_fun();
        }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 691 "parser"
    {
            (yyval).evalue = fetchfun();
        }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 702 "parser"
    {
            make_frame();
            outbin((yyvsp[(5) - (5)]).code, (yyvsp[(5) - (5)]).codelen);
        }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 718 "parser"
    {
        initialization = 0;
        (yyval) = *expr_stmnt(assign(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])));    /* explicit initialization */
    }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 739 "parser"
    {
            (yyval) = *if_stmnt(&(yyvsp[(3) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(8) - (9)]));
        }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 746 "parser"
    {
        initialization = 1;
    }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 762 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 770 "parser"
    {
        (yyval) = *catcode(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]));        /* cat initialization code */
    }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 781 "parser"
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

  case 113:
/* Line 1792 of yacc.c  */
#line 797 "parser"
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

  case 114:
/* Line 1792 of yacc.c  */
#line 815 "parser"
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

  case 115:
/* Line 1792 of yacc.c  */
#line 838 "parser"
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

  case 116:
/* Line 1792 of yacc.c  */
#line 859 "parser"
    {
            (yyval) = (yyvsp[(3) - (3)]);
        }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 865 "parser"
    {
            (yyval) = *stackframe(e_int | e_const);
            (yyval).evalue = O_FILE;
        }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 873 "parser"
    {
            nestlevel++;
        }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 880 "parser"
    {
            yyerrok;
        }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 886 "parser"
    {parse_error = err_older_younger; }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 888 "parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 937 "parser"
    {parse_error = err_openpar_expected; }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 938 "parser"
    {parse_error = err_openbrace_expected; }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 949 "parser"
    {
            (yyval) = *stackframe(e_int | e_const);
            (yyval).evalue = 1;
        }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 989 "parser"
    {
            vartype = e_int;
        }
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 1005 "parser"
    {
            n_params++;
        }
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 1011 "parser"
    {
            pop_dead();
        }
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 1017 "parser"
    {
            push_dead();                    /* set new dead-level */
        }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 1027 "parser"
    {
            (yyval) = *return_stmnt((yyvsp[(1) - (2)]).type, &(yyvsp[(2) - (2)]));
        }
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 1038 "parser"
    {parse_error = err_semicol_expected; }
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 1042 "parser"
    {
            sem_err = 0;
        }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 1050 "parser"
    {
            (yyval) = *cat_stmnt(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]));
        }
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 1062 "parser"
    {
            (yyval) = (yyvsp[(1) - (2)]);
        }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 1088 "parser"
    {
        stringbuf = xstrcat(stringbuf, lexstring);/* catenate the new string */
    }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 1093 "parser"
    {
        free(stringbuf);                    /* free former string */
        stringbuf = xstrdup(lexstring);     /* duplicate initial string */
    }
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 1122 "parser"
    {
            parse_error = err_identifier_expected;
            vartype = (yyvsp[(1) - (1)]).type;
        }
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 1132 "parser"
    {
        (yyval) = (yyvsp[(1) - (2)]);                    /* initialization code */
    }
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 1141 "parser"
    {
            (yyval) = *catcode(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));    /* catenate variable    */
                                        /* initialization code  */
        }
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 1151 "parser"
    {
            (yyval) = (yyvsp[(3) - (3)]);
        }
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 1158 "parser"
    {
            global_init = *catcode(&global_init, &(yyvsp[(1) - (1)]));
        }
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 1175 "parser"
    {
            vartype = 0;
        }
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 1193 "parser"
    {
            (yyval) = *while_stmnt(&(yyvsp[(3) - (7)]), &(yyvsp[(6) - (7)]));
        }
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 1210 "parser"
    {
            (yyval) = *stackframe(0);
        }
    break;


/* Line 1792 of yacc.c  */
#line 2838 "parser.c"
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
#line 1214 "parser"


int yywrap(void)
{
    return 1;
}
