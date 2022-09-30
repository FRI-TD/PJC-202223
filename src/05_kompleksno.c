// delo s kompleksnimi stevili

#include <stdio.h>

// struktura "kompleksno" je zapisana v datoteki cplx.h
#include "../include/cplx.h"

void izpisi(struct kompleksno x) {
  printf("%.2f + %.2f i\n", x.re, x.im);
}

int main() {
  kompleksno z;
  z.re = 3;
  z.im = 2;

  kompleksno z1 = {7, 5};

  struct kompleksno z2 = {.im=7, .re=5};

  struct kompleksno z3 = {.im=13};

  izpisi(z3);
}
