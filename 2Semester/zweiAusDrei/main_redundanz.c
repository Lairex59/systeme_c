#include <stdio.h>
#include "redundanz.h"

int main(void){
  //erzeugt eine Datei mit Groesse 8*groesse
  int groesse = 1;
  //erzeugt Fehler mit Wahrscheinlichekeit prozent(0-100%)
  int prozent = 10;
       	
  //alle Schritte	
  generator(groesse);
  codierung();
  fehlerteufel(prozent);
  decodierung();
}
