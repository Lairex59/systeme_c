#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void generator() {
	FILE *fpw;
	if ((fpw = fopen("Generator.txt", "w") )!= NULL) {
		srand(time(NULL));
		for (int i = 1; i <= 512; i++) {
			fprintf(fpw,"%i",rand() % 2);
			if (i % 8 == 0) {
				fprintf(fpw,"\n");
			}
		}
		fclose(fpw);
	}
	
}

