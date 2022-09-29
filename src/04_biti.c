#include <stdio.h>

// funkcija presteje in vrne stevilo prizganih bitov v x
int steviloBitov(int x) {
  int r = 0;
  while (x != 0) {
	// ce je spodnji bit prizgan, povecam r
    if (x & 1) r++;
	x = x >> 1;
  }
  return r;
}

// funkcija presteje in vrne stevilo prizganih bitov v x
// princip delovanja: operacija x = x & (x-1) "ugasne" skrajno desni prizgani bit
int stB(int x) {
  int r;
  for(r=0; x>0; r++, x = x & (x-1));
  return r;
}


int main() {
  int x = 42;
  printf("Stevilo bitov v %d je %d\n", x, stB(x));

}
