#include <stdio.h>


int main() {
  int x=15;

  int *p;

  p = &x;              // s kazalcem pokazi na naslov, kjer se nahaja x
  // p = (int *) 0xEFFE98;  //ce bi vedeli naslov, bi lahko tudi tako!

  printf("%p\n", &x);  // izpis: 15


  *p = 42;             // tja, kamor kaze p (torej tja, kjer se nahaja x), zapisi 42


  printf("%d\n", x);   // izpis: 42
}
