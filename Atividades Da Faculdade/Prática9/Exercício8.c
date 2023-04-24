//
// Created by miguel.carvalho on 20/04/2023.
//
#include <stdio.h>

int main() {
    int L, i;
    long int a = 0, b = 1, c;

    printf("Digite um número inteiro positivo L: ");
    scanf("%d", &L);

    printf("Sequência de Fibonacci menor que %d:\n", L);

    while (b < L) {
        printf("%ld ", b); // imprime o elemento atual
        c = a + b; // calcula o próximo elemento
        a = b; // atualiza os valores de a e b para o próximo cálculo
        b = c;
    }

    printf("\n");

    return 0;
}
