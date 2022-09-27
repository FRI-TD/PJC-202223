#include <stdio.h>
#include <stdlib.h>
int main() {
  char vrstica[5];

  printf("Vpisi nekaj: ");

  // funkcije gets NIKOLI ne uporabljaj!
  // gets(vrstica);

  fgets(vrstica, 5, stdin);

  printf("Vpisal si: %s\n", vrstica);

  return 0;
}
