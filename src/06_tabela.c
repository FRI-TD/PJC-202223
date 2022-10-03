#include <stdio.h>


int main() {
  int a[] = {1,2,3,4,5};

  int *pa = a;  // isto kot pa = &a[0]

  *pa = 15;
  
  pa++;  // pa = pa +7;
  *pa = 16;

  *(pa+3) = 20;   // == pa[3] = 20

  pa[2] = 30;

  for(int i=0; i<5; i++)
    printf("%d ", a[i]);
  printf("\n");
}
