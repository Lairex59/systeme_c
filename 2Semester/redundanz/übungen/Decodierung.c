#include <stdio.h>
#include <stdlib.h>

void decodierung() {
	FILE *fpw;
	FILE *fpr;
	char a[11];
	int summe = 0;
	if ((fpw = fopen("Decodiert.txt", "w")) != NULL && (fpr = fopen("MitFehler.txt", "r")) != NULL) {
		while (fgets(a, 11, fpr) > 0) {
			summe = 0;
			for (int i = 0; i < 9; i++) {
				summe += a[i] - 48;
			}
			a[8] = 0;
			fputs(a, fpw);
			if (summe % 2 == 1) {
				fputs("Fehler", fpw);
			}
			fputs("\n", fpw);
		}
		fclose(fpw);
		fclose(fpr);
	}
}
