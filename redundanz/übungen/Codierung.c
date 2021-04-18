#include <stdio.h>
#include <stdlib.h>

void codierung() {
	FILE* fpw;
	FILE* fpr;
	char a[10];
	int counter;
	if ((fpw = fopen("Codiert.txt", "w")) != NULL && (fpr = fopen("Daten.txt", "r")) != NULL) {
		while (fgets(a,10,fpr) > 0) {
			counter = 0;
			for (int i = 0; i < 8; i++) {
				counter += a[i] -48;
			}
			a[8] = counter %2+48;
			a[9] = 0;
			fputs(a, fpw);
			fprintf(fpw, "\n");
		}
		fclose(fpw);
		fclose(fpr);
	}
}
