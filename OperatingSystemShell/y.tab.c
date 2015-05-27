/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20141128

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "sistemDeOperare.y"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
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
#line 19 "sistemDeOperare.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	char* stringValue;
	int intValue;
	strComanda valoareStructurata;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 50 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define COMANDA0OP 257
#define COMANDA1OP 258
#define COMANDA2OP 259
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    2,    1,    1,    1,    1,    1,    1,
};
static const YYINT yylen[] = {                            2,
    2,    0,    2,    1,    1,    1,    3,    3,    3,
};
static const YYINT yydefred[] = {                         2,
    0,    4,    5,    6,    0,    1,    0,    0,    0,    3,
    0,    0,    7,
};
static const YYINT yydgoto[] = {                          1,
    5,    6,
};
static const YYINT yysindex[] = {                         0,
 -245,    0,    0,    0,  -59,    0, -245, -245, -245,    0,
 -122, -122,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -55,  -51,    0,
};
static const YYINT yygindex[] = {                         0,
    8,    0,
};
#define YYTABLESIZE 65
static const YYINT yytable[] = {                         10,
    8,    9,    7,    8,    8,    0,    8,    9,    9,    0,
    9,    2,    3,    4,   11,   12,   13,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    9,
};
static const YYINT yycheck[] = {                         59,
   60,  124,   62,   59,   60,   -1,   62,   59,   60,   -1,
   62,  257,  258,  259,    7,    8,    9,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  124,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 259
#define YYUNDFTOKEN 264
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"';'","'<'",0,"'>'",0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'|'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"COMANDA0OP",
"COMANDA1OP","COMANDA2OP",0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : program statement",
"program :",
"statement : expression ';'",
"expression : COMANDA0OP",
"expression : COMANDA1OP",
"expression : COMANDA2OP",
"expression : expression '|' expression",
"expression : expression '>' expression",
"expression : expression '<' expression",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 80 "sistemDeOperare.y"
strComanda grep(strComanda a, strComanda b)
{

}

strComanda STDIN(strComanda a, strComanda b)
{

}

strComanda STDOUT(strComanda a, strComanda b)
{

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
#line 421 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 35 "sistemDeOperare.y"
	{ }
break;
case 3:
#line 39 "sistemDeOperare.y"
	{
							/*printf("COMMAND CALL %s\n", $1.comanda);*/
						  }
break;
case 4:
#line 44 "sistemDeOperare.y"
	{
					/*printf("Identify cmd0op. \n");*/
					yyval.valoareStructurata = getValoareaStructurata(yystack.l_mark[0].stringValue);
					/*printf("Command0OP: %s \n", $1);*/
					printf("\n=>");
				    }
break;
case 5:
#line 51 "sistemDeOperare.y"
	{
					/*printf("Identify cmd1op. \n");*/
					yyval.valoareStructurata = getValoareaStructurata(yystack.l_mark[0].stringValue);
					/*printf("Command1OP: %s \n", $1);*/
					printf("\n=>");
				    }
break;
case 6:
#line 58 "sistemDeOperare.y"
	{
					/*printf("Identify cmd2op. \n");*/
					yyval.valoareStructurata = getValoareaStructurata(yystack.l_mark[0].stringValue);
					/*printf("Command2OP: %s \n", $1);*/
					printf("\n=>");
				    }
break;
case 7:
#line 65 "sistemDeOperare.y"
	{
					yyval.valoareStructurata = grep(yystack.l_mark[-2].valoareStructurata, yystack.l_mark[0].valoareStructurata); 
				     }
break;
case 8:
#line 69 "sistemDeOperare.y"
	{
					yyval.valoareStructurata = STDOUT(yystack.l_mark[-2].valoareStructurata, yystack.l_mark[0].valoareStructurata);
				    }
break;
case 9:
#line 73 "sistemDeOperare.y"
	{
					yyval.valoareStructurata = STDIN(yystack.l_mark[-2].valoareStructurata, yystack.l_mark[0].valoareStructurata);
				    }
break;
#line 678 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
