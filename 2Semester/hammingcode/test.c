#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * 
 * 
 * 
 */
int main() {
	FILE *in, *out;
	char bit[9];
	char code[13];
	in = fopen("code.txt", "r");
	out = fopen("codierung.txt", "w");
	while (fgets(bit, 9, in) != NULL) {
		code[0] = (atoi(&bit[0]) + atoi(&bit[1]) + atoi(&bit[2]) + atoi(&bit[3]) + atoi(&bit[4])+atoi(&bit[5])+atoi(&bit[6])) %2 +48;
		code[1] = (atoi(&bit[0])+atoi(&bit[2])+atoi(&bit[3])+atoi(&bit[4])+atoi(&bit[5])+atoi(&bit[6])) %2+48;
		code[2]=bit[0];
		code[3] = (atoi(&bit[1])+atoi(&bit[2])+atoi(&bit[3])+atoi(&bit[7]))%2+48;
		code[4]=bit[1];
		code[5]=bit[2];
		code[6]=bit[3];
		code[7]=(atoi(&bit[4])+atoi(&bit[5])+atoi(&bit[6])+atoi(&bit[7]))%2+48;
		code[8]=bit[4];
		code[9]=bit[5];
		code[10]=bit[6];
		code[11]=bit[7];

		fprintf(out, "%s\n", code);

	}
}	
