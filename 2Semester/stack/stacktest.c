#include <stdio.h>

int stack[100];
int stelle = -1;


void push (void) {
        int zahl;
	if (stelle == 99) {
		printf("ERROR: Stack ist voll\n");
	}
	else {
		printf("Zahl für \"PUSH\" eingeben: \n");
		scanf(" %i", &zahl);
		stelle++;
		stack [stelle] = zahl;
	}
}

void pop (void) {
        if (stelle == -1) {
		printf("ERROR: Stack ist leer!\n");
	}
	else {
		printf("Wert im Stack: %i\n", stack [stelle]);
		stelle--;
	}
}


int main () {
	printf("Push - Pop\n");
	int i = 0;
	while (i == 0) {
		char mode;
		printf("Bitte auswählen: \n a > push \n b > pop \n e > ende:\n");
		scanf(" %c", &mode);
		switch (mode) {
			case 'a': push(); break;
			case 'b': pop(); break;
			case 'e': i = 1; break;
			default: printf("Bitte geben Sie eines dieser Zeichen ein:\n");
		}
	}
	return(0);
}
