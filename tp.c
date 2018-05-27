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
* tp.c
* C source file generated from tp.y.
* 
* Date: 02/03/18
* Time: 21:59:37
* 
* AYACC Version: 2.07
****************************************************************************/

#include <yypars.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTPARSER

#line 1 ".\\tp.y"

#pragma warning(disable:4996)
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include "tp2l.h"
#define MAX(a,b) ((a) > (b) ? a : b)
#define MIN(a,b) ((a) < (b) ? a : b)
/** Déclaration des fonctions **/
float returnd=0;
char *  erreur="";
int test=0;
void yyerror(const char * s);
void delay(unsigned int mseconds);
float Somme( float values[10],int taille);
float EcarType( float values[10],int taille);
float Min(float values[10],int taille);
float Max( float values[10],int taille);
float Moyenne( float values[10],int taille);
float Variance( float values[10],int taille);
float SI( float values[10],int testt);
float Produit( float values[10],int taille);

#line 64 "tp.c"
/* repeated because of possible precompiled header */
#include <yypars.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTPARSER

#include ".\tp.h"

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYSTACK_SIZE
#define YYSTACK_SIZE 100
#endif
#ifndef YYSTACK_MAX
#define YYSTACK_MAX 0
#endif

/* (state) stack */
#if (YYSTACK_SIZE) != 0
static yystack_t YYNEAR yystack[(YYSTACK_SIZE)];
yystack_t YYFAR *YYNEAR YYDCDECL yysstackptr = yystack;
yystack_t YYFAR *YYNEAR YYDCDECL yystackptr = yystack;
#else
yystack_t YYFAR *YYNEAR YYDCDECL yysstackptr = NULL;
yystack_t YYFAR *YYNEAR YYDCDECL yystackptr = NULL;
#endif

/* attribute stack */
#if (YYSTACK_SIZE) != 0
static YYSTYPE YYNEAR yyattributestack[(YYSTACK_SIZE)];
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yysattributestackptr = yyattributestack;
void YYFAR *YYNEAR YYDCDECL yyattributestackptr = yyattributestack;
#else
char YYFAR *YYNEAR YYDCDECL yysattributestackptr = (char YYFAR *) yyattributestack;
char YYFAR *YYNEAR YYDCDECL yyattributestackptr = (char YYFAR *) yyattributestack;
#endif
#else
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yysattributestackptr = NULL;
void YYFAR *YYNEAR YYDCDECL yyattributestackptr = NULL;
#else
char YYFAR *YYNEAR YYDCDECL yysattributestackptr = NULL;
char YYFAR *YYNEAR YYDCDECL yyattributestackptr = NULL;
#endif
#endif

int YYNEAR YYDCDECL yysstack_size = (YYSTACK_SIZE);
int YYNEAR YYDCDECL yystack_size = (YYSTACK_SIZE);
int YYNEAR YYDCDECL yystack_max = (YYSTACK_MAX);

/* attributes */
YYSTYPE YYNEAR yyval;
YYSTYPE YYNEAR yylval;
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yyvalptr = &yyval;
void YYFAR *YYNEAR YYDCDECL yylvalptr = &yylval;
#else
char YYFAR *YYNEAR YYDCDECL yyvalptr = (char *) &yyval;
char YYFAR *YYNEAR YYDCDECL yylvalptr = (char *) &yylval;
#endif

size_t YYNEAR YYDCDECL yyattribute_size = sizeof(YYSTYPE);

/* yyattribute */
#ifdef YYDEBUG
#ifdef YYPROTOTYPE
static YYSTYPE YYFAR *yyattribute1(int index)
#else
static YYSTYPE YYFAR *yyattribute1(index)
int index;
#endif
{
	YYSTYPE YYFAR *p = &((YYSTYPE YYFAR *) yyattributestackptr)[yytop + index];
	return p;
}
#define yyattribute(index) (*yyattribute1(index))
#else
#define yyattribute(index) (((YYSTYPE YYFAR *) yyattributestackptr)[yytop + (index)])
#endif

#ifdef YYDEBUG
#ifdef YYPROTOTYPE
static void yyinitdebug(YYSTYPE YYFAR **p, int count)
#else
static void yyinitdebug(p, count)
YYSTYPE YYFAR **p;
int count;
#endif
{
	int i;
	yyassert(p != NULL);
	yyassert(count >= 1);

	for (i = 0; i < count; i++) {
		p[i] = &((YYSTYPE YYFAR *) yyattributestackptr)[yytop + i - (count - 1)];
	}
}
#endif

#ifdef YYPROTOTYPE
void YYCDECL yyparseraction(int action)
#else
void YYCDECL yyparseraction(action)
int action;
#endif
{
	switch (action) {
	case 0:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 50 ".\\tp.y"
 printf("Calcule effectue, Resultat: %f \n", yyattribute(1 - 2).val); 
#line 190 "tp.c"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 52 ".\\tp.y"
 yyval.val = yyattribute(1 - 3).val + yyattribute(3 - 3).val; 
#line 203 "tp.c"
			}
		}
		break;
	case 2:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 53 ".\\tp.y"
 yyval.val = yyattribute(1 - 3).val - yyattribute(3 - 3).val; 
#line 216 "tp.c"
			}
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 54 ".\\tp.y"
 yyval.val = yyattribute(1 - 3).val * yyattribute(3 - 3).val; 
#line 229 "tp.c"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 55 ".\\tp.y"
 yyval.val = yyattribute(1 - 3).val / yyattribute(3 - 3).val; 
#line 242 "tp.c"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 56 ".\\tp.y"
 yyval.val =pow(yyattribute(1 - 3).val,yyattribute(3 - 3).val);
#line 255 "tp.c"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 57 ".\\tp.y"
 yyval.val = yyattribute(2 - 3).val; 
#line 268 "tp.c"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 58 ".\\tp.y"
 yyval.val = -yyattribute(2 - 2).val; 
#line 281 "tp.c"
			}
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 59 ".\\tp.y"
 yyval.val = yyattribute(1 - 1).val; 
#line 294 "tp.c"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 60 ".\\tp.y"
 yyval.val = yyattribute(1 - 1).val; 
#line 307 "tp.c"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 61 ".\\tp.y"
 yyval.val=0;if(yyattribute(1 - 3).val>yyattribute(3 - 3).val) test=1;else test=0; 
#line 320 "tp.c"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 62 ".\\tp.y"
 yyval.val=0;if(yyattribute(1 - 3).val<yyattribute(3 - 3).val) test=0;else test=1;
#line 333 "tp.c"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 63 ".\\tp.y"
 yyval.val=0;if(yyattribute(1 - 3).val==yyattribute(3 - 3).val) test=1;else test=0;
#line 346 "tp.c"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 65 ".\\tp.y"

 switch(yyattribute(1 - 4).Fonction)
        {
          case 1:
                yyval.val=Somme(yyattribute(3 - 4).List.TFval,yyattribute(3 - 4).List.index);                       
          break;
          case 2:
               yyval.val=Moyenne(yyattribute(3 - 4).List.TFval,yyattribute(3 - 4).List.index); 
          break;
          case 3:
               yyval.val=Min(yyattribute(3 - 4).List.TFval,yyattribute(3 - 4).List.index);    
          break;
          case 4:              
               yyval.val=Max(yyattribute(3 - 4).List.TFval,yyattribute(3 - 4).List.index); 
          break;
          case 5:
              yyval.val=Variance(yyattribute(3 - 4).List.TFval,yyattribute(3 - 4).List.index); 
          break;
          case 6:
              yyval.val=EcarType(yyattribute(3 - 4).List.TFval,yyattribute(3 - 4).List.index); 
          break;
          case 7:
              yyval.val=SI(yyattribute(3 - 4).List.TFval,test); 
          break;
            case 8:
              yyval.val=Produit(yyattribute(3 - 4).List.TFval,yyattribute(3 - 4).List.index); 
          break;
           case 9:
             erreur=strdup("Nom de fonction faux, voulez vous dire produit?"); yyerror("");
             
          break; case 10:
          erreur=strdup("Nom de fonction faux, voulez vous dire somme?"); yyerror("");
          break; case 11:
              erreur=strdup("Nom de fonction faux, voulez vous dire min?"); yyerror("");
             
          break;
            break; case 12:
              erreur=strdup("Nom de fonction faux, voulez vous dire max?"); yyerror("");
             
          break;
           case 13:
         erreur=strdup("Nom de fonction faux, voulez vous dire variance?"); yyerror(""); 
             
          break;
           case 14:
              erreur=strdup("Nom de fonction faux, voulez vous dire ecarType?"); yyerror("");
          break;
           case 15:
              erreur=strdup("Nom de fonction faux, voulez vous dire moyenne?"); yyerror("");
          break;
        }
       

#line 411 "tp.c"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 118 ".\\tp.y"
 erreur=strdup("Parenthese fermante manquante"); yyerror("");
#line 424 "tp.c"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 119 ".\\tp.y"
 erreur=strdup("Parenthese ouvrante manquante"); yyerror("");
#line 437 "tp.c"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 121 ".\\tp.y"
yyval.Fonction=yyattribute(1 - 1).Fonction;
#line 450 "tp.c"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 123 ".\\tp.y"
int i;
                        
                          for(i=0;i<yyattribute(1 - 3).List.index;i++)
                              {
                                yyval.List.TFval[i]=yyattribute(1 - 3).List.TFval[i];
                                
                              }
                              yyval.List.index=yyattribute(1 - 3).List.index;
                    
            yyval.List.TFval[yyval.List.index]=yyattribute(3 - 3).val;  yyval.List.index=yyval.List.index+1;
#line 472 "tp.c"
			}
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 133 ".\\tp.y"
yyval.List.index=0;yyval.List.TFval[0]=yyattribute(1 - 1).val; yyval.List.index=1; 
#line 485 "tp.c"
			}
		}
		break;
	default:
		yyassert(0);
		break;
	}
}
#ifdef YYDEBUG
YYCONST yysymbol_t YYNEARFAR YYBASED_CODE YYDCDECL yysymbol[] = {
	{ "$end", 0 },
	{ "\'\\n\'", 10 },
	{ "\'(\'", 40 },
	{ "\')\'", 41 },
	{ "\'*\'", 42 },
	{ "\'+\'", 43 },
	{ "\',\'", 44 },
	{ "\'-\'", 45 },
	{ "\'/\'", 47 },
	{ "\'<\'", 60 },
	{ "\'=\'", 61 },
	{ "\'>\'", 62 },
	{ "\'^\'", 94 },
	{ "error", 256 },
	{ "chiffre", 257 },
	{ "nf", 258 },
	{ "mu", 259 },
	{ NULL, 0 }
};

YYCONST char *YYCONST YYNEARFAR YYBASED_CODE YYDCDECL yyrule[] = {
	"$accept: Ligne",
	"Ligne: E \'\\n\'",
	"E: E \'+\' E",
	"E: E \'-\' E",
	"E: E \'*\' E",
	"E: E \'/\' E",
	"E: E \'^\' E",
	"E: \'(\' E \')\'",
	"E: \'-\' E",
	"E: chiffre",
	"E: Fonct",
	"E: E \'>\' E",
	"E: E \'<\' E",
	"E: E \'=\' E",
	"Fonct: NomFunction \'(\' L \')\'",
	"Fonct: NomFunction \'(\' L",
	"Fonct: NomFunction L \')\'",
	"NomFunction: nf",
	"L: L \',\' E",
	"L: E"
};
#endif

YYCONST yyreduction_t YYNEARFAR YYBASED_CODE YYDCDECL yyreduction[] = {
	{ 0, 1, -1 },
	{ 1, 2, 0 },
	{ 2, 3, 1 },
	{ 2, 3, 2 },
	{ 2, 3, 3 },
	{ 2, 3, 4 },
	{ 2, 3, 5 },
	{ 2, 3, 6 },
	{ 2, 2, 7 },
	{ 2, 1, 8 },
	{ 2, 1, 9 },
	{ 2, 3, 10 },
	{ 2, 3, 11 },
	{ 2, 3, 12 },
	{ 3, 4, 13 },
	{ 3, 3, 14 },
	{ 3, 3, 15 },
	{ 4, 1, 16 },
	{ 5, 3, 17 },
	{ 5, 1, 18 }
};

int YYNEAR YYDCDECL yytokenaction_size = 219;
YYCONST yytokenaction_t YYNEARFAR YYBASED_CODE YYDCDECL yytokenaction[] = {
	{ 27, YYAT_SHIFT, 1 },
	{ 35, YYAT_SHIFT, 22 },
	{ 25, YYAT_SHIFT, 23 },
	{ 25, YYAT_SHIFT, 15 },
	{ 25, YYAT_SHIFT, 16 },
	{ 27, YYAT_SHIFT, 2 },
	{ 25, YYAT_SHIFT, 17 },
	{ 30, YYAT_SHIFT, 15 },
	{ 25, YYAT_SHIFT, 18 },
	{ 9, YYAT_SHIFT, 23 },
	{ 9, YYAT_SHIFT, 15 },
	{ 9, YYAT_SHIFT, 16 },
	{ 30, YYAT_SHIFT, 18 },
	{ 9, YYAT_SHIFT, 17 },
	{ 34, YYAT_SHIFT, 22 },
	{ 9, YYAT_SHIFT, 18 },
	{ 24, YYAT_SHIFT, 36 },
	{ 6, YYAT_SHIFT, 14 },
	{ 33, YYAT_SHIFT, 22 },
	{ 24, YYAT_SHIFT, 27 },
	{ 32, YYAT_SHIFT, 22 },
	{ 25, YYAT_SHIFT, 19 },
	{ 25, YYAT_SHIFT, 20 },
	{ 25, YYAT_SHIFT, 21 },
	{ 8, YYAT_ACCEPT, 0 },
	{ 30, YYAT_SHIFT, 19 },
	{ 30, YYAT_SHIFT, 20 },
	{ 30, YYAT_SHIFT, 21 },
	{ 9, YYAT_SHIFT, 19 },
	{ 9, YYAT_SHIFT, 20 },
	{ 9, YYAT_SHIFT, 21 },
	{ 37, YYAT_SHIFT, 15 },
	{ 37, YYAT_SHIFT, 16 },
	{ 5, YYAT_SHIFT, 11 },
	{ 37, YYAT_SHIFT, 17 },
	{ -1, YYAT_ERROR, 0 },
	{ 37, YYAT_SHIFT, 18 },
	{ 12, YYAT_SHIFT, 26 },
	{ 13, YYAT_SHIFT, 15 },
	{ 13, YYAT_SHIFT, 16 },
	{ 12, YYAT_SHIFT, 27 },
	{ 13, YYAT_SHIFT, 17 },
	{ -1, YYAT_ERROR, 0 },
	{ 13, YYAT_SHIFT, 18 },
	{ 31, YYAT_SHIFT, 19 },
	{ 31, YYAT_SHIFT, 20 },
	{ 31, YYAT_SHIFT, 21 },
	{ 29, YYAT_SHIFT, 15 },
	{ 6, YYAT_ERROR, 0 },
	{ 37, YYAT_SHIFT, 19 },
	{ 37, YYAT_SHIFT, 20 },
	{ 37, YYAT_SHIFT, 21 },
	{ 29, YYAT_SHIFT, 18 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 25, YYAT_SHIFT, 22 },
	{ 13, YYAT_SHIFT, 19 },
	{ 13, YYAT_SHIFT, 20 },
	{ 13, YYAT_SHIFT, 21 },
	{ 30, YYAT_SHIFT, 22 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 9, YYAT_SHIFT, 22 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 29, YYAT_SHIFT, 19 },
	{ 29, YYAT_SHIFT, 20 },
	{ 29, YYAT_SHIFT, 21 },
	{ 28, YYAT_SHIFT, 19 },
	{ 28, YYAT_SHIFT, 20 },
	{ 28, YYAT_SHIFT, 21 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 31, YYAT_SHIFT, 22 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 37, YYAT_SHIFT, 22 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 13, YYAT_SHIFT, 22 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 29, YYAT_SHIFT, 22 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 28, YYAT_SHIFT, 22 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 27, YYAT_SHIFT, 3 },
	{ 27, YYAT_SHIFT, 4 }
};

YYCONST yystateaction_t YYNEARFAR YYBASED_CODE YYDCDECL yystateaction[] = {
	{ 0, 0, YYAT_DEFAULT, 27 },
	{ 0, 0, YYAT_DEFAULT, 27 },
	{ 0, 0, YYAT_DEFAULT, 27 },
	{ 0, 0, YYAT_REDUCE, 9 },
	{ 0, 0, YYAT_REDUCE, 17 },
	{ -7, 1, YYAT_DEFAULT, 27 },
	{ 7, 1, YYAT_DEFAULT, 9 },
	{ 0, 0, YYAT_REDUCE, 10 },
	{ 24, 1, YYAT_ERROR, 0 },
	{ -32, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 8 },
	{ 0, 0, YYAT_DEFAULT, 27 },
	{ -4, 1, YYAT_ERROR, 0 },
	{ -4, 1, YYAT_REDUCE, 19 },
	{ 0, 0, YYAT_REDUCE, 1 },
	{ 0, 0, YYAT_DEFAULT, 27 },
	{ 0, 0, YYAT_DEFAULT, 27 },
	{ 0, 0, YYAT_DEFAULT, 27 },
	{ 0, 0, YYAT_DEFAULT, 27 },
	{ 0, 0, YYAT_DEFAULT, 27 },
	{ 0, 0, YYAT_DEFAULT, 27 },
	{ 0, 0, YYAT_DEFAULT, 27 },
	{ 0, 0, YYAT_DEFAULT, 27 },
	{ 0, 0, YYAT_REDUCE, 7 },
	{ -25, 1, YYAT_REDUCE, 15 },
	{ -39, 1, YYAT_REDUCE, 19 },
	{ 0, 0, YYAT_REDUCE, 16 },
	{ -40, 1, YYAT_ERROR, 0 },
	{ 8, 1, YYAT_REDUCE, 4 },
	{ 5, 1, YYAT_REDUCE, 2 },
	{ -35, 1, YYAT_REDUCE, 3 },
	{ -16, 1, YYAT_REDUCE, 5 },
	{ -74, 1, YYAT_REDUCE, 12 },
	{ -76, 1, YYAT_REDUCE, 13 },
	{ -80, 1, YYAT_REDUCE, 11 },
	{ -93, 1, YYAT_REDUCE, 6 },
	{ 0, 0, YYAT_REDUCE, 14 },
	{ -11, 1, YYAT_REDUCE, 18 }
};

int YYNEAR YYDCDECL yynontermgoto_size = 19;

YYCONST yynontermgoto_t YYNEARFAR YYBASED_CODE YYDCDECL yynontermgoto[] = {
	{ 27, 37 },
	{ 27, 7 },
	{ 27, 5 },
	{ 11, 25 },
	{ 5, 13 },
	{ 22, 35 },
	{ 11, 24 },
	{ 5, 12 },
	{ 0, 8 },
	{ 0, 6 },
	{ 21, 34 },
	{ 20, 33 },
	{ 19, 32 },
	{ 18, 31 },
	{ 17, 30 },
	{ 16, 29 },
	{ 15, 28 },
	{ 2, 10 },
	{ 1, 9 }
};

YYCONST yystategoto_t YYNEARFAR YYBASED_CODE YYDCDECL yystategoto[] = {
	{ 7, 27 },
	{ 16, 27 },
	{ 15, 27 },
	{ 0, -1 },
	{ 0, -1 },
	{ 2, 27 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 1, 27 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 14, 27 },
	{ 13, 27 },
	{ 12, 27 },
	{ 11, 27 },
	{ 10, 27 },
	{ 9, 27 },
	{ 8, 27 },
	{ 3, 27 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ -2, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 }
};

YYCONST yydestructor_t YYNEARFAR *YYNEAR YYDCDECL yydestructorptr = NULL;

YYCONST yytokendest_t YYNEARFAR *YYNEAR YYDCDECL yytokendestptr = NULL;
int YYNEAR YYDCDECL yytokendest_size = 0;

YYCONST yytokendestbase_t YYNEARFAR *YYNEAR YYDCDECL yytokendestbaseptr = NULL;
int YYNEAR YYDCDECL yytokendestbase_size = 0;
#line 136 ".\\tp.y"

main(){
yyparse();
}

void yyerror(const char * s)
{  if((yylineno-1)<2){
 	printf("Erreur ---> Ligne : %d  : %s\n", yylineno-1, yytext);
    printf("Cause de l Erreur ---> ");
             if(strcmp("Nom de fonction faux, voulez vous dire produit?",erreur)==0) printf("Nom de fonction faux, voulez vous dire produit?\n");else{
             if(strcmp("Nom de fonction faux, voulez vous dire somme?",erreur)==0) printf("Nom de fonction faux, voulez vous dire somme?\n");else{
             if(strcmp("Nom de fonction faux, voulez vous dire min?",erreur)==0) printf("Nom de fonction faux, voulez vous dire min?\n");else{
             if(strcmp("Nom de fonction faux, voulez vous dire max?",erreur)==0) printf("Nom de fonction faux, voulez vous dire max?\n");else{
             if(strcmp("Nom de fonction faux, voulez vous dire variance?",erreur)==0) printf("Nom de fonction faux, voulez vous dire variance?\n");else{
              if(strcmp("Nom de fonction faux, voulez vous dire ecarType?",erreur)==0) printf("Nom de fonction faux, voulez vous dire ecarType?\n");else{
              if(strcmp("Nom de fonction faux, voulez vous dire moyenne?",erreur)==0) printf("Nom de fonction faux, voulez vous dire moyenne?\n");else{
             if(strcmp("Parenthese fermante manquante",erreur)==0) printf("Parenthese fermante manquante\n");else{
             if(strcmp("Parenthese ouvrante manquante",erreur)==0) printf("Parenthese ouvrante manquante\n");else{
    
             if( strcmp(yytext,"+")==0 || strcmp(yytext,"-")==0 || strcmp(yytext,"*")==0 ||strcmp(yytext,"/")==0 )  printf("operande manquant\n");
             else{ if(strcmp(yytext," ")==0) printf("Expession incomplete operateur ou operande ou parenthese manquant\n");
                       else printf("Faux caractere insere\n");   
                 }
                 }
                 }
                 }
                 }
                 }
                 }
                 }
                 }
                 }
   delay(55555555); exit(0);
  }
  
  }
 
/** Fonction tiré de calcul **/

float Variance( float values[10],int taille) {
  //vriance (n1,n2,n3,...,n)=(n1-moy(n1...n)+n2-moy(n2....n)+....)/n-1 (il s'agit d'un échantillion gaussien dont on estime la variance
  float variance=0;
  float moy=Moyenne(values,taille);
    for (int j=0;j<taille;j++)
       variance+=pow((values[j]-moy),2);
  return (variance/(taille));
}
float Moyenne( float values[10],int taille)
{
   float moy=0;
            moy = (Somme(values,taille)/taille);
   return moy;
}
float Somme( float values[10],int taille)
{
   float som=0;
               for (int j=0;j<taille;j++){
                 som+=values[j];
               }
          
                
   return  som;
}
float Produit( float values[10],int taille)
{
   float prod=1;
               for (int j=0;j<taille;j++){
                 prod*=values[j];
               }
    
   return  prod;
}
float Max( float values[10],int taille)
{
   float max=0;
               for (int j=0;j<taille;j++)
                max=MAX(values[j],max);
   return max;
}
float Min(float values[10],int taille)
{
     float min=values[0];
               for (int j=0;j<taille;j++)
                min=MIN(values[j],min);
    return min;
}
float EcarType( float values[10],int taille) {
  return (sqrt(Variance( values,taille)));
}

float SI( float values[10],int testt) {
 if(testt==1) return values[1];
 else return values[2];
 
}
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
} 
