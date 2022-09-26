// program sesteje dve stevili in izpise 
// x + y = vsota

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *args[]) {
  // pretvorba prvih dveh argumentov v celo stevilo
  int x = atoi(args[1]);
  int y = atoi(args[2]);

  printf("%d + %d = %d\n", x, y, x+y);

  return 0;
}
