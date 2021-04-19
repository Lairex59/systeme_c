#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * 
 * 
 * 
 */
int main(char *vor[10]) {
	FILE *pfad, *out;
	char byte[9];
	char code[12];

	if ((pfad = fopen("code.txt","w")) != NULL) {
		
		fprintf(pfad, "\nhelo\n");
		for(int i = 0; i < 10; i++) {
			if (*vor[i] == 0 || *vor[i] == 1) { 
				fprintf(pfad, "%i", &vor[i]);
			}
		}	
		
		fclose(pfad);
	}
}
