
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct javaheader {
  int32_t magic;
  int16_t minor;
  int16_t major;
} javaheader;



int main(int argc, char **args) {
  FILE *f = fopen("X.class", "rb");
 
  javaheader jh;
  fread(&jh, sizeof(javaheader), 1, f);

  printf("%X \n", jh.magic);
  printf("%X \n", jh.major);
}
