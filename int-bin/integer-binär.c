#include <stdio.h>

int main (void) {
	int a, i;
	int feld[8];

	printf("Bite geben Sie eine Integer-Zahl ein(max 255 = 11111111): \n");
        scanf(" %i", &a);
	i = 0;
	while (i < 8) {
		if (a % 2 == 0) {
			feld[i] = 0;
		}
		else {
			feld[i] = 1;
		}
		a = a / 2;
		i = i + 1;
	}
	printf("Die eingegebene Zahl wurde ins Binärsystem umgewandelt: ");
	for (i = 7; i >= 0; i--) {
    	    printf("%i", feld[i]);
  	}
	printf("\n");
  return (0);
}

