#include <stdio.h>

typedef int m[3];

int main() {
  int a[] = {1,2,3,4,5,6,7,8,9};

  m *b;
  b = (m *) a;

  printf("%d\n", b[2][1]);
}
