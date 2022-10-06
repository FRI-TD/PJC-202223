#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **args, char **env) {
  char *argumenti = args[0];
  for(int i=0;i<100; i++)
	printf("%c", argumenti[i] < 32 ? '?' : argumenti[i]);

  printf("\n\nOkoljske spremenljivke\n");

  /* ... to dela na linuxu
  for(int i=0; ; i++) {
    if (env[i] == NULL) break;
	printf("%s\n", env[i]);
  }
  */
   printf("PATH = %s\n", getenv("PATH"));
}
