#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int toInt(char niz[]) {
  int rezultat = 0;
  int zac = 0;
  if (niz[0]=='-') {
	zac = 1;
  }
  for(int i=zac; i<strlen(niz); i++) {
    rezultat = 10*rezultat + (niz[i] - '0');
  }
  if (zac == 1) rezultat = -rezultat;

  return rezultat;
}

int main() {
  char stevilo[] = "-1234";
  int rez = toInt(stevilo);
  printf("\"%s\" = %d\n", stevilo, rez);

   
  return 0;
}
