#include <stdio.h>
int produkt(int x, int y) {
  asm(".intel_syntax noprefix\n"
      "         xor eax, eax          \n"
      "LOOP:    add eax, ebx          \n"
      "         sub ecx, 1            \n"
      "         cmp ecx, 0            \n"
      "         jg  LOOP              \n"
     :
     : "b" (x), "c" (y)
     :
  );
}

int main(int argv, char **args) {
  printf("%d\n", produkt(3,7));
}
