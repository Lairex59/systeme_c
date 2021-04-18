#include <stdio.h>

int main(void)
{
  struct pla_s { // Deklaration eines structs mit dem Namen pla_s
    float x;
    float y;
    int z; 
  } p4; // mit der Deklaration von pla_s wird zufgleich p4 definiert

  struct pla_s p1 = {0.0, 1.0, 1}, p2, p3; // Definition von structs
                                           // p1 wird auch initialisiert
  
  p2.x = 1.1;
  p2.y = 0.1;
  p2.z = 2;
  p3 = p1;  // structs kann man zuweisen :-) 
  p4 = p2; 
  p4.z++;

  printf ("p1: x=%f y=%f z=%i\n", p1.x, p1.y, p1.z);
  printf ("p2: x=%f y=%f z=%i\n", p2.x, p2.y, p2.z);
  printf ("p3: x=%f y=%f z=%i\n", p3.x, p3.y, p3.z);
  printf ("p4: x=%f y=%f z=%i\n", p4.x, p4.y, p4.z);
  
  return 0;
}

