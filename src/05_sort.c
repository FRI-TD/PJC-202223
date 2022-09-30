#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define N 80000

void uredi(int t[], int n) {
  for(int i=0; i<n; i++) {
    for(int j=0; j<n-i-1; j++)
	  if (t[j] > t[j+1]) {
	    // zamenjaj j-ti in j+1-ti element
	    
		//int tmp = t[j];
	    //t[j]    = t[j+1];
	    //t[j+1]  = tmp;
		
		                  // primer: t[j]=5       t[j+1]=3
		t[j]   = t[j] + t[j+1];   // t[j]=3+5=8   t[j+1]=3
		t[j+1] = t[j] - t[j+1];   // t[j]=8       t[j+1]=8-3=5
		t[j]   = t[j] - t[j+1];   // t[j]=8-5=3   t[j+1]=5
 	  }
  }
}

int main() {
	srand(time(NULL));

  // ustvarim tabelo nakljucnih stevil
  int t[N];
  for(int i=0; i<N; i++)
	t[i] = rand() % 100;

  // tabelo uredim
  clock_t zacetek = clock();
  uredi(t, N);
  clock_t konec   = clock();

  // cas izvajanja: konec-zacetek
  printf("Cas izvajanja: %.2f s\n", 1.0*(konec-zacetek) / CLOCKS_PER_SEC);

  // tabelo izpisem
  /*
  for(int i=0; i<N; i++)
	printf("%d ", t[i]);
  printf("\n");
  */
}

