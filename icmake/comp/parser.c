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
     M_GETECHO = 291,
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
     STRFORMAT = 304,
     SUBSTR = 305,
     SYSTEM = 306,
     TRIM = 307,
     TRIMLEFT = 308,
     TRIMRIGHT = 309,
     VOID = 310,
     WHILE = 311,
     PLUS_IS = 312,
     MOD_IS = 313,
     MUL_IS = 314,
     MINUS_IS = 315,
     DIV_IS = 316,
     SHR_IS = 317,
     SHL_IS = 318,
     XOR_IS = 319,
     OR_IS = 320,
     AND_IS = 321,
     OR = 322,
     AND = 323,
     NOT_EQUAL = 324,
     EQUAL = 325,
     YOUNGER = 326,
     OLDER = 327,
     GREATER_EQUAL = 328,
     SMALLER_EQUAL = 329,
     SHR = 330,
     SHL = 331,
     DEC = 332,
     INC = 333
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
#line 218 "../parser.c"

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
#define YYLAST   874

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  102
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  86
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNRULES -- Number of states.  */
#define YYNSTATES  353

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   333

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    88,     2,     2,     2,    87,    72,     2,
     100,    96,    85,    83,    97,    84,    93,    86,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   101,
      75,    57,    76,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    92,     2,    99,    71,     2,    94,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    98,    70,    95,    89,     2,     2,     2,
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
      55,    56,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    73,    74,    77,    78,    79,    80,
      81,    82,    90,    91
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
     220,   223,   226,   229,   234,   236,   238,   242,   247,   251,
     253,   257,   259,   263,   265,   268,   280,   285,   288,   290,
     293,   297,   303,   311,   316,   321,   325,   329,   333,   337,
     339,   341,   343,   349,   352,   356,   359,   369,   371,   373,
     375,   378,   381,   383,   386,   390,   397,   405,   409,   410,
     412,   414,   415,   418,   420,   422,   424,   426,   428,   430,
     432,   434,   436,   438,   440,   442,   444,   446,   448,   450,
     452,   454,   456,   458,   459,   462,   463,   466,   468,   470,
     472,   473,   475,   477,   479,   481,   483,   485,   487,   489,
     491,   493,   494,   496,   497,   501,   503,   506,   507,   508,
     511,   513,   515,   516,   519,   521,   524,   526,   528,   531,
     534,   536,   538,   540,   543,   546,   549,   552,   554,   556,
     558,   560,   562,   564,   566,   568,   570,   572,   575,   579,
     581,   585,   587,   589,   591,   593,   595,   597,   600,   608,
     610,   612,   614
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     103,     0,    -1,   103,   119,    -1,   119,    -1,   104,   114,
     123,    -1,   123,    -1,    -1,     6,    -1,    32,    -1,    33,
      -1,    44,    -1,    -1,   109,    94,    -1,    -1,   111,    95,
      -1,    -1,   113,    96,    -1,    -1,   115,    97,    -1,    97,
     104,    -1,   187,    -1,    97,   123,    -1,   187,    -1,    98,
     173,   110,    -1,   163,   181,    -1,   183,   130,    -1,    17,
     172,    -1,   187,    -1,    30,    -1,   121,    -1,    -1,   124,
     125,    -1,   125,    57,   125,    -1,   125,    92,   125,    99,
      -1,   125,    93,    30,    -1,   125,    60,   125,    -1,   125,
      62,   125,    -1,   125,    59,   125,    -1,   125,    58,   125,
      -1,   125,    61,   125,    -1,   125,    67,   125,    -1,   125,
      66,   125,    -1,   125,    65,   125,    -1,   125,    64,   125,
      -1,   125,    63,   125,    -1,   125,    68,   125,    -1,   125,
      69,   125,    -1,   125,    74,   125,    -1,   125,    73,   125,
      -1,   125,    75,   125,    -1,   125,    76,   125,    -1,   125,
      80,   125,    -1,   125,    79,   125,    -1,   125,    83,   125,
      -1,   125,    72,   125,    -1,   125,    70,   125,    -1,   125,
      71,   125,    -1,   125,    82,   125,    -1,   125,    81,   125,
      -1,   125,    84,   125,    -1,   125,    85,   125,    -1,   125,
      77,   125,    -1,   125,    78,   125,    -1,   125,    86,   125,
      -1,   125,    87,   125,    -1,    84,   125,    -1,    91,   125,
      -1,   125,    91,    -1,    90,   125,    -1,   125,    90,    -1,
      83,   125,    -1,    89,   125,    -1,    88,   125,    -1,   100,
     107,    96,   125,    -1,   175,    -1,    37,    -1,   100,   125,
     112,    -1,    35,   152,   125,   112,    -1,    36,   152,   112,
      -1,   131,    -1,    94,   125,   108,    -1,   123,    -1,   127,
      97,   126,    -1,   126,    -1,    24,   146,    -1,   128,   152,
     158,   170,   157,   170,   158,   112,   105,   172,   166,    -1,
     133,   135,   173,   110,    -1,   132,   112,    -1,    30,    -1,
     186,   152,    -1,   151,   152,   123,    -1,   176,   152,   123,
     114,   123,    -1,   177,   152,   123,   114,   123,   114,   123,
      -1,   160,   152,   123,   117,    -1,   159,   152,   123,   116,
      -1,    38,   152,   104,    -1,    25,   152,   104,    -1,    49,
     152,   104,    -1,   134,   152,   156,    -1,   143,    -1,    30,
      -1,    30,    -1,   152,   162,    96,   154,   161,    -1,   121,
     187,    -1,   122,   139,   125,    -1,    31,   146,    -1,   137,
     152,   123,   112,   172,   166,   167,   120,   166,    -1,    57,
      -1,    40,    -1,    21,    -1,   178,   179,    -1,   142,   141,
      -1,   141,    -1,   144,   145,    -1,   144,   114,   123,    -1,
     144,   114,   148,   114,   123,   145,    -1,   144,   114,   123,
     114,   148,   114,   123,    -1,    34,   152,   123,    -1,    -1,
     167,    -1,   101,    -1,    -1,   149,   150,    -1,    78,    -1,
      77,    -1,     5,    -1,    41,    -1,    20,    -1,     9,    -1,
       8,    -1,     3,    -1,     4,    -1,    13,    -1,    15,    -1,
      14,    -1,    39,    -1,    26,    -1,    45,    -1,    47,    -1,
      46,    -1,    52,    -1,    53,    -1,    54,    -1,    -1,   153,
     100,    -1,    -1,   155,    98,    -1,   104,    -1,   187,    -1,
     123,    -1,    -1,   127,    -1,   187,    -1,    18,    -1,    19,
      -1,    42,    -1,     7,    -1,    51,    -1,   142,    -1,   187,
      -1,   164,    -1,    -1,   178,    -1,    -1,   164,   114,   165,
      -1,   165,    -1,   178,   121,    -1,    -1,    -1,   140,   169,
      -1,   123,    -1,   187,    -1,    -1,   171,   101,    -1,   174,
      -1,   173,   172,    -1,   187,    -1,   118,    -1,   101,   187,
      -1,   126,   170,    -1,   185,    -1,   138,    -1,   129,    -1,
     168,   170,    -1,   106,   170,    -1,     1,   147,    -1,   175,
      43,    -1,    43,    -1,    11,    -1,    10,    -1,    12,    -1,
      16,    -1,    22,    -1,    23,    -1,    48,    -1,    50,    -1,
     182,    -1,   180,   170,    -1,   180,   114,   136,    -1,   136,
      -1,     1,   147,   187,    -1,   179,    -1,   130,    -1,    32,
      -1,    44,    -1,    33,    -1,    55,    -1,    56,   146,    -1,
     184,   152,   123,   112,   105,   172,   166,    -1,    27,    -1,
      28,    -1,    29,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   114,   114,   117,   122,   129,   136,   142,   149,   151,
     153,   156,   156,   157,   157,   158,   158,   159,   159,   162,
     168,   172,   178,   182,   191,   194,   199,   205,   209,   216,
     223,   223,   233,   240,   248,   255,   262,   269,   276,   283,
     290,   297,   304,   311,   318,   325,   332,   339,   346,   353,
     360,   367,   374,   381,   388,   395,   402,   409,   416,   423,
     430,   437,   444,   451,   458,   465,   471,   477,   483,   489,
     495,   501,   507,   513,   521,   526,   531,   538,   546,   553,
     555,   564,   571,   578,   582,   587,   604,   614,   617,   624,
     630,   637,   646,   657,   665,   673,   680,   687,   694,   701,
     705,   712,   719,   734,   737,   747,   752,   767,   776,   778,
     782,   790,   796,   801,   816,   831,   853,   878,   887,   894,
     901,   908,   908,   916,   918,   922,   924,   926,   928,   930,
     932,   934,   936,   938,   940,   942,   944,   946,   948,   950,
     952,   954,   956,   959,   959,   960,   960,   963,   965,   969,
     971,   978,   980,   984,   986,   990,   992,   994,   998,  1000,
    1004,  1005,  1009,  1011,  1017,  1021,  1025,  1033,  1039,  1047,
    1055,  1057,  1060,  1060,  1063,  1070,  1076,  1080,  1082,  1088,
    1091,  1093,  1095,  1097,  1100,  1103,  1108,  1114,  1123,  1125,
    1127,  1129,  1131,  1133,  1135,  1139,  1143,  1152,  1160,  1168,
    1170,  1179,  1184,  1188,  1190,  1192,  1196,  1203,  1208,  1224,
    1226,  1228,  1232
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
  "M_GETECHO", "NUMBER", "PRINTF", "PUTENV", "RETURN", "SIZEOFLIST",
  "STAT", "STRING", "STRINGTYPE", "STRLEN", "STRLWR", "STRUPR", "STRFIND",
  "STRFORMAT", "SUBSTR", "SYSTEM", "TRIM", "TRIMLEFT", "TRIMRIGHT", "VOID",
  "WHILE", "'='", "PLUS_IS", "MOD_IS", "MUL_IS", "MINUS_IS", "DIV_IS",
  "SHR_IS", "SHL_IS", "XOR_IS", "OR_IS", "AND_IS", "OR", "AND", "'|'",
  "'^'", "'&'", "NOT_EQUAL", "EQUAL", "'<'", "'>'", "YOUNGER", "OLDER",
  "GREATER_EQUAL", "SMALLER_EQUAL", "SHR", "SHL", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'!'", "'~'", "DEC", "INC", "'['", "'.'", "'`'", "'}'",
  "')'", "','", "'{'", "']'", "'('", "';'", "$accept", "input", "args",
  "break_ok", "break_stat", "casttype", "backtick", "$@1", "closebrace",
  "$@2", "closepar", "$@3", "comma", "$@4", "comma_arglist", "comma_expr",
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
     305,   306,   307,   308,   309,   310,   311,    61,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     124,    94,    38,   324,   325,    60,    62,   326,   327,   328,
     329,   330,   331,    43,    45,    42,    47,    37,    33,   126,
     332,   333,    91,    46,    96,   125,    41,    44,   123,    93,
      40,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   102,   103,   103,   104,   104,   105,   106,   107,   107,
     107,   109,   108,   111,   110,   113,   112,   115,   114,   116,
     116,   117,   117,   118,   119,   119,   120,   120,   121,   122,
     124,   123,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   126,   127,   127,   128,   129,   130,   131,   131,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     133,   134,   135,   136,   136,   137,   138,   139,   140,   140,
     141,   142,   142,   143,   143,   143,   143,   144,   145,   146,
     147,   149,   148,   150,   150,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   153,   152,   155,   154,   156,   156,   157,
     157,   158,   158,   159,   159,   160,   160,   160,   161,   161,
     162,   162,   163,   163,   164,   164,   165,   166,   167,   168,
     169,   169,   171,   170,   172,   173,   173,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   175,   175,   176,   176,
     176,   176,   176,   176,   176,   177,   178,   179,   180,   180,
     180,   181,   181,   182,   182,   182,   183,   184,   185,   186,
     186,   186,   187
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
       2,     2,     2,     4,     1,     1,     3,     4,     3,     1,
       3,     1,     3,     1,     2,    11,     4,     2,     1,     2,
       3,     5,     7,     4,     4,     3,     3,     3,     3,     1,
       1,     1,     5,     2,     3,     2,     9,     1,     1,     1,
       2,     2,     1,     2,     3,     6,     7,     3,     0,     1,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     0,     2,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     0,     3,     1,     2,     0,     0,     2,
       1,     1,     0,     2,     1,     2,     1,     1,     2,     2,
       1,     1,     1,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     2,     7,     1,
       1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     163,   203,   205,   204,   206,   163,     3,     0,   162,   196,
       0,     1,     2,     0,    28,   212,     0,   202,   143,   199,
     201,    17,    24,   100,    25,   120,   212,   103,   107,     0,
     212,   161,     0,     0,     0,   197,     0,   200,   130,   131,
     125,   156,   129,   128,   189,   188,   190,   132,   134,   133,
     191,   153,   154,   127,   192,   193,   143,   136,   209,   210,
     211,    88,   143,   143,   143,    75,   143,   135,   126,   155,
     187,   137,   139,   138,   194,   143,   195,   157,   140,   141,
     142,     0,     0,     0,     0,     0,     0,     0,     0,   104,
      79,    15,   143,    99,    17,   143,   143,   143,    74,   143,
     143,   143,     0,   176,     0,    17,   165,     0,   144,    28,
     198,    18,   173,    30,    30,     0,    15,    30,    30,    70,
      65,    72,    71,    68,    66,    11,     8,     9,    10,     0,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    69,    67,     0,     0,    87,     0,    30,    30,
     113,    30,    30,    30,   186,    30,    30,    89,     0,     7,
     109,   168,   168,   108,   168,   212,   212,   172,    86,     0,
     177,    81,     0,   172,   143,   182,   143,   181,    30,   172,
     175,   174,   143,   180,   145,     0,   166,    17,     5,   117,
      15,    78,    17,    17,    80,     0,     0,    76,    32,    38,
      37,    35,    39,    36,    44,    43,    42,    41,    40,    45,
      46,    55,    56,    54,    48,    47,    49,    50,    61,    62,
      52,    51,    58,    57,    53,    59,    60,    63,    64,     0,
      34,    16,    17,    98,   148,    17,    17,     0,    90,   212,
     212,    17,    17,   185,    84,   119,   105,   207,     0,   178,
     184,    14,    31,   179,    30,    30,   170,   169,   171,   183,
      30,   212,     0,   164,    30,    77,    12,    73,    33,   121,
      30,   124,   123,   122,    30,    94,    20,    30,    93,    22,
      30,    30,    23,    83,   151,   172,   152,    15,    15,   112,
     158,   102,     0,   159,   146,     4,    17,   118,    17,    21,
      91,    17,    30,    30,     0,     6,   111,   110,    30,   115,
      30,    82,   149,   172,   167,     0,   116,    92,    30,   168,
     167,    15,   212,   208,     6,     0,   167,    27,     0,    26,
     106,   167,    85
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,   207,   335,   187,   129,   214,   215,   188,   189,
     166,   167,   284,    34,   295,   298,   190,     6,   346,    15,
      16,   191,   192,    89,   193,   304,   194,   195,    17,    90,
      91,    18,    92,    30,    19,   196,   197,    29,   198,   309,
     310,    93,    94,   170,   264,    26,   256,   257,   293,    95,
      31,    32,   281,   282,   253,   333,   305,    96,    97,   311,
     104,     7,   105,   106,   339,   265,   199,   277,    35,    36,
     200,   102,   201,    98,    99,   100,     8,    20,    21,    22,
       9,    10,   202,   203,   101,   103
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -317
static const yytype_int16 yypact[] =
{
     -10,  -317,  -317,  -317,  -317,    10,  -317,     3,  -317,  -317,
     -18,  -317,  -317,   -72,   -69,   -11,     0,  -317,  -317,  -317,
    -317,   -37,  -317,  -317,  -317,  -317,  -317,  -317,  -317,   694,
    -317,   -12,   -30,    42,   -22,  -317,   -28,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,    -7,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,   694,   694,   694,   694,   694,   694,   694,   600,   781,
    -317,  -317,  -317,  -317,    -6,  -317,  -317,  -317,    33,  -317,
    -317,  -317,   400,  -317,     4,    24,  -317,    42,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,   694,  -317,  -317,  -317,   -24,
     -24,   -24,   -24,   -24,   -24,   781,  -317,  -317,  -317,    36,
     781,   694,   694,   694,   694,   694,   694,   694,   694,   694,
     694,   694,   694,   694,   694,   694,   694,   694,   694,   694,
     694,   694,   694,   694,   694,   694,   694,   694,   694,   694,
     694,   694,  -317,  -317,   694,    54,  -317,    44,    45,   -19,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,   -72,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,    55,
    -317,  -317,   694,  -317,  -317,  -317,  -317,  -317,    46,  -317,
    -317,  -317,  -317,  -317,  -317,   -12,  -317,    53,  -317,  -317,
     781,  -317,    56,    59,  -317,    57,   694,  -317,   781,   781,
     781,   781,   781,   781,   781,   781,   781,   781,   781,    32,
     296,   386,   486,   582,   227,   227,    -4,    -4,    -4,    -4,
      -4,    -4,    43,    43,    52,    52,   -24,   -24,   -24,   738,
    -317,  -317,    60,  -317,  -317,    61,  -317,   -16,  -317,    63,
      64,  -317,  -317,  -317,  -317,  -317,  -317,  -317,   400,  -317,
    -317,  -317,   781,  -317,    46,  -317,  -317,  -317,  -317,  -317,
    -317,   -12,    65,  -317,  -317,  -317,  -317,   -24,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,    67,  -317,  -317,  -317,  -317,  -317,
     -12,  -317,     8,  -317,  -317,  -317,  -317,  -317,    62,  -317,
    -317,  -317,  -317,    66,   501,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,   501,  -317,  -317,    45,  -317,
    -317,  -317,   145,  -317,  -317,   501,  -317,  -317,   501,  -317,
    -317,  -317,  -317
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -317,  -317,  -112,  -179,  -317,  -317,  -317,  -317,  -102,  -317,
    -113,  -317,   -20,  -317,  -317,  -317,  -317,   163,  -317,    68,
    -317,   -77,  -317,   201,  -267,  -317,  -317,  -317,   159,  -317,
    -317,  -317,  -317,  -317,   137,  -317,  -317,  -317,  -317,  -138,
    -317,  -317,  -317,  -144,  -156,    -1,  -115,  -317,  -317,  -317,
     -48,  -317,  -317,  -317,  -317,  -317,  -160,  -317,  -317,  -317,
    -317,  -317,  -317,   -26,  -316,  -159,  -317,  -317,  -174,  -317,
    -285,     1,  -317,  -317,  -317,  -317,   -29,  -131,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,   -15
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -213
static const yytype_int16 yytable[] =
{
      27,    33,   107,   211,    13,   212,   213,   303,   113,    13,
      11,    37,    23,   270,   114,   115,   116,   217,   117,   273,
       1,     2,     1,     2,   343,   279,   266,   118,   267,    25,
     350,  -100,     3,    14,     3,   352,   208,   209,   109,   334,
     208,   208,     1,     2,   168,     4,   -29,   171,   172,   173,
     340,   175,   176,   177,     3,   331,   252,    28,  -121,  -121,
     349,   291,   292,   351,  -172,     4,   162,   163,   164,   165,
     108,   303,   109,   112,   169,   111,   174,   155,   156,   157,
     158,   159,   160,   161,   250,   205,   162,   163,   164,   165,
    -118,   208,   255,  -101,   258,   259,   260,   285,   261,   262,
     204,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
    -160,   276,   162,   163,   164,   165,   157,   158,   159,   160,
     161,   323,   216,   162,   163,   164,   165,   159,   160,   161,
     251,  -212,   162,   163,   164,   165,   274,  -212,   275,   -96,
     271,   286,   -95,   254,   280,   -97,  -147,  -114,   -19,   338,
     294,   297,   345,   314,   322,   348,   302,  -150,    12,    24,
     110,   269,   326,   329,   316,   206,   107,   263,   341,   283,
     342,   327,   318,   278,     0,     0,   268,     0,     0,     0,
       0,     0,     0,     0,   324,   325,     0,     0,   307,     0,
       0,     0,     0,   308,     0,     0,     0,   315,     0,     0,
       0,     0,     0,   317,     0,     0,     0,   208,     0,     0,
     319,     0,     0,   320,   321,     0,     0,     0,   344,     0,
       0,     0,     0,     0,     0,   289,   290,     0,     0,     0,
       0,   300,   301,     0,   296,   299,   332,     0,     0,     0,
       0,   336,   312,   337,     0,     0,     0,     0,     0,   306,
       0,     0,     0,     0,     0,     0,   313,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   312,   119,   120,   121,   122,   123,   124,   125,   130,
       0,     0,     0,     0,     0,     0,   328,     0,     0,     0,
       0,   330,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,     0,   210,   162,   163,   164,
     165,     0,     0,   306,     0,     0,     0,   347,     0,     0,
       0,     0,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,     0,     0,   249,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,     0,     0,   162,   163,   164,   165,
       0,     0,     0,   272,     0,     0,     0,     0,     0,     0,
       0,   178,     0,   -30,   -30,   -30,   179,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   287,   -30,   -30,
     -30,   180,   -30,   -30,   181,   -30,   -30,   -30,   -30,   -30,
     -30,   182,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,
     183,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,     0,   184,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,     0,     0,   162,   163,   164,   165,
       0,     0,     0,   -30,   -30,     0,     0,     0,   -30,   -30,
     -30,   -30,     0,     0,   -30,   -13,     0,     0,   185,     0,
     -30,   186,   178,     0,   -30,   -30,   -30,   179,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   180,   -30,   -30,   181,   -30,   -30,   -30,   -30,
     -30,   -30,   182,     0,     0,   -30,   -30,   -30,   -30,   -30,
     -30,   183,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,     0,   184,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,     0,     0,   162,   163,   164,   165,
       0,     0,     0,     0,   -30,   -30,     0,     0,     0,   -30,
     -30,   -30,   -30,     0,     0,   -30,     0,     0,     0,   185,
       0,   -30,   186,    38,    39,    40,     0,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     0,    51,    52,
      53,     0,    54,    55,     0,    56,    57,    58,    59,    60,
      61,     0,   126,   127,    62,    63,    64,    65,    66,    67,
       0,    68,    69,    70,   128,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
       0,     0,   162,   163,   164,   165,     0,     0,     0,     0,
       0,     0,     0,    81,    82,     0,     0,     0,    83,    84,
      85,    86,     0,     0,    87,     0,     0,    38,    39,    40,
      88,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,     0,    51,    52,    53,     0,    54,    55,     0,    56,
      57,    58,    59,    60,    61,     0,     0,     0,    62,    63,
      64,    65,    66,    67,     0,    68,    69,    70,     0,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,    82,     0,
       0,     0,    83,    84,    85,    86,     0,     0,    87,     0,
       0,     0,     0,     0,    88,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,     0,     0,   162,   163,
     164,   165,     0,     0,     0,     0,     0,   288,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,     0,
       0,   162,   163,   164,   165
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-317)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      15,    21,    31,   116,     1,   117,   118,   274,    56,     1,
       0,    26,    30,   187,    62,    63,    64,   130,    66,   193,
      32,    33,    32,    33,   340,   199,   182,    75,   184,   101,
     346,   100,    44,    30,    44,   351,   113,   114,    30,   324,
     117,   118,    32,    33,    92,    55,    57,    95,    96,    97,
     335,    99,   100,   101,    44,   322,   168,    57,    77,    78,
     345,    77,    78,   348,   101,    55,    90,    91,    92,    93,
     100,   338,    30,   101,    94,    97,    43,    81,    82,    83,
      84,    85,    86,    87,    30,   105,    90,    91,    92,    93,
      96,   168,   169,   100,   171,   172,   173,   210,   175,   176,
      96,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      96,   198,    90,    91,    92,    93,    83,    84,    85,    86,
      87,   305,    96,    90,    91,    92,    93,    85,    86,    87,
      96,    96,    90,    91,    92,    93,   194,   101,   196,    96,
      95,    94,    96,   168,   202,    96,    96,    96,    96,   333,
      97,    97,    17,    98,    97,   344,   268,   101,     5,    10,
      33,   186,   310,   317,   289,   107,   205,   178,   338,   205,
     339,   312,   294,   198,    -1,    -1,   185,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   307,   308,    -1,    -1,   275,    -1,
      -1,    -1,    -1,   280,    -1,    -1,    -1,   284,    -1,    -1,
      -1,    -1,    -1,   290,    -1,    -1,    -1,   294,    -1,    -1,
     297,    -1,    -1,   300,   301,    -1,    -1,    -1,   341,    -1,
      -1,    -1,    -1,    -1,    -1,   255,   256,    -1,    -1,    -1,
      -1,   261,   262,    -1,   259,   260,   323,    -1,    -1,    -1,
      -1,   328,   281,   330,    -1,    -1,    -1,    -1,    -1,   274,
      -1,    -1,    -1,    -1,    -1,    -1,   281,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   310,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,
      -1,   321,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    -1,   115,    90,    91,    92,
      93,    -1,    -1,   338,    -1,    -1,    -1,   342,    -1,    -1,
      -1,    -1,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,    -1,    -1,   164,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    -1,    -1,    90,    91,    92,    93,
      -1,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,   216,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    56,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    -1,    -1,    90,    91,    92,    93,
      -1,    -1,    -1,    83,    84,    -1,    -1,    -1,    88,    89,
      90,    91,    -1,    -1,    94,    95,    -1,    -1,    98,    -1,
     100,   101,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    56,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    -1,    -1,    90,    91,    92,    93,
      -1,    -1,    -1,    -1,    83,    84,    -1,    -1,    -1,    88,
      89,    90,    91,    -1,    -1,    94,    -1,    -1,    -1,    98,
      -1,   100,   101,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    -1,    22,    23,    -1,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      -1,    -1,    90,    91,    92,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    -1,    -1,    -1,    88,    89,
      90,    91,    -1,    -1,    94,    -1,    -1,     3,     4,     5,
     100,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    -1,    22,    23,    -1,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    -1,    41,    42,    43,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,
      -1,    -1,    88,    89,    90,    91,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    -1,   100,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    -1,    -1,    90,    91,
      92,    93,    -1,    -1,    -1,    -1,    -1,    99,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
      -1,    90,    91,    92,    93
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,    33,    44,    55,   103,   119,   163,   178,   182,
     183,     0,   119,     1,    30,   121,   122,   130,   133,   136,
     179,   180,   181,    30,   130,   101,   147,   187,    57,   139,
     135,   152,   153,   114,   115,   170,   171,   187,     3,     4,
       5,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    18,    19,    20,    22,    23,    25,    26,    27,    28,
      29,    30,    34,    35,    36,    37,    38,    39,    41,    42,
      43,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    83,    84,    88,    89,    90,    91,    94,   100,   125,
     131,   132,   134,   143,   144,   151,   159,   160,   175,   176,
     177,   186,   173,   187,   162,   164,   165,   178,   100,    30,
     136,    97,   101,   152,   152,   152,   152,   152,   152,   125,
     125,   125,   125,   125,   125,   125,    32,    33,    44,   107,
     125,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    90,    91,    92,    93,   112,   113,   152,   114,
     145,   152,   152,   152,    43,   152,   152,   152,     1,     6,
      21,    24,    31,    40,    56,    98,   101,   106,   110,   111,
     118,   123,   124,   126,   128,   129,   137,   138,   140,   168,
     172,   174,   184,   185,    96,   114,   121,   104,   123,   123,
     125,   112,   104,   104,   108,   109,    96,   112,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
      30,    96,   104,   156,   187,   123,   148,   149,   123,   123,
     123,   123,   123,   147,   146,   167,   146,   146,   173,   187,
     170,    95,   125,   170,   152,   152,   123,   169,   187,   170,
     152,   154,   155,   165,   114,   112,    94,   125,    99,   114,
     114,    77,    78,   150,    97,   116,   187,    97,   117,   187,
     114,   114,   110,   126,   127,   158,   187,   123,   123,   141,
     142,   161,   178,   187,    98,   123,   148,   123,   104,   123,
     123,   123,    97,   170,   112,   112,   141,   179,   114,   145,
     114,   126,   123,   157,   172,   105,   123,   123,   170,   166,
     172,   158,   167,   166,   112,    17,   120,   187,   105,   172,
     166,   172,   166
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
#line 125 "../parser"
    {
            (yyval) = *multargs(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 130 "../parser"
    {
            (yyval) = *firstarg(&(yyvsp[(1) - (1)]));
        }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 136 "../parser"
    {
            break_ok++;
        }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 143 "../parser"
    {
            (yyval) = *break_stmnt();
        }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 156 "../parser"
    {parse_error = err_backtick_expected; }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 157 "../parser"
    {parse_error = err_closebrace_expected; }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 158 "../parser"
    {parse_error = err_closepar_expected; }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 159 "../parser"
    {parse_error = err_comma_expected; }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 164 "../parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 174 "../parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 185 "../parser"
    {
            (yyval) = (yyvsp[(2) - (3)]);
        }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 201 "../parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 210 "../parser"
    {
            entervar();
        }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 217 "../parser"
    {
        (yyval) = *fetchvar();
    }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 223 "../parser"
    {
            parse_error = err_in_expression;
        }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 227 "../parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 236 "../parser"
    {
            (yyval) = *assign(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 244 "../parser"
    {
            (yyval) = *indexOp(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]));
        }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 251 "../parser"
    {
    			(yyval) = *attribute(&(yyvsp[(1) - (3)]));
    		}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 258 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), multiply, "*=");
        }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 265 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), divide, "/=");
        }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 272 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), modulo, "%=");
        }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 279 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), addition, "+=");
        }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 286 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), subtract, "-=");
        }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 293 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), band, "&=");
        }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 300 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), bor, "|=");
        }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 307 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), xor, "^=");
        }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 314 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), shl, "<<=");
        }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 321 "../parser"
    {
            (yyval) = *math_ass(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), shr, ">>=");
        }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 328 "../parser"
    {
            (yyval) = *or_boolean(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 335 "../parser"
    {
            (yyval) = *and_boolean(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 342 "../parser"
    {
            (yyval) = *equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 349 "../parser"
    {
            (yyval) = *unequal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 356 "../parser"
    {
            (yyval) = *smaller(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 363 "../parser"
    {
            (yyval) = *greater(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 370 "../parser"
    {
            (yyval) = *sm_equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 377 "../parser"
    {
            (yyval) = *gr_equal(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 384 "../parser"
    {
            (yyval) = *addition(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 391 "../parser"
    {
            (yyval) = *band(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 398 "../parser"
    {
            (yyval) = *bor(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 405 "../parser"
    {
            (yyval) = *xor(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 412 "../parser"
    {
            (yyval) = *shl(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 419 "../parser"
    {
            (yyval) = *shr(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 426 "../parser"
    {
            (yyval) = *subtract(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 433 "../parser"
    {
            (yyval) = *multiply(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 440 "../parser"
    {
            (yyval) = *young(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 447 "../parser"
    {
            (yyval) = *old(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 454 "../parser"
    {
            (yyval) = *divide(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 461 "../parser"
    {
            (yyval) = *modulo(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 467 "../parser"
    {
            (yyval) = *negate(&(yyvsp[(2) - (2)]));
        }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 473 "../parser"
    {
            (yyval) = *incdec(pre_op, op_inc, &(yyvsp[(2) - (2)]));
        }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 479 "../parser"
    {
            (yyval) = *incdec(post_op, op_inc, &(yyvsp[(1) - (2)]));
        }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 485 "../parser"
    {
            (yyval) = *incdec(pre_op, op_dec, &(yyvsp[(2) - (2)]));
        }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 491 "../parser"
    {
            (yyval) = *incdec(post_op, op_dec, &(yyvsp[(1) - (2)]));
        }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 497 "../parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 503 "../parser"
    {
            (yyval) = *bnot(&(yyvsp[(2) - (2)]));
        }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 509 "../parser"
    {
            (yyval) = *not_boolean(&(yyvsp[(2) - (2)]));
        }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 517 "../parser"
    {
            (yyval) = *cast((yyvsp[(2) - (4)]).type, &(yyvsp[(4) - (4)]));
        }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 522 "../parser"
    {
            (yyval) = *stackframe(e_str | e_const);
        }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 527 "../parser"
    {
            (yyval) = *stackframe(e_int | e_const);
        }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 534 "../parser"
    {
            (yyval) = (yyvsp[(2) - (3)]);
        }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 542 "../parser"
    {
    		(yyval) = *onearg(f_echo,&(yyvsp[(3) - (4)]));
    	}
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 549 "../parser"
    {
    		(yyval) = *zeroargs(f_getecho); 
    	}
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 558 "../parser"
    {
            (yyval) = *onearg(f_backtick, &(yyvsp[(2) - (3)]));
        }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 565 "../parser"
    {
            (yyval) = *expr_stmnt(&(yyvsp[(1) - (1)]));
        }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 574 "../parser"
    {
            (yyval) = *catcode(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));
        }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 598 "../parser"
    {
            (yyval) = *for_stmnt(&(yyvsp[(3) - (11)]), &(yyvsp[(5) - (11)]), &(yyvsp[(7) - (11)]), &(yyvsp[(10) - (11)]));
        }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 608 "../parser"
    {
            close_fun(&(yyvsp[(3) - (4)]));
        }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 618 "../parser"
    {
            (yyval) = *fetchvar();
        }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 626 "../parser"
    {
            (yyval) = *zeroargs((yyvsp[(1) - (2)]).type);
        }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 633 "../parser"
    {
            (yyval) = *onearg((yyvsp[(1) - (3)]).type, &(yyvsp[(3) - (3)]));
        }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 642 "../parser"
    {
            (yyval) = *twoargs((yyvsp[(1) - (5)]).type, &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]));
        }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 653 "../parser"
    {
            (yyval) = *threeargs((yyvsp[(1) - (7)]).type, &(yyvsp[(3) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(7) - (7)]));
        }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 661 "../parser"
    {
            (yyval) = *optint_string((yyvsp[(1) - (4)]).type, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]));
        }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 669 "../parser"
    {
            (yyval) = *optint_special((yyvsp[(1) - (4)]).type, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]));
        }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 676 "../parser"
    {
            (yyval) = *specials(f_printf, &(yyvsp[(3) - (3)]));
        }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 683 "../parser"
    {
            (yyval) = *exec_fprintf((yyvsp[(1) - (3)]).type, &(yyvsp[(3) - (3)]));
        }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 690 "../parser"
    {
            (yyval) = *specials(f_strformat, &(yyvsp[(3) - (3)]));
        }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 697 "../parser"
    {
            (yyval) = *callfun((yyvsp[(1) - (3)]).evalue, &(yyvsp[(3) - (3)]));
        }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 706 "../parser"
    {
            open_fun();
        }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 713 "../parser"
    {
            (yyval).evalue = fetchfun();
        }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 724 "../parser"
    {
            make_frame();
            outbin((yyvsp[(5) - (5)]).code, (yyvsp[(5) - (5)]).codelen);
        }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 740 "../parser"
    {
        initialization = 0;
        (yyval) = *expr_stmnt(assign(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])));    /* explicit initialization */
    }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 761 "../parser"
    {
            (yyval) = *if_stmnt(&(yyvsp[(3) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(8) - (9)]));
        }
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 768 "../parser"
    {
        initialization = 1;
    }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 784 "../parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 792 "../parser"
    {
        (yyval) = *catcode(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]));        /* cat initialization code */
    }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 803 "../parser"
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

  case 114:
/* Line 1792 of yacc.c  */
#line 819 "../parser"
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

  case 115:
/* Line 1792 of yacc.c  */
#line 837 "../parser"
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

  case 116:
/* Line 1792 of yacc.c  */
#line 860 "../parser"
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

  case 117:
/* Line 1792 of yacc.c  */
#line 881 "../parser"
    {
            (yyval) = (yyvsp[(3) - (3)]);
        }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 887 "../parser"
    {
            (yyval) = *stackframe(e_int | e_const);
            (yyval).evalue = O_FILE;
        }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 895 "../parser"
    {
            nestlevel++;
        }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 902 "../parser"
    {
            yyerrok;
        }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 908 "../parser"
    {parse_error = err_older_younger; }
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 910 "../parser"
    {
            (yyval) = (yyvsp[(2) - (2)]);
        }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 959 "../parser"
    {parse_error = err_openpar_expected; }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 960 "../parser"
    {parse_error = err_openbrace_expected; }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 971 "../parser"
    {
            (yyval) = *stackframe(e_int | e_const);
            (yyval).evalue = 1;
        }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 1011 "../parser"
    {
            vartype = e_int;
        }
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 1027 "../parser"
    {
            n_params++;
        }
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 1033 "../parser"
    {
            pop_dead();
        }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 1039 "../parser"
    {
            push_dead();                    /* set new dead-level */
        }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 1049 "../parser"
    {
            (yyval) = *return_stmnt((yyvsp[(1) - (2)]).type, &(yyvsp[(2) - (2)]));
        }
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 1060 "../parser"
    {parse_error = err_semicol_expected; }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 1064 "../parser"
    {
            sem_err = 0;
        }
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 1072 "../parser"
    {
            (yyval) = *cat_stmnt(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]));
        }
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 1084 "../parser"
    {
            (yyval) = (yyvsp[(1) - (2)]);
        }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 1110 "../parser"
    {
        stringbuf = xstrcat(stringbuf, lexstring);/* catenate the new string */
    }
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 1115 "../parser"
    {
        free(stringbuf);                    /* free former string */
        stringbuf = xstrdup(lexstring);     /* duplicate initial string */
    }
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 1144 "../parser"
    {
            parse_error = err_identifier_expected;
            vartype = (yyvsp[(1) - (1)]).type;
        }
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 1154 "../parser"
    {
        (yyval) = (yyvsp[(1) - (2)]);                    /* initialization code */
    }
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 1163 "../parser"
    {
            (yyval) = *catcode(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]));    /* catenate variable    */
                                        /* initialization code  */
        }
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 1173 "../parser"
    {
            (yyval) = (yyvsp[(3) - (3)]);
        }
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 1180 "../parser"
    {
            global_init = *catcode(&global_init, &(yyvsp[(1) - (1)]));
        }
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 1197 "../parser"
    {
            vartype = 0;
        }
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 1215 "../parser"
    {
            (yyval) = *while_stmnt(&(yyvsp[(3) - (7)]), &(yyvsp[(6) - (7)]));
        }
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 1232 "../parser"
    {
            (yyval) = *stackframe(0);
        }
    break;


/* Line 1792 of yacc.c  */
#line 2861 "../parser.c"
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
#line 1236 "../parser"


int yywrap(void)
{
    return 1;
}
