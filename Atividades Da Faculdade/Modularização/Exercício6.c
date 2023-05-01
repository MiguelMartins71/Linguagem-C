//
// Created by miguel.carvalho on 26/04/2023.
//
#include <stdio.h>

double calcula_S(int n);

int main() {
    int n;
    double S;

    printf("Digite um valor inteiro e positivo para N: ");
    scanf("%d", &n);

    S = calcula_S(n);

    printf("O valor de S para N = %d eh %.6f", n, S);

    return 0;
}
