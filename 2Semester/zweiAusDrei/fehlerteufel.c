#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int fehlerteufel(int wahrscheinlichkeit){
  FILE* eingang;
  FILE* ausgang;
  srand(time(NULL));

  //Datei öffnen
  if((eingang=fopen("text(codierter).txt","r"))==NULL){
    printf("Fehler beim Einlesen aus der Datei!\n");
    return 1;
  }
  //Datei erzeugen
  if((ausgang=fopen("text(fehlerteufel).txt","w"))==NULL){
    printf("Fehler beim Schrieben in die Datei!\n");
    return 2;
  }
  
  //Zahlen je nach Wahrsch. manipulieren
  char e;
  while(fscanf(eingang,"%c", &e)>0){
    if(e=='0'||e=='1'){
      int fehler = rand()%(100/wahrscheinlichkeit);
      if(fehler==0){
        if(e == '0')
          fprintf(ausgang,"1");
	else if(e == '1')
	  fprintf(ausgang,"0");
      }else{
        fprintf(ausgang, "%c", e);
      }
    }
  }
  
  //schliessen
  fclose(eingang);
  fclose(ausgang);

  return 0;
}
