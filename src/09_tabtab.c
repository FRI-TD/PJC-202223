#include <stdio.h>
#include <stdlib.h>

int main() {
  int **t;

  t = malloc(3 * sizeof(int *));
  
  t[0] = malloc(3 * sizeof(int));
  t[1] = malloc(2 * sizeof(int));
  t[2] = malloc(5 * sizeof(int));

  t[0][0] = 1;
  t[0][1] = 2;
  t[0][2] = 3;

  t[1][0] = 4;
  t[1][1] = 5;

  t[2][0] = 6;
  t[2][1] = 7;
  t[2][2] = 8;
  t[2][3] = 9;
  t[2][4] = 10;

  printf("%d\n", t[1][2]); // nevarno! za t[1] sta rezervirani samo dve mesti, dostop do tretjega mesta v tej tabeli lahko pomeni karkoli

}
