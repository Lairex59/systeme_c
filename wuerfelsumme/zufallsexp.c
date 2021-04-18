#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int zufall () {
	int random = (rand() % 6) + 1;
	return (random);
}

int main () {
	int a;
	printf("Zufalllsexperiment\n");
	printf("\n");
	printf("1 Wuerfel\n");
	srand(time(NULL));
	for (int i = 0; i < 100000; i++) {
		a = zufall();
		printf("%i\n", a);
	}
	printf("\n");
        printf("2 Wuerfel\n");

	int summe = 0;
	for (int i = 0; i < 100000; i++) {
		summe = 0;
		for (int j = 0; j < 2; j++) {
			a = zufall();
			summe = summe + a;
		}
		printf(" %i\n", summe);
	}
	printf("\n");
        printf("3 Wuerfel\n");

	for (int i = 0; i < 100000; i++) {
                summe = 0;
                for (int j = 0; j < 3; j++) {
                        a = zufall();
                        summe = summe + a;
                }
                printf(" %i\n", summe);
        }

	printf("\n");
        printf("4 Wuerfel\n");

	for (int i = 0; i < 100000; i++) {
                summe = 0;
                for (int j = 0; j < 4; j++) {
                        a = zufall();
                        summe = summe + a;
                }
                printf(" %i\n", summe);
        }

	printf("\n");
        printf("5 Wuerfel\n");

	for (int i = 0; i < 100000; i++) {
                summe = 0;
                for (int j = 0; j < 5; j++) {
                        a = zufall();
                        summe = summe + a;
                }
                printf(" %i\n", summe);
        }

	printf("\n");
        printf("6 Wuerfel\n");

	for (int i = 0; i < 100000; i++) {
                summe = 0;
                for (int j = 0; j < 6; j++) {
                        a = zufall();
                        summe = summe + a;
                }
                printf(" %i\n", summe);
        }

	printf("\n");
        printf("7 Wuerfel\n");

	for (int i = 0; i < 100000; i++) {
                summe = 0;
                for (int j = 0; j < 7; j++) {
                        a = zufall();
                        summe = summe + a;
                }
                printf(" %i\n", summe);
        }

	printf("\n");
        printf("8 Wuerfel\n");

	for (int i = 0; i < 100000; i++) {
                summe = 0;
                for (int j = 0; j < 8; j++) {
                        a = zufall();
                        summe = summe + a;
                }
                printf(" %i\n", summe);
        }

	printf("\n");
        printf("9 Wuerfel\n");

	for (int i = 0; i < 100000; i++) {
                summe = 0;
                for (int j = 0; j < 9; j++) {
                        a = zufall();
                        summe = summe + a;
                }
                printf(" %i\n", summe);
        }

	printf("\n");
        printf("10 Wuerfel\n");

	for (int i = 0; i < 100000; i++) {
                summe = 0;
                for (int j = 0; j < 10; j++) {
                        a = zufall();
                        summe = summe + a;
                }
                printf(" %i\n", summe);
        }

	return (0);
}
