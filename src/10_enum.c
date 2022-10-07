#include <stdio.h>
//        1     2   3   10    11
enum DAN{PO=1, TO, SR, CE=10, PE};

enum BARVE{BELA=10, CRNA=20};

enum tipke{LEFT_SHIFT=1, RIGHT_SHIFT=2, ALT=4, CRTL=8, ALTGR=16};



void izpisiDan(enum DAN dan) {
  printf("%d\n", dan);
} 

int main() {
  izpisiDan(SR);
  izpisiDan(10);

  int t = getTipke();
  if (t & RIGHT_SHIFT == RIGHT_SHIFT) {
    // ...
  }
}

