// izpis na variabilno stevilo decimalk

// pi=3.1415926
// d=3  -> 3.141
// d=5  -> 3.14159

#include <stdio.h>
int main() {
	double pi= 3.14159265358;
	int d = 7;

  	// znak "*" se nadomesti z vrednostjo spr. d
	printf("%.*f\n", d, pi);
	return 0;
}
