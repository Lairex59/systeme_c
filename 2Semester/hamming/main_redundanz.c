#include <stdio.h>
#include "redundanz.h"

int main(void){
  //erzeugt eine Datei mit Groesse 8*groesse
  int groesse = 10;
  //Wahrscheinlichkeit eines Fehlers in Prozent(0-100%)
  int wahrscheinlichkeit =8;     	
  //alle Schritte	
  generator(groesse);
  codierung();
  fehlerteufel(wahrscheinlichkeit);
  decodierung();
}
