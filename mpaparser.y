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
%left '=' LESSGREAT '<' '>' LESSEQ GREATEQ
%left '+' '-' OR
%left '*' '/' DIV MOD AND
%left NOT
%nonassoc IFX
%nonassoc THEN
%nonassoc ELSE


%token ASSIGN DO ELSE END FORWARD FUNCTION IF NOT OUTPUT 
%token PARAMSTR PROGRAM REPEAT THEN UNTIL VAL VAR WHILE WRITELN BEGIN_
%token AND OR LESSEQ GREATEQ MOD DIV LESSGREAT
%token ID INTLIT REALLIT STRING


%%
Prog: ProgHeading ";" ProgBlock "."								{root = make_node("Program",NULL,$1);$1->brother = $3;};
ProgHeading: PROGRAM ID "(" OUTPUT ")"							{$$ = make_node("ID",NULL,NULL);};								
ProgBlock: VarPart FuncPart StatPart							{$$ = $1; $1->brother = $2; $2->brother = $3;};	
VarPart: VAR VarDeclaration ";" repVarPart						{$2->brother = $4;$$ = make_node("VarPart",NULL,$2);}
		|														{$$ = make_node("VarPart",NULL,NULL);}
		;						
repVarPart: VarDeclaration ";" repVarPart 						{$1->brother = $3; $$ = $1;}
	| 															{$$ = NULL;}
	;
VarDeclaration: IDList ":" ID									{for(temp = $1;temp->brother!=NULL;temp = temp->brother);temp->brother = $3; $$ = make_node("VarDecl",NULL,$1);};
IDList: ID repIDList											{$$ = make_node("ID",$2,NULL);};
repIDList: ID "," repIDList  									{$$ = make_node("ID",$3,NULL);}
	|															{$$  = NULL;}
	;
FuncPart: repFuncPart 											{$$ = make_node("FuncPart",NULL,$1);};		
repFuncPart: FuncDeclaration ";" repFuncPart					{$1->brother = $3;$$ = $1;}
			|													{$$ = NULL;}
			;									
FuncDeclaration: FuncDecl 										{$$ = $1;}
				| FuncDef 										{$$ = $1;}
				| FuncDef2										{$$ = $1;}									
				;
FuncDecl: FuncHeading ";" FORWARD 								{$$ = make_node("FuncDecl",NULL,$1);};
FuncDef: FuncIdent ";" FuncBlock								{$1->brother = $3; $$ = make_node("FuncDef",NULL,$1);};
FuncDef2: FuncHeading ";" FuncBlock								{$1->brother = $3; $$ = make_node("FuncDef2",NULL,$1);};
FuncHeading: FUNCTION ID opFuncHeading ":" ID					{$3->brother = make_node("ID",NULL,NULL);$$ = make_node("ID",$3,NULL);};
opFuncHeading: FormalParamList 									{$$ = $1;}
			|													{$$ =  NULL;}
			;								
FuncIdent: FUNCTION ID											{$$ = make_node("ID",NULL,NULL);};
FormalParamList: "(" FormalParams repFormalParamList ")"		{$2->brother = $3; $$= make_node("FuncParams",NULL,$2);};
repFormalParamList: FormalParams ";" repFormalParamList  		{$1->brother = $3; $$ = $1;}
					|											{$$ = NULL;}
					;		
FormalParams: opFormalParams IDList ":" ID						{$$->son = $2;for(temp = $2;temp->brother!=NULL;temp = temp->brother);temp->brother = $4;};
opFormalParams: VAR 											{$$ = make_node("VarParams",NULL,NULL);}
				|												{$$ = make_node("Params",NULL,NULL);}
				;												
FuncBlock: VarPart StatPart										{$1->brother = $2;$$ = $1;};							
StatPart: CompStat												{$$ = $1;};
CompStat: BEGIN_ StatList END									{$$ =$2;};
StatList: Stat repStat											{$1->brother = $2; $$ = make_node("StatList",NULL,$1);};								
repStat:  repStat ";" Stat 										{$1->brother = $3; $$ = $1;}
		|														{$$ = NULL;}
		;
Stat: CompStat													{$$ = $1;} 
	  | IF Expr THEN Stat opStat1								{$2->brother = $4; $4->brother = $5;$$ = make_node("IfElse",NULL,$2);} 
	  | WHILE Expr DO Stat 										{$2->brother = $4; $$ = make_node("WHILE",NULL,$2);}
	  | REPEAT StatList UNTIL Expr 								{for(temp = $2;temp->brother!=NULL;temp = temp->brother);temp->brother = $4; $$ = make_node("Repeat",NULL,$2);}
	  | VAL "(" PARAMSTR "(" Expr ")" "," ID ")" 				{$5->brother = make_node("ID",NULL,NULL); $$ = make_node("ValParam",NULL,$5);}
	  | opStat2 												{$$ = $1;}
	  | WRITELN opStat3											{$$ = make_node("Writeln",NULL,$2);}
	  ;
opStat1: ELSE Stat 												{$$ = $2;}
		| %prec IFX												{$$ = NULL;}
		;
opStat2: ID ASSIGN Expr 										{temp = make_node("ID",$3,NULL);$$ = make_node("ASSIGN",NULL,temp);}
		 |														{$$ = NULL;}
		 ;
opStat3:WritelnPList 											{$$ = $1;}
		|														{$$ = NULL;}
		;
WritelnPList: "(" opWritelnPList repWritelnPList ")" 			{$2->brother = $3; $$ = $2;};
opWritelnPList: Expr 											{$$ = $1;}									
				|STRING 										{$$ = make_node("String",NULL,NULL);}
				;
repWritelnPList: repWritelnPList "," opWritelnPList 			{$1->brother = $3; $$ = $1;}
				|												{$$ = NULL;}
				;
Expr: Expr '+' Expr
 	 |Expr '-' Expr
 	 |Expr OR Expr  
	 |'(' Expr ')'											 
	 |'-' Expr
	 |'+' Expr
	 |NOT Expr
	 |INTLIT
	 |REALLIT
	 |ID opExpr
	 |Expr '*' Expr
	 |Expr '/' Expr
	 |Expr DIV Expr
	 |Expr MOD Expr
	 |Expr AND Expr
	 |Expr '<' Expr
	 |Expr '>' Expr
	 |Expr '=' Expr
	 |Expr LESSGREAT Expr
	 |Expr GREATEQ Expr
	 |Expr LESSEQ Expr
	 ;
opExpr: ParamList
		|
		;
ParamList: "(" Expr repParamList ")";
repParamList: repParamList "," Expr
			  |
			  ;

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