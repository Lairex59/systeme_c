#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int fehlerteufel(int wahrscheinlichkeit){
  FILE* eingang;
  FILE* ausgang;
  srand(time(NULL));
  
  //Info zur richtigen Verwendung
  printf("----------------------------------------\n");
  printf("Diese Programm funktioniert nur, wenn\n");
  printf("nicht mehr als 1 Fehler pro Block ist!!!\n\n");

  //Datei öffnen
  if((eingang=fopen("text(codiert).txt","r"))==NULL){
    printf("Fehler beim Einlesen aus der Datei!\n");
    return 1;
  }
  
  //Datei erzeugen
  if((ausgang=fopen("text(fehlerteufel).txt","w"))==NULL){
    printf("Fehler beim Schrieben in die Datei!\n");
    return 2;
  }
   
  //Zahlen je nach Stelle  manipulieren
  char e;
  int fehlerpruef=0;
  printf("Fehlerteufel:\n");
  for(int i = 0;fscanf(eingang,"%c", &e)>0;i++){
    if(e=='0'||e=='1'){
      int fehler = rand()%(100/wahrscheinlichkeit);
      if(fehler==0&&i%12!=0&&i%12!=1&&i%12!=3&&i%12!=7){
        fehlerpruef=1;
	printf(" - %i. Block: Fehler wurde an Position %i erzeugt!\n",(int)(i/12)+1,(i%12)+1);
	if(e == '0')
          fprintf(ausgang,"1");
	else if(e == '1')
	  fprintf(ausgang,"0");
      }else{
        fprintf(ausgang, "%c", e);
      }
    }
  }
  
  //wenn kein Fehler erzeugt wurde  
  if(fehlerpruef==0){
    printf(" - kein Fehler erzeugt!\n");
  }

  //schliessen
  fclose(eingang);
  fclose(ausgang);

  return 0;
}
