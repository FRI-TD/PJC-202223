#include <stdio.h>

typedef int v[3];

int main() {
  int a[] = {1,2,3,4,5,6,7,8,9};

  v *b = (v *) a;

  printf("%*d\n", 7, b[2][1]);
  printf("%*d\n", 5, a[2*3+1]);
  
}
