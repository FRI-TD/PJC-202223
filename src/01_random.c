// izpis 10 nakljucnih stevil; 

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
  // printf("RAND_MAX=%d\n", RAND_MAX);

  // za zacetno seme uporabimo trenutni cas
  srand(time(NULL));

  for(int i=0; i<10; i++)
	printf("%d\n", rand() % 100);
}
