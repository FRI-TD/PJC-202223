#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n=100000; // koliko tock bom generiral
  int v=0;    // strejem, koliko tock je padlo v krog

  for(int i=0; i<n; i++) {
    double x = 1.0 * rand() / RAND_MAX; // nakljucno stevilo med 0 in 1
    double y = 1.0 * rand() / RAND_MAX; // nakljucno stevilo med 0 in 1

    if (x*x + y*y <= 1) v++;
  }

  printf("pi = %f\n", 4.0 * v / n);
}
