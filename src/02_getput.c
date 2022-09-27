#include <stdio.h>
#include <stdlib.h>
int main() {
  int znak;

  system("/bin/stty raw");

  do {
    znak = getchar();
	putchar(znak);
  } while (znak != '.');
	

  return 0;
}
