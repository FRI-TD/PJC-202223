#include <stdio.h>

// Dva razlicna načina za deklaracijo glave in implementacijo
// funkcije strlen; spremenljivko s lahko v eni in drugi funkciji 
// uporabljamo bodisi kot tabelo bodisi kot kazalec; vseeno je, 
// katero od deklaracij pisemo pri eni in pri drugi funkciji 
// (lahko jih med seboj menjamo). 

int strlen2(char *s) {
  int r = 0;
  while (s[r] != '\0') r++;
  return r;
}

int strlen1(char s[]) {
  int r = 0;
  while (*s != '\0') {
	r++;
	s++;
  }
  return r;
}

int main() {

malloc

  char niz[] = "Ponedeljek";

  printf("Dolzina niza '%s' je %d\n", niz, strlen2(niz)); 
}
