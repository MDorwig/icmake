/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
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
