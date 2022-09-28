#include <stdio.h>
#include <stdlib.h>


int main() {
  int mesec = 4; // april

  int stDni;
 
  switch (mesec) {
	case 2:
	  stDni = 28;
	  break;
	case 4:
	case 6:
	case 9:
	case 11:
	  stDni = 30;
	  break;
	default:
	  stDni = 31;
	  break;
  }

  printf("Stevilo dni za mesec %d je %d\n", mesec, stDni);
   
  return 0;
}
