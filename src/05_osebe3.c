// program prebere ime, priimek in starost za 5 oseb

#include <stdlib.h>
#include <stdio.h>

#define N 5

// definiramo nov tip:    struct oseba
struct oseba {
  char ime[10];
  char priimek[10];
  int  starost;
};


// v programu vodimo (eno!) tabelo oseb, podatki v tabeli so tipa "struct oseba",
// vsak element tabele ima podatek o imenu, priimku in starosti osebe 
int main() {
  struct oseba osebe[N]; 
  
  for(int i=0; i<N; i++) {
    printf("Vpisi ime %d. osebe: ", i+1);     scanf("%s", &osebe[i].ime);
    printf("Vpisi priimek %d. osebe: ", i+1); scanf("%s", &osebe[i].priimek); 
    printf("Vpisi starost %d. osebe: ", i+1); scanf("%d", &osebe[i].starost);
  }
}

