#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	//Variablen werden deklariert
	int a, b, c;
	//Die Variablen stop und a werden  initialisiert
	printf("Offset: ");
	scanf(" %i", &a);
	srand(time(NULL) + a);
	
	printf("Größer der KLasse: ");
	scanf(" %i", &b);
	
	for (int i = 0; i < rand() % 21; i++){
		c = 1 + (rand() % b);
	}
	//Gibt aus, welcher Schüler geprüft wird
	printf("Schüler Nr: %i\n", c);
	return (0);
}
