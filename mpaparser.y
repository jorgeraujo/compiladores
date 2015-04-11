%{
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

%}


%token ASSIGN DO ELSE END FORWARD FUNCTION IF NOT OUTPUT 
%token PARAMSTR PROGRAM REPEAT THEN UNTIL VAL VAR WHILE WRITELN BEGIN_
%token ID INTLIT REALLIT STRING 


%left '>' '<' '=' GREATEQ LESSGREAT LESSEQ
%left '+' '-' OR
%left '*' '/' DIV MOD AND
%left NOT
%nonassoc IFX
%nonassoc ELSE





%%
Prog: ProgHeading ';' ProgBlock '.'							    {root = make_node("Program",NULL,$1);$1->brother = $3;};

ProgHeading: PROGRAM ID '(' OUTPUT ')'							{$$ = make_node("ID",NULL,NULL);};

ProgBlock: VarPart FuncPart StatPart							{$$ = $1; $1->brother = $2; $2->brother = $3;};	

VarPart: VAR VarDeclaration ';' repVarPart						{$2->brother = $4;$$ = make_node("VarPart",NULL,$2);}
		|														{$$ = make_node("VarPart",NULL,NULL);}
		;						

repVarPart: VarDeclaration ';' repVarPart 						{$1->brother = $3; $$ = $1;}
	| 															{$$ = NULL;}
	;

VarDeclaration: IDList ':' ID									{for(temp = $1;temp->brother!=NULL;temp = temp->brother);temp->brother = $3; $$ = make_node("VarDecl",NULL,$1);};

IDList: ID repIDList											{$$ = make_node("ID",$2,NULL);};

repIDList: ID ',' repIDList  									{$$ = make_node("ID",$3,NULL);}
	|															{$$  = NULL;}
	;
FuncPart: repFuncPart 											{$$ = make_node("FuncPart",NULL,$1);};		

repFuncPart: FuncDeclaration ';' repFuncPart					{$1->brother = $3;$$ = $1;}
			|													{$$ = NULL;}
			;									

FuncDeclaration: FuncDecl 										{$$ = $1;}
				| FuncDef 										{$$ = $1;}
				| FuncDef2										{$$ = $1;}									
				;
FuncDecl: FuncHeading ';' FORWARD 								{$$ = make_node("FuncDecl",NULL,$1);}
FuncDef: FuncIdent ';' FuncBlock								{$1->brother = $3; $$ = make_node("FuncDef",NULL,$1);}
FuncDef2: FuncHeading ';' FuncBlock								{$1->brother = $3; $$ = make_node("FuncDef2",NULL,$1);}
FuncHeading: FUNCTION ID opFuncHeading ':' ID					{$3->brother = make_node("ID",NULL,NULL);$$ = make_node("ID",$3,NULL);};
opFuncHeading: FormalParamList 									{$$ =   $1;}
			|													{$$ =  NULL;}
			;								

FuncIdent: FUNCTION ID											{$$ = make_node("ID",NULL,NULL);};
FormalParamList: '(' FormalParams repFormalParamList ')'		{$2->brother = $3; $$= make_node("FuncParams",NULL,$2);};
repFormalParamList: FormalParams ';' repFormalParamList  		{$1->brother = $3; $$ = $1;}
					|											{$$ = NULL;}
					;		

FormalParams: opFormalParams IDList ':' ID					    {$$->son = $2;for(temp = $2;temp->brother!=NULL;temp = temp->brother);temp->brother = $4;};
opFormalParams: VAR 											{$$ = make_node("VarParams",NULL,NULL);}
				|												{$$ = make_node("Params",NULL,NULL);}
				;												

FuncBlock: VarPart StatPart									    {$1->brother = $2;$$ = $1;};

StatPart: CompStat												{$$ = $1;};

CompStat: BEGIN_ StatList END;

StatList: Stat repStat;										

repStat: repStat ';' Stat|;

Stat: CompStat | IF Expr THEN Stat opStat1  | WHILE Expr DO Stat | REPEAT StatList UNTIL Expr | VAL "(" PARAMSTR "(" Expr ")" "," ID ")" | opStat2 | WRITELN opStat3;
opStat1: ELSE Stat|%prec IFX;
opStat2: ID ASSIGN Expr|;
opStat3:WritelnPList|;

WritelnPList: '(' opWritelnPList repWritelnPList ')';
opWritelnPList: Expr|STRING;
repWritelnPList: repWritelnPList ',' opWritelnPList|;


Expr : Expr '+' Expr
	| Expr '-' Expr
	| Expr '*' Expr
	| Expr '/' Expr
	| Expr '>' Expr
	| Expr '<' Expr
	| Expr '=' Expr
	| Expr GREATEQ Expr
	| Expr LESSEQ Expr
	| Expr LESSGREAT Expr
	| Expr AND Expr
	| Expr OR Expr
	| Expr MOD Expr
	| Expr DIV Expr
	| '-' Expr
	| '+' Expr
	| NOT Expr
	| '('Expr')'
	| INTLIT Expr
	| REALLIT Expr
	| ID
	|ID '('ParamList')'
	;




ParamList: '(' Expr repParamList ')';
repParamList: repParamList ',' Expr|;


%%
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