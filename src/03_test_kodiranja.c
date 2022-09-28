#include <string.h>
#include <stdio.h>

void kodiraj(char besedilo[]);

extern char kljuc[];


int main() {
  char besedilo[] = "TEST";
  
  strcpy(kljuc, "d");


  printf("  Besedilo: %s\n", besedilo);
  kodiraj(besedilo);
  printf("  Kodirano: %s\n", besedilo);
  kodiraj(besedilo);
  printf("Odkodirano: %s\n", besedilo);


  return 0;
}
