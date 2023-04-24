//
// Created by miguel.carvalho on 20/04/2023.
//
#include <stdio.h>

int main() {
    int n, i, fatorial;
    float e = 1.0;

    printf("Digite um valor inteiro e positivo para N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fatorial = 1;
        for (int j = 1; j <= i; j++) {
            fatorial *= j;
        }
        e += 1.0 / fatorial;
    }

    printf("O valor de E é: %f", e);

    return 0;
}
