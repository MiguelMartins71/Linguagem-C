//
// Created by miguel.carvalho on 20/04/2023.
//
#include <stdio.h>

int main() {
    int n, i;
    float S = 0.0;

    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        S += 1.0 / i;
        printf("Termo %d: %.2f\n", i, 1.0 / i);
    }

    printf("Valor final de S: %.2f\n", S);

    return 0;
}
