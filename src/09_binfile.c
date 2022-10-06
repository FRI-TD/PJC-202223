
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **args) {
  FILE *f = fopen("viri/medo.png", "rb");

  if (f!=NULL) {
    printf("OK\n");

	// dolzina datoteke
	fseek(f, 0, SEEK_END);   // skocim na konec datoteke
	long dolzina = ftell(f); // kje v datoteki se nahajam
	printf("Dolzina datoteke: %d\n", dolzina);

	fseek(f, 0, SEEK_SET);

	FILE *fout = fopen("viri/medo4.png", "wb");

	/* bajt-po-bajtu .... pocasno
	int z;
	while( (z = fgetc(f)) != EOF)
	  fputc(z, fout);
	*/

	/* blok-po-bloku - vse na enkrat
	char blok[dolzina];
	// preberem do dolzina znakov na enkrat
	fread(blok, sizeof(char), dolzina, f);
    fwrite(blok,sizeof(char), dolzina, fout);
    */

	/* blok-po-bloku ... po 4096 bajtov na enkrat */
	char blok[4096];
    while (!feof(f)) {
      int prebrano = fread(blok, sizeof(char), 4096, f);
	  fwrite(blok,sizeof(char), prebrano, fout);
	}

	fclose(fout);
	

    fclose(f);
  }
}
