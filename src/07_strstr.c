#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *niz = "To je dolg niz";
	
  char *t = niz;  

  while (t != NULL) {
	printf("Index: %d - ", (t-niz));
    printf("%s\n", t[0]== ' ' ? t+1 : t);
	t++;
	t = strstr(t, " ");
  }
}
