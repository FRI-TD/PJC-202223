// program prebere ime, priimek in starost za 5 oseb

#include <stdlib.h>
#include <stdio.h>

#define N 5

// program uporablja 3 tabele - za imena, za priimke in za starosti
// i-ti podatek v vsaki tabeli predstavlja i-ti osebek
// za vzdrzevanje podatkov o osebah moramo skrbeti za sinhronizacijo treh tabel!
int main() {

  char ime[N][10];
  char priimek[N][10];
  int starost[N];

  for(int i=0; i<N; i++) {
    printf("Vpisi ime %d. osebe: ", i+1); scanf("%s", &ime[i]);
    printf("Vpisi priimek %d. osebe: ", i+1); scanf("%s", &priimek[i]); 
    printf("Vpisi starost %d. osebe: ", i+1); scanf("%d", &starost[i]);
  }
}

