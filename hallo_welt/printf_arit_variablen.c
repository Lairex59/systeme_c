#include <stdio.h>

int main (void){
	int a, b;
	a = 1;
	b = 2;
	printf("Bitte erstes Argument eingeben:");
	scanf("%i", &a);
	printf("%i + %i = %i\n", a, b, a + b);
	printf("%i - %i = %i\n", a, b, a - b);
	printf("%i * %i = %i\n", a, b, a * b);
	printf("%i / %i = %f\n", a, b, a / (float)b);
	return 0;
}
