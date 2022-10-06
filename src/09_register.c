#include <stdio.h>


int main() {
  int z;
  register int i=5;
  register int j=6;

  z = i + j;

  printf("%d\n", z);
}
