// beri vrstice iz tipkovnice dokler uporabnik ne vpiše prazne vrstice; 
// takrati izpisi najdaljso prebrano vrstico

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// vrstice ne bodo daljse od 100 znakov
#define N 100

int main() {

  char trenutna[N];
  char najdaljsa[N] = "";

  while (true) {
    fgets(trenutna, N, stdin);
	if (strcmp(trenutna, "\n")==0) break;

	if (strlen(trenutna) > strlen(najdaljsa))
	  strcpy(najdaljsa, trenutna);
  }

  printf("Najdaljsa: %s", najdaljsa);

 
  return 0;
}
