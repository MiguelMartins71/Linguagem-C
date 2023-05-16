// outras bibliotecas podem ser incluídas no arquivo .c que implementa as
// funções
#include <stdio.h>
#include "funcoes.h"
#include<string.h>
#include<ctype.h>
int fatorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * fatorial(n - 1);
    }
}
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
int strLenght(char *palavra){
    if (*palavra == '\0') {
        return 0;
    }
        // Senão, adiciona 1 ao tamanho da string restante e chama a função recursivamente com a próxima posição
    else {
        return 1 + strLenght(palavra + 1);
    }

}
int contarDigitos(int n){
    if(n < 10){
        return 1;

    }else{

        return 1 + contarDigitos(n  /  10);
    }
}
int contarDigitos_recursivo(int n){
    if(n < 10){
        return 1;

    }else{

        return 1 + contarDigitos(n  /  10);
    }
}

int isPalindromo_recursivo(char *palavra, int n){
    if (n <= 1) {
        return 1;
    }
    // Verifica se a primeira e última letras são iguais
    if (palavra[0] == palavra[n-1]) {
        // Chamada recursiva, reduzindo a palavra em ambos os lados
        return isPalindromo_recursivo(palavra+1, n-2);
    } else {
        return 0;
    }


}

int isPrimo(int n){

    if (n <= 1) {
        return 0;
    }
    if (n <= 3) {
        return 1;
    }

    // Verifica se é divisível por 2 ou 3
    if (n % 2 == 0 || n % 3 == 0) {
        return 0;
    }

    // Verifica se é divisível por outros números ímpares
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }

    return 1;

}



