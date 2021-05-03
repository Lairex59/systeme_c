#include <stdio.h>
#include <math.h>

void potenz(int zahl, int *n2, int *n3, int *n4){
	//Werte der Zeiger werden umgewandelt
	*n2 = (int)pow(zahl, 2);
	*n3 = (int)pow(zahl, 3);
	*n4 = (int)pow(zahl, 4);
}

int main(void){
	//Zahlen werden deklariert
	int n, n2, n3, n4;
	n = 4;
	//Überschriften werden als csv Datei ausgegeben
	printf("n; n²; n³; n⁴ \n");
	//Zahlen werden ausgegeben
	for (n = 1; n <= 10; n++){
		potenz(n, &n2, &n3, &n4);
		printf("%i; %i; %i; %i \n", n, n2, n3, n4);
	}
	return (0);
}
