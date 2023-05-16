// outras bibliotecas podem ser incluídas no arquivo .c que implementa as
// funções
#include <stdio.h>

void proc(int *var) {
  int *p = var;

  printf("*var: %d\n", *var);
  printf("*p: %d\n", *p);
  printf("&var: %d\n", &var);
  printf("&p: %d\n", &p);
  printf("var: %d\n", var);
  printf("&p: %d\n", &p);
  *var = 6;
}

int fibonacci(int n) {
  int ant1 = 0, ant2 = 1, atual;

  if (n == 1) {
    return ant1;
  } else if (n == 2) {
    return ant2;
  } else {
    for (int i = 2; i < n; i++) {
      atual = ant1 + ant2;
      ant1 = ant2;
      ant2 = atual;
    }
    return atual;
  }
}


