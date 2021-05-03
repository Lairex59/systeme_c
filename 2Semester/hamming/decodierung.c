#include <stdio.h>

char neuePar(char arr[], int length);
int pruefenPar(char arr[], int block);
static char allePar[8];
static char alle12[12];

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
    printf("Fehler beim Schrieben in die Datei!\n");
    return 2;
  }
  
  
  //Paritaeten, Zaehler
  int z1=0;int z2=0;int z3=0;int z4=0;
  char p0[5];char p1[5];char p2[4];char p3[4];
  
  printf("Decodierer:\n");

  //codieren
  char e;
  int i = 0;
  int block=0;
  int fehlerpruef = 0;
  while(fscanf(eingang,"%c", &e)>0){
    if(e=='0'||e=='1'){
      alle12[i]=e;

      //einlesen der alten Paritaeten in Array
      if(i==0)
	allePar[0]=e;
      if(i==1)
        allePar[1]=e;
      if(i==3)
        allePar[2]=e;
      if(i==7)
        allePar[3]=e;

      //Paritaeten
      if(i==2||i==4||i==6||i==8||i==10){
        p0[z1]=e;
	z1++;
      }
      if(i==2||i==5||i==6||i==9||i==10){  
        p1[z2]=e;
	z2++;
      }
      if(i==4||i==5||i==6||i==11){
        p2[z3]=e;
	z3++;
      }
      if(i==8||i==9||i==10||i==11){
	p3[z4]=e;
	z4++;
      }
      i++;
      if(i==12){
	block++;
	//zuruecksetzetn der Zaehler
        i = 0;z1=0;z2=0;z3=0;z4=0;	

        //berechnen aller neuen Paritaeten
        allePar[4] = neuePar(p0,5);allePar[5] = neuePar(p1,5);
	allePar[6] = neuePar(p2,4);allePar[7] = neuePar(p3,4);
       	
	//pruefen ob alte und neue Paritaeten gleich sind/korrigieren
	fehlerpruef += pruefenPar(allePar,block);
	
	//ausgeben
	for(int i = 0;i<12;i++){
          fprintf(ausgang,"%c",alle12[i]);
	}
      }
    }
  }
  
  //wenn kein Fehler beim decodieren gefunden wird
  if(fehlerpruef==0){
    printf(" - kein Fehler gefunden!\n");
  }
  printf("----------------------------------------\n");

  //schliessen
  fclose(eingang);
  fclose(ausgang);
  
  return 0;
}

char neuePar(char arr[], int length){
  //zaehlen der einsen
  int eins = 0;
  for(int i = 0;i<length;i++){
    if(arr[i]=='1')
      eins++;
  }
  
  //zurueck geben des Paritaetsbits
  if(eins%2==0){
    return '0';
  }else if(eins%2==1){
    return '1';
  //nur damit keine Fehlermeldung kommt
  }else 
    return '2';
}

int pruefenPar(char arr[],int block){
  //vergleichen von alten und neue Paritaet
  int s[4];
  int fehler = 0;
  for(int i = 0;i<4;i++){
    if(arr[i]!=arr[i+4]){
      fehler = 1;
      s[i]=1; 
    } else
      s[i]=0;
  }

  //Fehlerausgabe und Korrektur
  if(fehler==1){
    int stelle = 8*s[3]+4*s[2]+2*s[1]+1*s[0];
    printf(" - %i. Block: Fehler an der Stelle %i%i%i%i=(%i)\n",block,s[3],s[2],s[1],s[0],stelle);
    if(alle12[2]=='0')
      alle12[2]='1';
    else if(alle12[2]=='1')
      alle12[2]='0';
    return 1;
  }

  return 0;
}
