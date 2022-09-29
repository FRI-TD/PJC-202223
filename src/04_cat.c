// program cat na izhod (zaslon) izpise  vsebino vseh datotek, ki so 
// podane v argumentih, oziroma vsebino stdin (tipkovnice), ce argumentov ni

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char *args[]) {
  int z;

  FILE *vhod;
  if (argc > 1)
	vhod = fopen(args[1], "r");
  else 
	vhod = stdin;

  int i = 2;
  while (vhod != NULL) {
	while((z = fgetc(vhod)) != EOF)
	  printf("%c", z);

	fclose(vhod);

	if (i < argc) {
	  vhod = fopen(args[i++], "r");
	}
  }

}
