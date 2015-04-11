%{

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct node* treeNode;

typedef struct node{

treeNode son;
treeNode brother;
char type[10];
char *value;

}Node;


treeNode root;
treeNode makeNode(char *val,char tp[10]){
	treeNode element;
	element= (treeNode) malloc(sizeof(Node));
	element->value=val;
	strcpy(element->type,tp);
	element->son=NULL;
	element->brother=NULL;
	return element;
	

}

void addBrother(treeNode f, treeNode t){
	while(f->brother!=NULL){
		f=f->brother;
	}
	f->brother=t;
}

treeNode temp;

void printTree(treeNode t,int l){
	int i=0;
	if(t!=NULL){
		for(i=0;i<l;i++){
			printf(".");
		}
		
		if( strcmp("Id",t->type)==0 || strcmp("RealLit",t->type)==0 || strcmp("IntLit",t->type)==0 ||strcmp("String",t->type)==0){
			printf("%s(%s)\n",t->type,t->value);



		}else{

			printf("%s\n",t->type);

		}
		
	
		printTree(t->son,l+2);
		printTree(t->brother,l);
	}
}
%}

%union{
char* value;
struct node* tN;
int line;
int col;
}

%token <value> ASSIGN BEG DO ELSE END FORWARD FUNCTION IF NOT OUTPUT PARAMSTR PROGRAM REPEAT SEMIC THEN VAL VAR WHILE WRITELN AND OR MOD DIV LG LOE GOE STRING INTLIT REALLIT ID UNTIL RESERVED

%type <tN> prog programHeading progBlock varPart varDeclarationList varDeclaration idList funcPart funcPartList funcDeclaration funcHeading funcIdent formalParamList formalParamSList formalParamS funcBlock statPart compStat statList stat writelnPList expr paramList



%left '>' '<' '=' GOE LG LOE 
%left '+' '-' OR
%left '*' '/' DIV MOD AND
%left NOT
%nonassoc THEN
%nonassoc ELSE

%% 
fim: 		prog 			{printTree(root,0);return;}

prog : programHeading ';' progBlock '.' {root=makeNode(NULL,"Program"); temp=(treeNode)$1;temp->brother=(treeNode)$3;root->son=(treeNode)$1; } 	
	;

programHeading : PROGRAM ID '(' OUTPUT ')' {$$=makeNode($2,"Id");} 
		
	;

progBlock : varPart funcPart statPart {$$=makeNode(NULL,"VarPart"); temp=$$;temp->son=(treeNode)$1;temp=makeNode(NULL,"FuncPart");temp->son=(treeNode)$2;addBrother((treeNode)$$,temp);addBrother((treeNode)$$,(treeNode)$3);}
	;

varPart : VAR varDeclarationList ';' {$$=$2;}
	|	{$$=NULL;}
	;

varDeclarationList : varDeclarationList ';'  varDeclaration  {temp=makeNode(NULL,"VarDecl");temp->son=$3;addBrother((treeNode)$1,temp);$$=$1;}
	| varDeclaration {$$=makeNode(NULL,"VarDecl");temp=(treeNode)$$;temp->son=$1;}
	;

varDeclaration : idList ':' ID {temp=makeNode($3,"Id");addBrother((treeNode)$1,temp);$$=$1;/*printf("%s\n",$3);*/}
	;

idList : idList ',' ID { temp=makeNode($3,"Id");addBrother((treeNode)$1,temp);/*printf("%s  %d\n",$3,$1)*/;$$=$1;}
	|ID {$$=makeNode($1,"Id");/*printf("ID1 %s %d\n",$1,$$);*/}
	;

funcPart : funcPartList ';' {$$=NULL;/*ver depois*/}
	|	{$$=NULL;}
	;

funcPartList : funcPartList ';' funcDeclaration {$$=NULL;/*ver depois*/}
	| funcDeclaration {$$=NULL;/*ver depois*/}
	;

funcDeclaration : funcHeading ';' FORWARD {$$=NULL;/*ver depois*/}
	| funcIdent ';' funcBlock {$$=NULL;/*ver depois*/}
	| funcHeading ';' funcBlock {$$=NULL;/*ver depois*/}
	;

funcHeading : FUNCTION ID ':' ID {$$=NULL;/*ver depois*/}
	| FUNCTION ID formalParamList ':' ID {$$=NULL;/*ver depois*/}
	;

funcIdent : FUNCTION ID {$$=NULL;/*ver depois*/}
	;

formalParamList : '(' formalParamSList ')' {$$=NULL;/*ver depois*/}
	;

formalParamSList :  formalParamSList ';' formalParamS {$$=NULL;/*ver depois*/}
	| formalParamS {$$=NULL;/*ver depois*/}
	;

formalParamS : VAR idList ':' ID {$$=NULL;/*ver depois*/}
	| idList ':' ID {$$=NULL;/*ver depois*/}
	;

funcBlock : varPart statPart {$$=NULL;/*ver depois*/}
	;

statPart : compStat {$$=$1;}
	;

compStat : BEG statList END {$$=makeNode(NULL,"StatList");temp=(treeNode)$$;temp->son=(treeNode)$2;}
	;

statList : statList ';' stat { if($3!=NULL){addBrother((treeNode)$1,(treeNode)$3);$$=$1;}else{$$=$1;}}
	| stat {$$=$1;}
	;

stat : compStat
	| IF expr THEN stat {$$=makeNode(NULL,"IfElse"); temp=(treeNode)$$;temp->son=(treeNode)$2;addBrother((treeNode)$2,(treeNode)$4);}
	| IF expr THEN stat ELSE stat	{$$=makeNode(NULL,"IfElse"); temp=(treeNode)$$;temp->son=(treeNode)$2;addBrother((treeNode)$2,(treeNode)$4);addBrother((treeNode)$2,(treeNode)$6);}
	| WHILE expr DO stat {$$=makeNode(NULL,"While"); temp=(treeNode)$$;temp->son=(treeNode)$2;addBrother((treeNode)$2,(treeNode)$4);}
	| REPEAT statList UNTIL expr {$$=makeNode(NULL,"Repeat"); temp=(treeNode)$$;temp->son=(treeNode)$2;addBrother((treeNode)$2,(treeNode)$4);}
	| VAL '(' PARAMSTR '(' expr ')' ',' ID ')' {$$=makeNode(NULL,"ValParam");addBrother((treeNode)$5,makeNode($8,"Id"));temp=(treeNode)$$;temp->son=(treeNode)$5;}
	| ID ASSIGN expr {$$=makeNode(NULL,"Assign");temp=makeNode($1,"Id");addBrother(temp,(treeNode)$3);((treeNode)$$)->son=temp;}
	| WRITELN {$$=makeNode(NULL,"WriteLn");}
	| WRITELN '(' writelnPList ')'	{$$=makeNode(NULL,"WriteLn");temp=(treeNode)$$;temp->son=(treeNode)$3;}
	| {$$=NULL;}
	;


writelnPList : writelnPList ',' expr {addBrother((treeNode)$1,(treeNode)$3);/*printf("%s  %d\n",$3,$1)*/;$$=$1;}
	| writelnPList ',' STRING { temp=makeNode($3,"String");addBrother((treeNode)$1,temp);/*printf("%s  %d\n",$3,$1)*/;$$=$1;}
	| expr {$$=$1;}
	| STRING {$$=makeNode($1,"String");}
	;

expr : expr '+' expr {$$=makeNode(NULL,"Add"); temp=(treeNode)$$;temp->son=(treeNode)$1; addBrother((treeNode)$1,(treeNode)$3);}
	| expr '-' expr {$$=makeNode(NULL,"Sub"); temp=(treeNode)$$;temp->son=(treeNode)$1; addBrother((treeNode)$1,(treeNode)$3);}
	| expr '*' expr {$$=makeNode(NULL,"Mul"); temp=(treeNode)$$;temp->son=(treeNode)$1; addBrother((treeNode)$1,(treeNode)$3);}
	| expr '/' expr {$$=makeNode(NULL,"Sub"); temp=(treeNode)$$;temp->son=(treeNode)$1; addBrother((treeNode)$1,(treeNode)$3);}
	| expr '>' expr {$$=makeNode(NULL,"Gt"); temp=(treeNode)$$;temp->son=(treeNode)$1; addBrother((treeNode)$1,(treeNode)$3);}
	| expr '<' expr {$$=makeNode(NULL,"Lt"); temp=(treeNode)$$;temp->son=(treeNode)$1; addBrother((treeNode)$1,(treeNode)$3);}
	| expr '=' expr {$$=makeNode(NULL,"Eq"); temp=(treeNode)$$;temp->son=(treeNode)$1; addBrother((treeNode)$1,(treeNode)$3);}
	| expr GOE expr {$$=makeNode(NULL,"Geq"); temp=(treeNode)$$;temp->son=(treeNode)$1; addBrother((treeNode)$1,(treeNode)$3);}
	| expr LOE expr {$$=makeNode(NULL,"Leq"); temp=(treeNode)$$;temp->son=(treeNode)$1; addBrother((treeNode)$1,(treeNode)$3);}
	| expr LG expr {$$=makeNode(NULL,"Neq"); temp=(treeNode)$$;temp->son=(treeNode)$1; addBrother((treeNode)$1,(treeNode)$3);}
	| expr AND expr {$$=makeNode(NULL,"And"); temp=(treeNode)$$;temp->son=(treeNode)$1; addBrother((treeNode)$1,(treeNode)$3);}
	| expr OR expr {$$=makeNode(NULL,"Or"); temp=(treeNode)$$;temp->son=(treeNode)$1; addBrother((treeNode)$1,(treeNode)$3);}
	| expr MOD expr {$$=makeNode(NULL,"Mod"); temp=(treeNode)$$;temp->son=(treeNode)$1; addBrother((treeNode)$1,(treeNode)$3);}
	| expr DIV expr {$$=makeNode(NULL,"RealDiv"); temp=(treeNode)$$;temp->son=(treeNode)$1; addBrother((treeNode)$1,(treeNode)$3);}
	| '-' expr {$$=makeNode(NULL,"Minus"); temp=(treeNode)$$;temp->son=(treeNode)$2; }
	| '+' expr {$$=makeNode(NULL,"Plus"); temp=(treeNode)$$;temp->son=(treeNode)$2;}
	| NOT expr {$$=makeNode(NULL,"Not"); temp=(treeNode)$$;temp->son=(treeNode)$2;}
	| '(' expr ')' {$$=NULL;/*ver depois*/}
	| INTLIT {$$=makeNode($1,"IntLit");}
	| REALLIT {$$=makeNode($1,"RealLit");}
	| ID {$$=makeNode($1,"Id");}
	|ID '('paramList')'{$$=NULL;/*ver depois*/}
	;

paramList : expr ',' expr {$$=NULL;/*ver depois*/}
	| expr {$$=NULL;/*ver depois*/}
	;



%%

int main()
{
yyparse();
return 0;

}


