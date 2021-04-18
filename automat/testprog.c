#include <stdio.h>

char gerade (char e);
char ungerade (char e);

int main (void) {
	char c;
	int i = 0;
	while (scanf(" %c", &c) == 1 || c == 0) {
		if (i == 0) {
			i = ungerade(c);
		}
		else {
			i = gerade(c);
		}
	}
}

char gerade (char e) {
	if (e == '1') {
		printf("1");
		return (1);
	} else {
		printf("0");
		return(0);
	}

}
char ungerade (char e) {
	printf("0");
	if (e == '1') {
		return(1);
	}
	return (0);
}
