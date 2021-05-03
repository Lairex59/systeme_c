#include <stdio.h>

int zweiausdrei(char arr[]);

int decodierung(void){
  FILE* eingang;
  FILE* ausgang;
  
  //Datei öffnen
  if((eingang=fopen("text(fehlerteufel).txt","r"))==NULL){
    printf("Fehler beim Einlesen aus der Datei!\n");
    return 1;
  }
  //Datei erzeugen
  if((ausgang=fopen("text(decodiert).txt","w"))==NULL){
    printf("Fehler beim Schreiben in die Datei!\n"); 
    return 2;  
  }

  //decodieren
  char e;
  int zustand=0;
  char arr[3];
  while(fscanf(eingang,"%c",&e)>0){
    if(e=='0'||e=='1'){
      arr[zustand]=e;
      if(zustand==2){
	zustand = 0;
	fprintf(ausgang,"%i",zweiausdrei(arr));
      }else{
        zustand++;
      }
    }
  }

  //schliesssen
  fclose(eingang);
  fclose(ausgang);

  return 0;
}

int zweiausdrei(char arr[]){
  //zählen wie viele einsen
  int i;
  int eins=0;
  for(i = 0;i<3;i++){
    if(arr[i]=='1')
      eins++;
  }
  //richtigen Wert zureuck geben
  if(eins>=2)
    return 1;
  else
    return 0;
}
