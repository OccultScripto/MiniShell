%{
#include <stdio.h>
typedef struct {
	char comanda[100];
	char operand[100];
} strComanda;
#include "y.tab.h"
void yyerror(char*);
%}

item [A-Za-z0-9.]*

%%
{item}		{
		yylval.stringValue = yytext; 
		return COMANDA0OP;
	      	}

{item}" "{item} {
		yylval.stringValue = yytext; 
		return COMANDA1OP;
	      }

{item}" "{item}" "{item} {
		yylval.stringValue = yytext; 
		return COMANDA2OP;
	      }

[|><;.]	{return *yytext;}

'\n'	{return *yytext;}

.	{}
%%

int yywrap(void)
{
    return 1;
}