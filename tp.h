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
* tp.h
* C header file generated from tp.y.
* 
* Date: 02/03/18
* Time: 21:59:37
* 
* AYACC Version: 2.07
****************************************************************************/

#ifndef _TP_H
#define _TP_H

#include <yypars.h>

#ifndef YYSTYPE
union tagYYSTYPE {
#line 25 ".\\tp.y"

float val; // la valeur 
int Fonction;  // numéro correspondant à la fonction

struct { // pour les listes d'arguments
float TFval[10]; // tableau des arguments float
int index; // compteur pour la taille du tableau des float

} List; 

#line 45 "tp.h"
};

#define YYSTYPE union tagYYSTYPE
#endif

extern YYSTYPE YYNEAR yylval;

#define chiffre 257
#define nf 258
#define mu 259
#endif
