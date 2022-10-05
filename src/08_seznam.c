#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_OCEN 10

typedef struct student {
  int id;
  char *ime;

  int stOcen;
  int *ocene;

  struct student *nasl;
} student;


student * novStudent(int id, char *ime) {
  student *s = malloc(sizeof(student));
  
  s->id = id;

  s->ime = malloc(strlen(ime)+1);
  strcpy(s->ime, ime);

  s->ocene  = malloc(MAX_OCEN*sizeof(int));
  s->stOcen = 0;

  s->nasl = NULL;

  return s;
}

void sprostiStudenta(student *s) {
  free(s->ime);
  free(s->ocene);
  free(s);
}

void dodajOceno(student *s, int ocena) {
  if (s != NULL && s->stOcen < MAX_OCEN)
    s->ocene[s->stOcen++] = ocena; 
}

void izpisiStudenta(student *s) {
  if (s != NULL) {
	char ocene[3*s->stOcen + 3];
	char ocena[3];
    if (s->stOcen == 0) 
	  strcpy(ocene, "/");
	else {
      strcpy(ocene, "[");
	  for(int i=0; i < s->stOcen; i++) {
        strcat(ocene, i==0 ? "" : ", ");
 		sprintf(ocena, "%d", s->ocene[i]); // pretvorba i-te ocene v string
		strcat(ocene, ocena);
	  }
      strcat(ocene, "]");     
	}
    printf("%s (%d), ocene: %s\n", s->ime, s->id, ocene);
  }
}

// funkcija doda element s na zacetek seznama z in vrne kazalec na nov zacetek
student * dodajZ(student *z, student *s) {
  s->nasl = z;
  return s;
}

// dodaj element na konec seznama
student * dodajK(student *z, student *s) {
  if (z == NULL) 
	return s;

  student* t = z;
  while (t->nasl != NULL)
	t = t->nasl;

  t->nasl = s;
  return z;
}


// dodaj element na pravo (urejeno) mesto v seznamu
student * dodajU(student *z, student *s) {
  // ali dodajamo v prazen seznam ali na začetek seznama?
  if (z == NULL || strcmp(z->ime, s->ime)<0) {
    return dodajZ(z, s);
  }

  student *t = z;
  while (t->nasl != NULL && strcmp(t->nasl->ime, s->ime)>0)
	t = t->nasl;
  s->nasl = t->nasl;
  t->nasl = s;
  return z;
}

// v seznamu poisci studenta z danim id-jem in ga odstrani
student * zbrisi(student *z, int id) {
  if (z==NULL) return z;

  // element, ki ga bom odstranil, je na zacetku seznama
  if (z->id == id) {
    student *r = z->nasl;
	sprostiStudenta(z);
	return r;
  }

  student *t = z;
  while (t->nasl != NULL && t->nasl->id != id)
	t=t->nasl;

  if (t->nasl != NULL) {
    student *r = t->nasl;
	t->nasl = t->nasl->nasl;
	sprostiStudenta(r);
  }
  return z;
}

void izpisiSeznam(student *z) {
  student* t = z;
  while (t != NULL) {
	izpisiStudenta(t);
	t = t-> nasl;
  }
}

int main() {
  student *s1 = novStudent(632, "A");
  dodajOceno(s1, 10);
  dodajOceno(s1, 8);
  dodajOceno(s1, 9);

  student *s2 = novStudent(631, "C");
  dodajOceno(s2, 6);

  student *s3 = novStudent(635, "F");
  student *s4 = novStudent(637, "D");
  student *s5 = novStudent(633, "E");
  student *s6 = novStudent(639, "I");
  student *s7 = novStudent(634, "G");
  student *s8 = novStudent(630, "Z");
  student *s9 = novStudent(638, "M");


  // izpisiStudenta(s1);
  // izpisiStudenta(s2);
  // izpisiStudenta(s3);

  //  sprostiStudenta(s1);

  student *z = NULL;  // zacvnemo s praznim seznamom
  z = dodajU(z, s1);
  z = dodajU(z, s2);
  //z = dodajU(z, s3);
  //z = dodajU(z, s4);
  //z = dodajU(z, s5);
  //z = dodajU(z, s6);
  //z = dodajU(z, s7);
  //z = dodajU(z, s8);
  //z = dodajU(z, s9);

  z = zbrisi(z, 633);
  z = zbrisi(z, 630);
  z = zbrisi(z, 631);
  z = zbrisi(z, 632);

  izpisiSeznam(z);


}
 
