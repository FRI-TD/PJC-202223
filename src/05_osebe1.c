// program prebere ime, priimek in starost za 5 oseb

#include <stdlib.h>
#include <stdio.h>

// zelo slaba resitev, saj ni skalabilna, program je zelo 
// tezko vzdrzevati, vse moramo pisati brez zank
int main() {

  char ime1[10], ime2[10], ime3[10], ime4[10], ime5[10];
  char priimek1[10], priimek2[10], priimek3[10], priimek4[10], priimek5[10];
  int starost1, starost2, starost3, starost4, starost5;

  printf("Vpisi ime 1. osebe: "); scanf("%s", ime1);
  printf("Vpisi ime 2. osebe: "); scanf("%s", ime2);
  printf("Vpisi ime 3. osebe: "); scanf("%s", ime3);
  printf("Vpisi ime 4. osebe: "); scanf("%s", ime4);
  printf("Vpisi ime 5. osebe: "); scanf("%s", ime5);

  printf("Vpisi priimek 1. osebe: "); scanf("%s", priimek1);
  printf("Vpisi priimek 2. osebe: "); scanf("%s", priimek2);
  printf("Vpisi priimek 3. osebe: "); scanf("%s", priimek3);
  printf("Vpisi priimek 4. osebe: "); scanf("%s", priimek4);
  printf("Vpisi priimek 5. osebe: "); scanf("%s", priimek5);

  printf("Vpisi starost 1. osebe: "); scanf("%s", &starost1);
  printf("Vpisi starost 2. osebe: "); scanf("%s", &starost2);
  printf("Vpisi starost 3. osebe: "); scanf("%s", &starost3);
  printf("Vpisi starost 4. osebe: "); scanf("%s", &starost4);
  printf("Vpisi starost 5. osebe: "); scanf("%s", &starost5);

}

