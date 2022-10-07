#include <stdio.h>

int zamenjaj() {
  int a=10, b=5;

  asm(".intel_syntax noprefix  \n"
      "mov eax, %1             \n"
      "mov %0,  eax            \n"

      :"=r"(b)     /* output*/
      :"r"(a)      /* input  */
      :"eax"       /* clobbered registers */
  ); 

  return b;  // 10
}

int main() {
  int _offset;
  printf("%d", zamenjaj());
}
