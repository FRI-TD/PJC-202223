#include <stdio.h>
#include <stdlib.h>

#define H 20
#define W 80

int main() {
  char *blok    = (char *)  malloc(W*H*sizeof(char));
  char **zaslon = (char **) malloc(H * sizeof(char *));
  for(int i=0; i<H; i++)
	zaslon[i] = blok + i * W * sizeof(char);


  char znaki[] = {'%','#','$','+'};

  for(int i=0; i<H; i++)
    for(int j=0; j<W; j++)
	  zaslon[i][j] = znaki[(i+j) % 4];

  for(int i=0; i<H; i++) {
    for(int j=0; j<W; j++)
	  printf("%c", zaslon[i][j]);
	printf("\n");
  }

  free(blok); 
  free(zaslon);
}
