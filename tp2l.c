/****************************************************************************
*                         A C A D E M I C   C O P Y
* 
* This file was produced by an ACADEMIC COPY of Parser Generator. It is for
* use in non-commercial software only. An ACADEMIC COPY of Parser Generator
* can only be used by a student, or a member of an academic community. If
* however you want to use Parser Generator for commercial purposes then you
* will need to purchase a license. For more information see the online help or
* go to the Bumble-Bee Software homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* tp2l.c
* C source file generated from tp2l.l.
* 
* Date: 02/03/18
* Time: 16:58:39
* 
* ALex Version: 2.07
****************************************************************************/

#include <yylex.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTLEXER

#line 1 ".\\tp2l.l"
  
    
	#include <stdio.h>
	#include <stdlib.h>	
	#include <ctype.h>
    #include <math.h>
	#include "tp.h"
	

#line 49 "tp2l.c"
/* repeated because of possible precompiled header */
#include <yylex.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTLEXER

#include ".\tp2l.h"

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/* yytext */
static char YYNEAR yysatext[(YYTEXT_SIZE) + 1];		/* extra char for \0 */
char YYFAR *YYNEAR YYDCDECL yystext = yysatext;
char YYFAR *YYNEAR YYDCDECL yytext = yysatext;
int YYNEAR YYDCDECL yystext_size = (YYTEXT_SIZE);
int YYNEAR YYDCDECL yytext_size = (YYTEXT_SIZE);
int YYNEAR YYDCDECL yytext_max = (YYTEXT_MAX);

/* yystatebuf */
#if (YYTEXT_SIZE) != 0
static int YYNEAR yysastatebuf[(YYTEXT_SIZE)];
int YYFAR *YYNEAR YYDCDECL yysstatebuf = yysastatebuf;
int YYFAR *YYNEAR YYDCDECL yystatebuf = yysastatebuf;
#else
int YYFAR *YYNEAR YYDCDECL yysstatebuf = NULL;
int YYFAR *YYNEAR YYDCDECL yystatebuf = NULL;
#endif

/* yyunputbuf */
#if (YYUNPUT_SIZE) != 0
static int YYNEAR yysaunputbuf[(YYUNPUT_SIZE)];
int YYFAR *YYNEAR YYDCDECL yysunputbufptr = yysaunputbuf;
int YYFAR *YYNEAR YYDCDECL yyunputbufptr = yysaunputbuf;
#else
int YYFAR *YYNEAR YYDCDECL yysunputbufptr = NULL;
int YYFAR *YYNEAR YYDCDECL yyunputbufptr = NULL;
#endif
int YYNEAR YYDCDECL yysunput_size = (YYUNPUT_SIZE);
int YYNEAR YYDCDECL yyunput_size = (YYUNPUT_SIZE);
int YYNEAR YYDCDECL yyunput_max = (YYUNPUT_MAX);

/* backwards compatability with lex */
#ifdef input
#ifdef YYPROTOTYPE
int YYCDECL yyinput(void)
#else
int YYCDECL yyinput()
#endif
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
#ifdef YYPROTOTYPE
void YYCDECL yyoutput(int ch)
#else
void YYCDECL yyoutput(ch)
int ch;
#endif
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
#ifdef YYPROTOTYPE
void YYCDECL yyunput(int ch)
#else
void YYCDECL yyunput(ch)
int ch;
#endif
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		/* <warning: unreachable code> off */
#endif
#endif

#ifdef YYPROTOTYPE
int YYCDECL yylexeraction(int action)
#else
int YYCDECL yylexeraction(action)
int action;
#endif
{
	yyreturnflg = YYTRUE;
	switch (action) {
	case 1:
		{
#line 12 ".\\tp2l.l"
 yylval.val = atof(yytext);

            return chiffre;
#line 172 "tp2l.c"
		}
		break;
#line 15 ".\\tp2l.l"
            
#line 177 "tp2l.c"
	case 2:
		{
#line 16 ".\\tp2l.l"
yylval.Fonction=1; return nf;
#line 182 "tp2l.c"
		}
		break;
	case 3:
		{
#line 17 ".\\tp2l.l"
yylval.Fonction=2; return nf;
#line 189 "tp2l.c"
		}
		break;
	case 4:
		{
#line 18 ".\\tp2l.l"
yylval.Fonction=3; return nf;
#line 196 "tp2l.c"
		}
		break;
	case 5:
		{
#line 19 ".\\tp2l.l"
yylval.Fonction=4; return nf;
#line 203 "tp2l.c"
		}
		break;
	case 6:
		{
#line 20 ".\\tp2l.l"
yylval.Fonction=5; return nf;
#line 210 "tp2l.c"
		}
		break;
	case 7:
		{
#line 21 ".\\tp2l.l"
yylval.Fonction=6; return nf;
#line 217 "tp2l.c"
		}
		break;
	case 8:
		{
#line 22 ".\\tp2l.l"
yylval.Fonction=7; return nf;
#line 224 "tp2l.c"
		}
		break;
	case 9:
		{
#line 23 ".\\tp2l.l"
yylval.Fonction=8; return nf;
#line 231 "tp2l.c"
		}
		break;
	case 10:
		{
#line 25 ".\\tp2l.l"
yylval.Fonction=9; return nf;
#line 238 "tp2l.c"
		}
		break;
	case 11:
		{
#line 26 ".\\tp2l.l"
yylval.Fonction=10; return nf;
#line 245 "tp2l.c"
		}
		break;
	case 12:
		{
#line 27 ".\\tp2l.l"
yylval.Fonction=11; return nf;
#line 252 "tp2l.c"
		}
		break;
	case 13:
		{
#line 28 ".\\tp2l.l"
yylval.Fonction=12; return nf;
#line 259 "tp2l.c"
		}
		break;
	case 14:
		{
#line 29 ".\\tp2l.l"
yylval.Fonction=13; return nf;
#line 266 "tp2l.c"
		}
		break;
	case 15:
		{
#line 30 ".\\tp2l.l"
yylval.Fonction=14; return nf;
#line 273 "tp2l.c"
		}
		break;
	case 16:
		{
#line 31 ".\\tp2l.l"
yylval.Fonction=15; return nf;
#line 280 "tp2l.c"
		}
		break;
	case 17:
		{
#line 33 ".\\tp2l.l"
 return(yytext[0]);
#line 287 "tp2l.c"
		}
		break;
#line 34 ".\\tp2l.l"
          
#line 292 "tp2l.c"
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = YYFALSE;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		/* <warning: unreachable code> to the old state */
#endif
#endif
YYCONST yymatch_t YYNEARFAR YYBASED_CODE YYDCDECL yymatch[] = {
	0
};

int YYNEAR YYDCDECL yytransitionmax = 85;
YYCONST yytransition_t YYNEARFAR YYBASED_CODE YYDCDECL yytransition[] = {
	{ 0, 0 },
	{ 4, 1 },
	{ 26, 16 },
	{ 5, 1 },
	{ 5, 1 },
	{ 5, 1 },
	{ 5, 1 },
	{ 5, 1 },
	{ 5, 1 },
	{ 5, 1 },
	{ 5, 1 },
	{ 5, 1 },
	{ 5, 1 },
	{ 17, 8 },
	{ 49, 43 },
	{ 24, 14 },
	{ 38, 32 },
	{ 14, 6 },
	{ 25, 15 },
	{ 27, 16 },
	{ 21, 10 },
	{ 18, 8 },
	{ 16, 7 },
	{ 50, 43 },
	{ 39, 32 },
	{ 15, 6 },
	{ 22, 10 },
	{ 19, 8 },
	{ 28, 17 },
	{ 29, 18 },
	{ 30, 19 },
	{ 13, 5 },
	{ 6, 1 },
	{ 5, 5 },
	{ 5, 5 },
	{ 5, 5 },
	{ 5, 5 },
	{ 5, 5 },
	{ 5, 5 },
	{ 5, 5 },
	{ 5, 5 },
	{ 5, 5 },
	{ 5, 5 },
	{ 12, 13 },
	{ 12, 13 },
	{ 12, 13 },
	{ 12, 13 },
	{ 12, 13 },
	{ 12, 13 },
	{ 12, 13 },
	{ 12, 13 },
	{ 12, 13 },
	{ 12, 13 },
	{ 31, 20 },
	{ 32, 22 },
	{ 33, 23 },
	{ 7, 1 },
	{ 34, 26 },
	{ 35, 27 },
	{ 36, 30 },
	{ 37, 31 },
	{ 23, 11 },
	{ 40, 33 },
	{ 41, 34 },
	{ 8, 1 },
	{ 42, 35 },
	{ 43, 36 },
	{ 9, 1 },
	{ 44, 37 },
	{ 45, 39 },
	{ 10, 1 },
	{ 46, 40 },
	{ 47, 41 },
	{ 11, 1 },
	{ 48, 42 },
	{ 20, 9 },
	{ 51, 44 },
	{ 52, 46 },
	{ 53, 47 },
	{ 54, 48 },
	{ 55, 50 },
	{ 56, 51 },
	{ 57, 52 },
	{ 58, 53 },
	{ 59, 57 }
};

YYCONST yystate_t YYNEARFAR YYBASED_CODE YYDCDECL yystate[] = {
	{ 0, 0, 0 },
	{ -3, -45, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 17 },
	{ 13, 0, 17 },
	{ 0, -15, 1 },
	{ 0, -80, 17 },
	{ 0, -77, 17 },
	{ 0, -84, 17 },
	{ 0, -39, 17 },
	{ 0, -85, 17 },
	{ 0, -36, 17 },
	{ 13, 0, 1 },
	{ 0, -5, 0 },
	{ 0, -105, 0 },
	{ 0, -92, 0 },
	{ 0, -95, 0 },
	{ 0, -92, 0 },
	{ 0, -81, 0 },
	{ 0, -91, 0 },
	{ 0, -58, 0 },
	{ 0, 0, 8 },
	{ 0, -55, 0 },
	{ 0, -59, 0 },
	{ 0, 0, 13 },
	{ 0, 0, 12 },
	{ 0, -57, 0 },
	{ 0, -26, 0 },
	{ 0, 0, 5 },
	{ 0, 0, 4 },
	{ 0, -42, 0 },
	{ 0, -40, 0 },
	{ 0, -85, 0 },
	{ 0, -43, 0 },
	{ 0, -53, 0 },
	{ 0, -56, 0 },
	{ 0, -44, 0 },
	{ 0, -49, 0 },
	{ 0, 0, 11 },
	{ 0, -32, 0 },
	{ 0, -26, 0 },
	{ 0, -49, 0 },
	{ 0, -38, 0 },
	{ 0, -87, 0 },
	{ 0, -29, 0 },
	{ 0, 0, 2 },
	{ 0, -33, 0 },
	{ 0, -34, 0 },
	{ 0, -22, 0 },
	{ 0, 0, 16 },
	{ 0, -21, 0 },
	{ 0, -35, 10 },
	{ 0, -17, 0 },
	{ 0, -18, 0 },
	{ 0, 0, 7 },
	{ 0, 0, 3 },
	{ 0, 0, 9 },
	{ 0, -17, 14 },
	{ 0, 0, 15 },
	{ 0, 0, 6 }
};

YYCONST yybackup_t YYNEARFAR YYBASED_CODE YYDCDECL yybackup[] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

#line 35 ".\\tp2l.l"



