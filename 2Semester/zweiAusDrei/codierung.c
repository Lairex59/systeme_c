#include <stdio.h>

int codierung(void){
  FILE* eingang;
  FILE* ausgang;
   
  //Datei öffnen
  if((eingang=fopen("text(generierter).txt","r"))==NULL){
    printf("Fehler beim Einlesen aus der Datei!\n");
    return 1;
  }
  //Datei erzeugen
  if((ausgang=fopen("text(codierter).txt","w"))==NULL){
    printf("Fehler beim Schreiben in die Datei!\n");
    return 2;
  }
  
  //jede Zahl dreimal in neue Datei schrieben
  char e;
  while(fscanf(eingang,"%c",&e)>0){
    if(e=='0'||e=='1'){
      int i;
      for(i=0;i<3;i++){
        fprintf(ausgang, "%c", e);
      }
    }
  }

  //schliessen
  fclose(eingang);
  fclose(ausgang);
  
  return 0;
}
