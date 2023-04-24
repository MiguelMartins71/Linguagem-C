//
// Created by miguel.carvalho on 20/04/2023.
//
#include <stdio.h>

int main() {
    int L, i;
    long int a = 0, b = 1, c;

    printf("Digite o número de elementos da sequência de Fibonacci que deseja imprimir: ");
    scanf("%d", &L);

    printf("Sequência de Fibonacci com %d elementos:\n", L);
    printf("%ld ", b); // imprime o primeiro elemento (b)

    for (i = 2; i <= L; i++) {
        c = a + b; // calcula o próximo elemento
        printf("%ld ", c); // imprime o próximo elemento
        a = b; // atualiza os valores de a e b para o próximo cálculo
        b = c;
    }

    printf("\n");

    return 0;
}
