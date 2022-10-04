#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char str[]   = "::abc::def:ghi";
  char delim[] = ":";

  char *result;
  int i=0;

  int cnt; // stevilo preskocenih locil
  char *back;// kazalec za "sprehod nazaj"


  result = strtok(str, delim);  // niz "str" razbij po locilih "delim"
  while (result != NULL) {
	back = result;cnt =0;
	do {
	  back--;
	  if (back < str) break;
      cnt++;
	} while (*back == delim[0]);
	i += cnt;

    printf("%d - %s\n",i, result);
	result = strtok(NULL, delim);
  }
}
