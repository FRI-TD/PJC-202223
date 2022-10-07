#include <stdio.h>

#define N 100

#define forever for(;;)

#define min(X,Y) ((X) < (Y) ? (X) : (Y))

#define kvadrat(X) X*X

#define dprint(expr) printf(#expr " = %g\n", expr);


int kv(int x) {
	return x*x;
}

int main() {
  //forever
  //printf("%d\n", N);
  //

  int a = 5;
  int b = 6;
  int x = min(a++,b++);
  printf("min(%d,%d) = %d\n", a, b, x);

#ifdef DEBUG
  int y = 5;
  printf("Kvadrat od %d je %d\n", y, kv(y++));
#endif 

  dprint(1.0*10/7)
}

