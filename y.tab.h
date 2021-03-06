/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

