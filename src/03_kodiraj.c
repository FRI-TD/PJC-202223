// funkcija prejme besedilo in ga zakodira po XOR metodi 
// (znak po znaku XORa s pomocjo kljuca)

// besedilo: "To je test"
// kljuc:    "abc"
//
// To je test
// abcabcabca
//
// T xor a, o xor b, ' ' xor c, ...

#include <string.h>

char kljuc[10] = "abc";

void kodiraj(char besedilo[]) {

  for(int i=0; i<strlen(besedilo); i++) {
	besedilo[i] = besedilo[i] ^ kljuc[i % strlen(kljuc)];
  }
}
