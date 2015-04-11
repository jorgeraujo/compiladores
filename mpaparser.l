%{
#include "y.tab.h"
#include "stdio.h"


%}

%option case-insensitive
%option	yylineno

%x COMMENT



ID					[a-z][a-z0-9]*
INTLIT				[0-9]+
REALLIT				([0-9]+"."[0-9]+(e("+"|"-")?[0-9]+)?)|([0-9]+e("+"|"-")?[0-9]+) 
STRING				'([^\n']|'')*'
ASSIGN				":="
BEGIN				(begin)
DO 					(do)
ELSE				(else)
END					(end)
FORWARD				(forward)
FUNCTION			(function)
IF					(if)
NOT					(not)
OUTPUT				(output)
PARAMSTR			(paramstr)
PROGRAM				(program)
REPEAT				(repeat)
THEN				(then)
UNTIL				(until)
VAL					(val)
VAR					(var)
WHILE				(while)
WRITELN				(writeln)
                    '+'
                    '-'
                    '='
					'<'
					'>'
GREATEQ				">="
					'*'
					'/'
AND					(and)
OR            		(or)
LESSEQ				"<="
LESSGREAT			"<>"
MOD					(mod)
DIV					(div)
RESERVED			(array)|(case)|(const)|(downto)|(file)|(for)|(goto)|(in)|(label)|(nil)|(of)|(packed)|(procedure)|(record)|(set)|(to)|(type)|(with)|(abs)|(arctan)|(char)|(chr)|(cos)|(dispose)|(eof)|(eoln)|(exp)|(get)|(input)|(ln)|(maxint)|(new)|(odd)|(ord)|(pack)|(page)|(pred)|(put)|(read)|(readln)|(reset)|(rewrite)|(round)|(sin)|(sqr)|(sqrt)|(succ)|(text)|(trunc)|(unpack)|(write)
EXCEPTION			(Boolean)|(false)|(integer)|(real)|(true)
WHITESPACE 			(\t|" ")
NEWLINE				\n
UNTERMINATED_STRING	'([^\n']|'')*

%{
	int line_number=1,column_number=1,comment_line_ini,comment_column_ini;

%}

%%
{RESERVED}									{column_number += yyleng;}
{ASSIGN}									{column_number += yyleng;return ASSIGN;}		
{BEGIN}										{column_number += yyleng;return BEGIN_;}
":"|","|"."|"("|")"|";" 					{column_number += yyleng;return *yytext;}
{DO} 										{column_number += yyleng;return DO;}	
{ELSE}										{column_number += yyleng;return ELSE;}
{END}										{column_number += yyleng;return END;}	
{FORWARD}									{column_number += yyleng;return FORWARD;}	
{FUNCTION}									{column_number += yyleng;return FUNCTION;}
{IF}										{column_number += yyleng;return IF;}	
{NOT}										{column_number += yyleng;return NOT;}	
{OUTPUT}									{column_number += yyleng;return OUTPUT;}	
{PARAMSTR}									{column_number += yyleng;return PARAMSTR;}
{PROGRAM}									{column_number += yyleng;return PROGRAM;}	
{REPEAT}									{column_number += yyleng;return REPEAT;}	
{THEN}										{column_number += yyleng;return THEN;}
{UNTIL}										{column_number += yyleng;return UNTIL;}
{VAL}										{column_number += yyleng;return VAL;}	
{VAR}										{column_number += yyleng;return VAR;}	
{WHILE}										{column_number += yyleng;return WHILE;}
{WRITELN}									{column_number += yyleng;return WRITELN;}
OP1											{column_number += yyleng;return OP1;}
OP2											{column_number += yyleng;return OP2;}	
OP3											{column_number += yyleng;return OP3;}
{AND}										{column_number += yyleng;return AND;}
{OR}										{column_number += yyleng;return OR;}
{MOD}										{column_number += yyleng;return MOD;}
{DIV}										{column_number += yyleng;return DIV;}
{WHITESPACE}								{column_number += yyleng;}
{NEWLINE}									{line_number++;column_number=1;}
{ID}										{column_number += yyleng;yylval.str=(char*)strdup(yytext);return ID;}
{INTLIT}									{column_number += yyleng;yylval.str = yytext;return INTLIT;}
{REALLIT}									{column_number += yyleng;yylval.str = yytext;return REALLIT;}
{STRING}									{column_number += yyleng;yylval.str=(char*)strdup(yytext);return STRING;} 

("{")										{comment_line_ini =line_number ,comment_column_ini = column_number ;column_number += yyleng;BEGIN(COMMENT);}
("(*")                  					{comment_line_ini =line_number ,comment_column_ini = column_number;column_number += yyleng;BEGIN(COMMENT);}
<COMMENT>("}")          					{column_number += yyleng;BEGIN 0;}		
<COMMENT>("*)")								{column_number += yyleng;BEGIN 0;}
<COMMENT>\n             					{line_number++;column_number =1;}
<COMMENT>.									{column_number += yyleng;}
<COMMENT><<EOF>>        					{printf("Line %d, col %d: unterminated comment\n",comment_line_ini,comment_column_ini); return 0;}
{UNTERMINATED_STRING}						{printf("Line %d, col %d: unterminated string\n",line_number,column_number);}
.											{printf("Line %d, col %d: illegal character ('%s')\n",line_number,column_number,yytext);column_number += yyleng;}



%%

int yywrap()
{
	return 1;
}

