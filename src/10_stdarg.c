#include <stdarg.h>
#include <stdio.h>

// funkcija prejme variabilno stevilo parametrov
void izpisi(int params, ...) {
  va_list arg_list;
  
  int param; 

  // inicializacija
  va_start(arg_list, params);

  // sprehod po vseh parametrih
  for(param = params;  param != -1; param = va_arg(arg_list, int)) {
    printf("%d\n", param);
  }


  // "pospravimo za sabo"
  va_end(arg_list);
}

int max(int params, ...) {
  va_list arg_list;
  int param; 
  int max = params;

  // inicializacija
  va_start(arg_list, params);

  // sprehod po vseh parametrih
  for(param = params;  param != -1; param = va_arg(arg_list, int)) {
    if (param > max) max = param;
  }
  // "pospravimo za sabo"
  va_end(arg_list);
  return max;
}

int main() {
  int m = max(1,2,3,4,5,6,-1);
  printf("%d\n", m);
}

