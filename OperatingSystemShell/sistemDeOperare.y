%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h> 
#define PIPE_RD 0
#define PIPE_WR 1
typedef struct {
	char comanda[300];
	char operand1[300];
	char operand2[300];
}strComanda;
#include "y.tab.h"

strComanda getValoareaStructurata(char* stringValue);
strComanda grep(strComanda c, strComanda o);
strComanda STDIN(strComanda c, strComanda o);
strComanda STDOUT(strComanda c, strComanda o);
%}

%union {
	char* stringValue;
	int intValue;
	strComanda valoareStructurata;
};

%token <stringValue> COMANDA0OP
%token <stringValue> COMANDA1OP
%token <stringValue> COMANDA2OP
%type <valoareStructurata> expression
%type <valoareStructurata> statement

%left '>' '<'
%left '|'
%%

program : program statement { }
	|
	;

statement: expression ';' {
							//printf("COMMAND CALL %s\n", $1.comanda);
						  }
	; 
expression: 
	COMANDA0OP		    {
					//printf("Identify cmd0op. \n");
					$$ = getValoareaStructurata($1);
					//printf("Command0OP: %s \n", $1);
					printf("\n=>");
				    }
				    
	| COMANDA1OP		    {
					//printf("Identify cmd1op. \n");
					$$ = getValoareaStructurata($1);
					//printf("Command1OP: %s \n", $1);
					printf("\n=>");
				    }
				    
	|  COMANDA2OP		    {
					//printf("Identify cmd2op. \n");
					$$ = getValoareaStructurata($1);
					//printf("Command2OP: %s \n", $1);
					printf("\n=>");
				    }
				    
	| expression '|' expression {
					$$ = grep($1, $3); 
				     }
	;


%%


strComanda grep(strComanda a, strComanda b)
{
  int     pipes[2];
  pid_t   p1, p2;
 
//printf("A Com %s",a.comanda);
//printf("B Com %s",b.comanda);

if (	(strcmp(a.comanda,"ls")==0)	&&	(strcmp(b.comanda,"find")==0) )
{
  pipe(pipes);
  p1 = fork();
  if ( p1 == 0 ) {
    // wc reading
    char  *cmd[] = { "find","-name",b.operand1, NULL };
    close( STDIN_FILENO );
    dup( pipes[PIPE_RD] );
    close( pipes[PIPE_WR] );
    execvp( cmd[0], cmd );
  }
  if ( p1 != 0 ) {
    p2 = fork();
    if ( p2 == 0 ) {
      // ls writing
      char  *cmd[] = { "ls", NULL };
      close( STDOUT_FILENO );
      dup( pipes[PIPE_WR] );
      close( pipes[PIPE_RD] );
      execvp( cmd[0], cmd );
    }
  }
}

if (	(strcmp(a.comanda,"ps")==0)	&&	(strcmp(b.comanda,"grep")==0) )
{
  pipe(pipes);
  p1 = fork();
  if ( p1 == 0 ) {
    // wc reading
    char  *cmd[] = { "grep", b.operand1, NULL };
    close( STDIN_FILENO );
    dup( pipes[PIPE_RD] );
    close( pipes[PIPE_WR] );
    execvp( cmd[0], cmd );
  }
  if ( p1 != 0 ) {
    p2 = fork();
    if ( p2 == 0 ) {
      // ls writing
      char  *cmd[] = { "ps", "aux", NULL };
      close( STDOUT_FILENO );
      dup( pipes[PIPE_WR] );
      close( pipes[PIPE_RD] );
      execvp( cmd[0], cmd );
    }
  }
}

/*
if (	(strcmp(a.comanda,"cat")==0)	&&	(strcmp(b.comanda,"more")==0) )
{
  pipe(pipes);
  p1 = fork();
  if ( p1 == 0 ) {
    // wc reading
    char  *cmd[] = { "more", NULL };
    close( STDIN_FILENO );
    dup( pipes[PIPE_RD] );
    close( pipes[PIPE_WR] );
    execvp( cmd[0], cmd );
  }
  if ( p1 != 0 ) {
    p2 = fork();
    if ( p2 == 0 ) {
      // ls writing
      char  *cmd[] = { "cat", a.operand1, NULL };
      close( STDOUT_FILENO );
      dup( pipes[PIPE_WR] );
      close( pipes[PIPE_RD] );
      execvp( cmd[0], cmd );
    }
  }
}
*/

}

void interpretCommand0OP(char* getCommand)
{
	int isInList = 0;
	if (strcmp(getCommand,"pwd")==0)
	{	
		isInList++;
 		execlp("pwd", "pwd", (char *)NULL);
	}
	if (strcmp(getCommand,"pstree")==0)
	{
		isInList++;
 		execlp("pstree", "pstree", (char *)NULL);
	}
	if (strcmp(getCommand,"lsblk")==0)
	{
		isInList++;
 		execlp("lsblk", "lsblk", (char *)NULL);
	}
	if (strcmp(getCommand,"uname")==0)
	{
		isInList++;
 		execlp("uname", "uname", (char *)NULL);
	}
	if (strcmp(getCommand,"history")==0)
	{
		isInList++;
 		execlp("history", "history", (char *)NULL);
	}
	if (strcmp(getCommand,"ls")==0)
	{
		isInList++;
 		execlp("ls", "ls", (char *)NULL);
	}
	if (strcmp(getCommand,"cal")==0)
	{
		isInList++;
 		execlp("cal", "cal", (char *)NULL);
	}
	if (strcmp(getCommand,"nano")==0)
	{
		isInList++;
 		execlp("nano", "nano", (char *)NULL);
	}
	if (strcmp(getCommand,"exit")==0)
	{
		isInList++;
 		execlp("poweroff", "poweroff", (char *)NULL);
	}
	if (strcmp(getCommand,"clear")==0)
	{
		isInList++;
 		execlp("clear", "clear", (char *)NULL);
	}
	if( isInList == 0) {
		execlp("clear", "clear", (char *)NULL);
		printf("Unknown Command! \n");
	}
}

void interpretCommand1OP(char* getCommand, char* operand1)
{
	int isInList = 0;
	if (strcmp(getCommand,"mkdir")==0)
	{	
		isInList++;
 		execlp("mkdir", "mkdir", operand1 ,(char *)NULL);
	}
	if (strcmp(getCommand,"rmdir")==0)
	{	
		isInList++;
 		execlp("rmdir", "rmdir", operand1 ,(char *)NULL);
	}
	if (strcmp(getCommand,"cat")==0)
	{	
		isInList++;
 		execlp("cat", "cat", operand1 ,(char *)NULL);
	}
	if (strcmp(getCommand,"rm")==0)
	{	
		isInList++;
 		execlp("rm", "rm", operand1 ,(char *)NULL);
	}
	if (strcmp(getCommand,"touch")==0)
	{	
		isInList++;
 		execlp("touch", "touch", operand1 ,(char *)NULL);
	}
	if (strcmp(getCommand,"nano")==0)
	{
		isInList++;
 		execlp("nano", "nano", operand1 ,(char *)NULL);
	}
	if (strcmp(getCommand,"echo")==0)
	{
		isInList++;
 		execlp("echo", "echo", operand1 ,(char *)NULL);
	}
	if( isInList == 0) {
		execlp("clear", "clear", (char *)NULL);
		printf("Unknown Command! \n");
	}
	/*
	if (strcmp(getCommand,"ls")==0)
	{	
		char operandProcessed[300];
		char* options;
		strcpy(operandProcessed,operand1);
		memmove(operandProcessed, operandProcessed+1, strlen(operandProcessed));
		options = strcat("-",operandProcessed);
 		execlp("ls", "ls", options, (char *)NULL);
	}
	*/
}

void interpretCommand2OP(char* getCommand,char* operand1, char* operand2)
{
	int isInList = 0;
	if (strcmp(getCommand,"cp")==0)
	{	
		isInList++;
 		execlp("cp", "cp", operand1, operand2, (char *)NULL);
	}
	if (strcmp(getCommand,"chmod")==0)
	{	
		isInList++;
 		execlp("chmod", "chmod", operand1, operand2, (char *)NULL);
	}
	if( isInList == 0) {
		execlp("clear", "clear", (char *)NULL);
		printf("Unknown Command! \n");
	}
}

strComanda getValoareaStructurata(char* stringValue)
{
	strComanda get;
	//pid_t pid = fork();
	char getString[900];
	int spaceCounter = 0;
	int i =0;
	int pid = 0;
	pid= fork();

	memset(getString,0,900);
	//memcpy(getString,stringValue,sizeof(getString));
	strcpy(getString,stringValue);
	
	//printf("StringValue value is: %s \n", getString);
	
	int lengthOfGetString = strlen(getString);
	//printf("Getted string length: %d \n",lengthOfGetString);
	
	for (i=0; i < lengthOfGetString ;i++)
	{
		if (getString[i] == ' ') spaceCounter++;
		//printf("VALUE: %s \n",getString[i]);
	}
	
	//printf("Counted Space Caracters: %d \n",spaceCounter);
	
	sscanf(stringValue, "%s", &get.comanda);
	
	switch (spaceCounter)
	{
	case 0:
		sscanf(stringValue, "%s", &get.comanda);
		//printf("Getted command in switch search is: %s \n", get.comanda);
		
		if (pid == 0 )
		{
			interpretCommand0OP(get.comanda);
		}
	break;
	case 1:
		sscanf(stringValue, "%s %s", &get.comanda, &get.operand1);
		//printf("Getted command in switch search is: %s and first operand is: %s \n", get.comanda, get.operand1);
		
		if (pid == 0 )
		{
			interpretCommand1OP(get.comanda, get.operand1);
		}
	break;
	case 2:
		sscanf(stringValue, "%s %s %s", &get.comanda, &get.operand1, &get.operand2);
		//printf("Getted command in switch search is: %s the first operand is: %s and the second operand is: %s \n", get.comanda, get.operand1,get.operand2);
		
		if (pid == 0 )
		{
			interpretCommand2OP(get.comanda, get.operand1,get.operand2);
		}
	break;
	}
	
	return get;
}

void yyerror(char *s)
{
	printf("Error! \n");
	return;
}

int main(void)
{
	yyparse();
	return 0;
}