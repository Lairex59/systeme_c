#include <stdio.h>
#include <math.h>

void quadrate (int n, int *n2, int *n3, int *n4) {
	*n2 = n * n;
	*n3 = n * *n2;
	*n4 = n * *n3;
}

int main (void) {
	int n2, n3, n4;
	printf("n; n²; n³; n⁴\n");
	for (int i = 0; i <= 10; i++) {
		quadrate(i, &n2, &n3, &n4);
		printf("%i;%i;%i;%i\n", i, n2, n3, n4);
	}
	return(0);
}	
