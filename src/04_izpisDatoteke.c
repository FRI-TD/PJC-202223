// program na zaslon izpise datoteko, pri tem vrstice ostevilci

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define N 100

int main(int argc, char *args[]) {
  if (argc < 2) {
    printf("Podaj argumente\n");
	return -2;
  }
	
  FILE *f = fopen(args[1], "r");
  if (f == NULL) {
    printf("Datoteka '%s' ne obstaja\n", args[1]);
	return -1;
  }

  FILE *izhod;
  if (argc > 2) {
	izhod = fopen(args[2], "w");
	if (izhod == NULL) {
      printf("Ne morem ustvariti  datoteke '%s'\n", args[2]);
	  return -3;
	}
  } else 
	izhod = stdout;
 
  bool novaVrstica = true;

  // branje datoteke ...  
  char vrstica[N];
  int i=1;
  while (fgets(vrstica, N, f) != NULL) {
	if (novaVrstica) {
	  fprintf(izhod, "%2d. ", i++);
	  novaVrstica = false;
	}

    fprintf(izhod, "%s", vrstica);
	if (vrstica[strlen(vrstica)-1] == '\n')
	  novaVrstica = true;
  }
  
	  
  fclose(f);
  fclose(izhod); 
}
