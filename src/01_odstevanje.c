#include <stdio.h>

void odstevaj(int n) {
    for(int i=n; i>=0; i--) {
		printf("%d\n",i); 
	}
}

main() {
  odstevaj(10);
}
