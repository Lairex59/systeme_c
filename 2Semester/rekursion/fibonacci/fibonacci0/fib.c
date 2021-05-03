#include <stdio.h>

// Rekursive Fibonacci-Methode
long fib (long a) {
	long ret;
	if (a == 1 || a == 2) {
		ret = 1;
	}
	else {
		ret = fib(a-1) + fib(a-2); 
        }
        return(ret);
}

// Hauptprogramm, main
int main (void) {
        double ein;
        printf("Fibonacci-Zahl von: ");
        scanf(" %lf", &ein);
        printf("\n");
        double  a = fib(ein);
        printf("%f\n", a);
        return(0);
}

