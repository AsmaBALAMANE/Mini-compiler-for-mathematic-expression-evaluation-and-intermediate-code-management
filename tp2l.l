%{  
    
	#include <stdio.h>
	#include <stdlib.h>	
	#include <ctype.h>
    #include <math.h>
	#include "tp.h"
	
%}
nbr [0-9]+|[0-9]*\.[0-9]+
%%
{nbr}+ { yylval.val = atof(yytext);

            return chiffre;} 
            
somme {yylval.Fonction=1; return nf;}
moyenne {yylval.Fonction=2; return nf;}
min {yylval.Fonction=3; return nf;}
max {yylval.Fonction=4; return nf;}
variance {yylval.Fonction=5; return nf;}
ecrType {yylval.Fonction=6; return nf;}
si {yylval.Fonction=7; return nf;}
produit {yylval.Fonction=8; return nf;}
/*****Gestion d'erreur **************/
produi {yylval.Fonction=9; return nf;}
some {yylval.Fonction=10; return nf;}
Min {yylval.Fonction=11; return nf;}
Max {yylval.Fonction=12; return nf;}
varianc {yylval.Fonction=13; return nf;}
ecartype {yylval.Fonction=14; return nf;}
moyene {yylval.Fonction=15; return nf;}
/***********************************/
.|\n { return(yytext[0]);}  
          
%%

