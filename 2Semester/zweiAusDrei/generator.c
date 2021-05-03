#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int generator(int groesse){
  FILE* ausgang; 
  srand(time(NULL));
	
  //Datei erzeugen
  if((ausgang = fopen("text(generierter).txt","w"))==NULL){
    printf("Fehler beim Schrieben in die Datei!\n");
    return 1;
  }
  
  //in Datei schreibem
  int i;
  for(i = 0;i<8*groesse;i++){
    int random = rand() % 2;
    fprintf(ausgang, "%i", random);
  }
  
  //schliessen
  fclose(ausgang);
  return 0;
}
