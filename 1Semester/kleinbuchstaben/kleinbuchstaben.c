#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void) {
	char textfeld[200];
	int i;
	printf("Bitte geben sie den Text ein:\n");
	scanf(" %s", textfeld);
	
	for (i = 0; i < strlen(textfeld); i++) {
   		 printf("%c", (char)tolower(textfeld[i]));
        }
	
	printf("\n");
	return(0);
}
