// stevilo tock v tabeli
#define N 3

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {

  int tab[] = {2,5,7,9,0};

  int* p = tab;

  while (p <= &tab[4]) {
	printf("%d\n", *p);
	p++;
  }
}
