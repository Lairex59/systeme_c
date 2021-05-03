#include <stdio.h>

int main (void)
{
  char c;
  printf("zeichen:");
  scanf(" %c", &c);
  printf("Zeichen: %c - %i\n", c, c);
//  c == 'A' ? printf ("Es ist ein 'A'\n") : printf ("Es ist kein 'A'\n");
  printf("Es ist %s 'A'\n", c == 'A' ? "ein": "kein");
  return 0;
}
