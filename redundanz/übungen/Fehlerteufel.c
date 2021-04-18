#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fehlerteufel() {
	FILE* fpw;
	FILE* fpr;
	char a;
	srand(time(NULL));
	if ((fpw = fopen("MitFehler.txt", "w")) != NULL && (fpr = fopen("Codiert.txt", "r")) != NULL) {
		while ((a = fgetc(fpr)) != EOF) {
			if (rand() % 100 == 0 && a != '\n')
				fputc(a == '1' ? '0' : '1', fpw);
			else
				fputc(a, fpw);
		}
		fclose(fpw);
	    fclose(fpr);
	}
	
}
