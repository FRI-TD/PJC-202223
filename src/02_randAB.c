// izpis 10 razlicnih nakljucnih stevil iz intervala [a,b]

#include <stdio.h>
#include <stdlib.h>
#define N 10

int main() {
  int s[N];   // tabela generiranih stevil
  int n=0;    // stevilo ze shranjenih stevil

  int a=1;
  int b=100;

  while (n < N) {
	// ustvarimo stevilo iz intervala [a,b]
	int x = a + rand() % (b-a+1);

	// preverim, ali je x ze v tabeli
	int zeVTabeli=0;
	for(int i=0; i<n; i++) {
	  if (s[i]==x) {
		zeVTabeli=1;
		break;
	  }
	}

	if (zeVTabeli == 0) {
	  s[n] = x;
	  n++;
	}
  }

  for(int i=0; i<N; i++)
	printf("%d\n", s[i]);
}
