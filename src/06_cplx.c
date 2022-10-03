#include "cplx.h"
#include <stdio.h>

// ali funkcija lahko vrne rezultat tipa struktura?
// DA, lahko, elementi strukture se prenesejo kot terke 
// (prenese se celoten blok podatkov).
kompleksno sestej(kompleksno a, kompleksno b) {
  kompleksno r;
  r.re = a.re + b.re;
  r.im = a.im + b.im;
  return r;
}

int main() {
  kompleksno x1 = {1,2};
  kompleksno x2 = {3,4};

  kompleksno vsota = sestej(x1,x2);
 
  printf("(re,im) = %.2f + %.2f i\n", vsota.re, vsota.im);
}
