#include <stdio.h>
#include <stdlib.h>

// razsiri == realloc (tabelo poveca za eno polje)
void razsiri(int **tab, int n) {
  int *nova = (int *) malloc((n+1) * sizeof(int));

  for(int i=0; i<n; i++)
	nova[i] = (*tab)[i];
  nova[n] = 0;
  
  if (n>0) free(*tab);

  *tab = nova;
}

int main() {
  int *tab;
  for(int i=0; i<100; i++) {
	razsiri(&tab, i);
	tab[i] = i;
  }
  free(tab);
}
