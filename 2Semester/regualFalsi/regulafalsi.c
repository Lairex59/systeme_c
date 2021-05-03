#include <stdio.h>
#include <math.h>

float f (float x) {
	return (exp(x)+1-x*x);
}

float main (void) {
	float a, b, x;
	printf("Berechnung der Nullstellen mittels dem  Regula-Falsi-Verfahren\n");
	printf("Bitte geben Sie das Intervall ein\n");
        printf("a = ");
        scanf(" %f", &a);
        printf("b = ");
        scanf(" %f", &b);
        printf("Das eingegebene Intervall = [%f;%f]\n", a, b);
	while (f(x) > 0.000001) {
		x = a -( f(a) * ((a-b)/(f(a)-f(b))));
		if (f(a)*f(x) < 0) {
			b = x;
		}
		else {
			a = x;
		}
	}
	printf("Der größtmögliche Fehler beträgt: 0,00005\n");
	printf("Die Nullstelle der Funktion liegt im Intervall = [%f;%f]\n", a, b);
	return (0);
}
