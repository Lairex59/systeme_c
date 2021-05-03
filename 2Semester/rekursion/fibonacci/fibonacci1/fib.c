#include <stdio.h>
#include <stdlib.h>

// Rekursive Fibonacci-Methode
// Lösungsansatz 1 - Aufruf mit 2 Ergebnissen

long fib(long n, long *f1, long *f2) {
	long erg1, erg2;
	long ret;
	if (n<=2) {
		*f1 = 1;
		*f2 = 1;
		ret = 1;
	}
	else {
		fib(n-1, &erg1, &erg2);
		*f1 = erg1 + erg2;
		*f2 = erg1;
		ret = *f1;
	}
	return(ret);
}

// Hauptprogramm, main
int main (int argc, char *argv[]) {
        long n;
	long erg1, erg2;
	if (argc != 2) {
		printf("usage: fib <n>\n");
		return 1;
	}
	n = atoi(argv[1]);
	printf("fib(%li)=%li\n", n, fib(n, &erg1, &erg2));
        return(0);
}

