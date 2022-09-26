// Izpis postevanke

//  Primer izpisa za n=5
//  1 * 5 =  5
//  2 * 5 = 10
//  ...
// 10 * 5 = 50

#include <stdio.h>

int main() {
	int n= 5;

	for(int i=1; i<=10; i++) 
      printf("%2d * %d = %2d\n", i, n, i*n);	
	

	return 0;
}
