#include <stdio.h>

// Rekursive Fakultaet-Methode
double fakt (double a) {
        double ret = 1;
        if (a > 0) {
                ret = a*fakt(a-1);
        }
        return(ret);
}

// Hauptprogramm, main
int main (void) {
	//double datentyp, da int zu klein. Jetzt kann man fak bis 170 korrekt berechnen
	double ein;
	printf("Fakultät von: ");
	scanf(" %lf", &ein);
	printf("\n");
	double  a = fakt(ein);
	printf("%f\n", a);
	return(0);
}
