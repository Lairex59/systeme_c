#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main (void){
	//Deklarieren der Variablen
	int a, b , zahl;
	b = 1;
	char abc [] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	//Hauptschleife wird so oft wiederholt, solange der Benutzer es will
	while (b != 0){
		srand(time(NULL));
		printf("Wie lange soll das Passwort sein: ");
		scanf("%i", &a);
		//Schleife, die das Passwort einzeln ausgibt
		for (int i = 0; i < a; i++){
			zahl = rand() % strlen(abc);
			printf("%c", abc[zahl]);
		}
		printf("\n");
		//Fragt, ob man nochmal durchführen muss
		printf("Nochmal J(1)/N(0): ");
		scanf("%i", &b);
	}

