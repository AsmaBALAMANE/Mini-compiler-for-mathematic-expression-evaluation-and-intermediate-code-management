%{
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
%}
%union {
float val; // la valeur 
int Fonction;  // numéro correspondant à la fonction

struct { // pour les listes d'arguments
float TFval[10]; // tableau des arguments float
int index; // compteur pour la taille du tableau des float

} List; 
} 
// redfinir le type des tokens 
%token <val> chiffre
%type <List> L
%type  <Fonction> NomFunction 
%token <Fonction> nf  // type de la fonction (int correspondant à cette fonction
%type <val> E 
%type <val> Fonct  //token MGP qui reçoit la valeur de la Fonction aprés calcule 
  

%left '+' '-'
%left '*' '/'
%left '>' '<' '='
%right '^'
%nonassoc mu
%% 
Ligne : E '\n' { printf("Calcule effectue, Resultat: %f \n", $1); }
;
E : E '+' E { $$ = $1 + $3; }
  | E '-' E { $$ = $1 - $3; }
  | E '*' E { $$ = $1 * $3; }
  | E '/' E { $$ = $1 / $3; }
  | E '^' E { $$ =pow($1,$3);}
  | '(' E ')' { $$ = $2; }
  | '-' E %prec mu  { $$ = -$2; }
  | chiffre  { $$ = $1; }
  | Fonct { $$ = $1; }
  | E '>' E { $$=0;if($1>$3) test=1;else test=0; }
  | E '<' E { $$=0;if($1<$3) test=0;else test=1;}
  | E '=' E { $$=0;if($1==$3) test=1;else test=0;}
;
Fonct : NomFunction '(' L ')'{
 switch($1)
        {
          case 1:
                $$=Somme($3.TFval,$3.index);                       
          break;
          case 2:
               $$=Moyenne($3.TFval,$3.index); 
          break;
          case 3:
               $$=Min($3.TFval,$3.index);    
          break;
          case 4:              
               $$=Max($3.TFval,$3.index); 
          break;
          case 5:
              $$=Variance($3.TFval,$3.index); 
          break;
          case 6:
              $$=EcarType($3.TFval,$3.index); 
          break;
          case 7:
              $$=SI($3.TFval,test); 
          break;
            case 8:
              $$=Produit($3.TFval,$3.index); 
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
       
}
 |NomFunction '(' L  { erreur=strdup("Parenthese fermante manquante"); yyerror("");}
 |NomFunction  L ')' { erreur=strdup("Parenthese ouvrante manquante"); yyerror("");}
;
NomFunction : nf {$$=$1;}
;
L:L ',' E {int i;
                        
                          for(i=0;i<$1.index;i++)
                              {
                                $$.TFval[i]=$1.TFval[i];
                                
                              }
                              $$.index=$1.index;
                    
            $$.TFval[$$.index]=$3;  $$.index=$$.index+1;}
        | E {$$.index=0;$$.TFval[0]=$1; $$.index=1; }
        
;
%%
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