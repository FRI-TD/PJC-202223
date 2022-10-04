// stevilo tock v tabeli
#define N 3

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct tocka {
  int x;
  int y;
} tocka;

int main() {
  tocka **tab;

  tab = malloc(N * sizeof(tocka *));

  for(int i=0; i<N; i++) {
    tocka *t = malloc(sizeof(tocka));
	tab[i] = t;

	// tab[i] = malloc(sizeof(tocka));

	//tab[i]->x = i;
    (*tab[i]).x = i;   
	tab[i]->y = i;
  }

  for(int i=0; i<N; i++) 
	printf("Tocka (%d,%d), razdalja od (0,0) je %.2f\n", 
	  tab[i]->x, tab[i]->y, sqrt(tab[i]->x*tab[i]->x+tab[i]->y*tab[i]->y));

  for(int i=0; i<N; i++) 
	free(tab[i]);
  free(tab);
}
