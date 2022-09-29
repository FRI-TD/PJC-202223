// program presteje in izpise stevilo znakov v datoteki

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char *args[]) {
  // predpostavimo, da je prvi argument ime datoteke
  FILE *f = fopen(args[1], "r");
  
  int z;

  int stZnakov = 0; // stevilo prebranih znakov
  if (f != NULL) {
    while ( (z = fgetc(f)) != EOF) {
	  stZnakov++; 

      #ifdef _WIN32
        if (z=='\n') stZnakov++; 
      #endif

	  
	}
	printf("Velikost datoteke '%s': %d\n", args[1], stZnakov);
  }
}
