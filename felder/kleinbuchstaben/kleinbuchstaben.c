#include <stdio.h>
#include <string.h>

int main() {
	//Werte werden deklariert
	char s[100];
  int i;
	//Überschrift wird ausgegeben
  printf("\nGeben Sie ein Wort ein welches kleiner als 100 Zeichen ist: ");
	//Benutzer initialisert die Zahl
  scanf(" %s", s);
	//Wandelt ein Großbuchstabe in einer keleinen  um
  for (i = 0; s[i]!='\0'; i++) {
    if(s[i] >= 'A' && s[i] <= 'Z') {
       s[i] = s[i] + 32;
    }
  }
	//GIbt das Wort aus
  printf("\nIhr Wort in Kleinbuchstaben = %s\n", s);
  return 0;
}
