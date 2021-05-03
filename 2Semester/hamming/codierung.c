#include <stdio.h>

int hamming(char arr[],int length);

int codierung(void){
  FILE* eingang;
  FILE* ausgang;
  
  //Datei öffnen
  if((eingang=fopen("text(generierter).txt","r"))==NULL){
    printf("Fehler beim Einlesen aus der Datei!\n");
    return 1;
  }
  //Datei erzeugen
  if((ausgang=fopen("text(codiert).txt","w"))==NULL){
    printf("Fehler beim Schrieben in die Datei!\n");
    return 2;
  }
  
  
  //Paritaeten und Zaehler
  int z1=0;int z2=0;int z3=0;int z4=0;
  char p0[5];char p1[5];char p2[4];char p3[4];

  //codieren
  char e;
  int i = 0;
  while(fscanf(eingang,"%c", &e)>0){
    if(e=='0'||e=='1'){
      //Paritaeten
      if(i==0||i==1||i==3||i==4||i==6){
        p0[z1]=e;
	z1++;
      }
      if(i==0||i==2||i==3||i==5||i==6){  
        p1[z2]=e;
	z2++;
      }
      if(i==1||i==2||i==3||i==7){
        p2[z3]=e;
	z3++;
      }
      if(i==4||i==5||i==6||i==7){
	p3[z4]=e;
	z4++;
      } 
      i++;
      if(i==8){
	//zuruecksetzetn der Zaehler
        i = 0;z1=0;z2=0;z3=0;z4=0;
	//Ausgeben der Daten und Paritaetsbits
        fprintf(ausgang,"%i%i", hamming(p0,5), hamming(p1,5));
       	fprintf(ausgang,"%c%i", p0[0], hamming(p2, 4));
	fprintf(ausgang,"%c%c%c%i",p0[1],p1[1],p0[2],hamming(p3,4));
	fprintf(ausgang,"%c%c%c%c",p3[0],p3[1],p3[2],p3[3]);
      }
    }
  } 
  
  //Schliessen
  fclose(eingang);
  fclose(ausgang);

  return 0;
}

int hamming(char arr[], int length){
  //zaehlen der einsen
  int eins = 0;
  for(int i = 0;i<length;i++){
    if(arr[i]=='1')
      eins++;
  }

  //zurueck geben des Paritaetsbits
  if(eins%2==0)
    return 0;
  else if(eins%2==1)
    return 1;
  //nur damit keine Fehlermeldung kommt
  else 
    return 2;
}
