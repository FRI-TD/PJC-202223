#include <stdio.h>

// funkcija lahko zamenja vrednost parametrov, saj je prejela
// reference na spremenljivke (in ne vrednosti samih)
void zamenjaj(int *x, int *y) {
  printf("(x,y) = (%d,%d)\n", *x,*y);
  int t = *x;
  *x = *y;
  *y = t; 
  printf("(x,y) = (%d,%d)\n", *x,*y);
}


int main() {
  int a=3;
  int b=5;
 
  printf("(a,b) = (%d,%d)\n", a,b);

  zamenjaj(&a,&b);

  printf("(a,b) = (%d,%d)\n", a,b);
}
