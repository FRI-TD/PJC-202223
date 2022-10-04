#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef void uredi(int *, int);

void bubbleSort(int *t, int n) {
  printf("Urejanje z BubbleSort\n");
}

void insertionSort(int *t, int n) {
  printf("Urejanje z InsertionSort\n");
}

int primerjaj(const void *a, const void *b) {
  int e1 = *((int *)a);
  int e2 = *((int *)b);

  return e1-e2;
}

int main() {
  int t[] = {4,3,7,1, 8,2,0,6,5,9};
  int a=2;

  uredi *u;

  if (a==1) // urejanje z BS
	u = bubbleSort;
  else
	u = insertionSort;

  u(t, 4);

  qsort(t, 10, sizeof(int), primerjaj);
  for(int i=0; i<10; i++) printf("%d\n", t[i]);
}
