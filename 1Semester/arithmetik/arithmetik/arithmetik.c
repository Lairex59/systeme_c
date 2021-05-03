#include <stdio.h>
#include "sum.h"
#include "diff.h"
#include "prod.h"
#include "divis.h"

int main(void)
{
  float a, b; // Definition zweier Variabler, vom Typ float
  char c;
  a = 1;
  b = 2; 
  int d = 1;
  do{
    printf("Was möchten sie rechnen? Addition[a], Subtraktion[s], Multiplikation[m], Division[d]: ");
    scanf(" %c", &c);
    printf("\nBitte erstes Argument eingeben:");
    scanf(" %f", &a);  // wir uebergeben dem scanf die Adresse auf a
    printf("Bitte zweites Argument eingeben:");
    scanf(" %f", &b);
    switch (c){
  	  case 'a': printf(" %f + %f = %f\n", a, b,  sum(a,b)); break;
  	  case 's': printf(" %f - %f = %f\n", a, b, diff(a, b)); break;
		  case 'm': printf(" %f * %f = %f\n", a, b, prod(a, b)); break;
		  case 'd': printf(" %f / %f = %f\n", a, b, divis(a, b)); break;
	 	 default: printf("ICh glaube sie magen Mathematik nicht ;(\n"); break;
    }
    printf("\nNochmal?[1], Abbruch[0]: ");
    scanf(" %i", &d);
  } while (d != 0);
  return (0);
}
