#include <stdio.h>
#include "vektor.h"

int main (void){
	struct vektor_s p1, p2, pv;
	fprintf(stderr, "Geben Sie den ersten Vektor ein: ");
	scanf(" %f %f", &p1.px, &p1.py);
		
	fprintf(stderr, "Geben Sie den zweiten Vektor ein: ");
	scanf(" %f %f", &p2.px, &p2.py);

	fprintf(stderr, "p1.px = %f\n", p1.px);
	fprintf(stderr, "p1.py = %f\n", p1.py);
	fprintf(stderr, "p2.px = %f\n", p2.px);
	fprintf(stderr, "p2.py = %f\n", p2.py);
}
