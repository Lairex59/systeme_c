#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	//Deklarationen
	FILE *in, *out;
	int anzahl = 15;
	int size = 40;
	char s[anzahl][size];
	//Namensliste wird in ein zweidimmensionales Array eingelesen
	in = fopen("3ib.txt", "r");
	for (int i = 0; i < anzahl; i++) {
		fgets(s[i], 39, in); 
	}
	fclose(in);
	//Deklarationen für Random
	srand(time(NULL));
	int min = 0;
	int max = anzahl - 1;
	double r = max - min + 1;
	int num[anzahl];
	int random;
	out = fopen("kalender.txt", "w");
	for (int i = 0; i < anzahl; i++) {
		//random zahl wird ermittelt. wurde diese zahl schon mal erzeugt, so wird nochmal random gemacht
		while(1) {
			int count = 0;
			random = min + (int)(r* rand()/(RAND_MAX+1.0));
			//vergelich mit random-zahlenspeicher num[]
			for (int j = 0; j < anzahl; j++) {
				if (random == num[j]) {
					count++;
				}
			}
			//abbruch der schleife, falls die random zahl neu ist
			if (count == 0) {
				break;
			}
		}
		//schreiben in die neue datei und verwendete randomzahl wird in array gespeichert
		fprintf(out, "%s", s[random]);
		num[i] = random;
	}
	fclose(out);
	return(0);
}
