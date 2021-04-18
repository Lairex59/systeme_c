#include <stdio.h>
#include <string.h>
#include "stack.h"
#include <stdlib.h>

int main (void) {
	printf("Willkommen in der umgekehrten polnischen Notation. ACHTUNG!! Dieses Programm nicht für cheaten benützen!!\n");
	printf("Bitte ihre Rechnung eingeben: ");
	char s[1000];
	fgets(s, 999, stdin);
	int i = 0;
	int zahl = 0;
	int wiederh = 0;
	while (wiederh == 0) {
		while (s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/') {
			while (s[i] != ' ') {
				if (zahl <= 9) {
					zahl = 10 * zahl + atoi(&s[i]);
				}
				i++;	
			}
			i++;
			if (zahl != 0) {
				push(zahl);
			}
			zahl = 0;
		}
		int rechts = pop();
		int links = pop();
		switch(s[i]) {
			case '+': push(links+rechts); break;
			case '-': push(links-rechts); break;
			case '*': push(links*rechts); break;
			case '/': push(links/rechts); break;
		}
		i++;
		wiederh = 1;
		for(int n = i; n < strlen(s); n++) {
			if(s[n] == '+' || s[n] == '-' || s[n] == '*' ||s[n] == '/' ){
				wiederh = 0;
			}	
		}	

	}
	printf("Lösung: %i\n", pop());
}

