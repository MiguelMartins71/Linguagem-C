//
// Created by miguel.carvalho on 26/04/2023.
//
#include <stdio.h>

float calculaS(int N) {
    float S = 0;
    int i;
    for (i = 1; i <= N; i++) {
        S += (i*i+1)/(float)(i+3);
    }
    return S;
}

int main() {
    int N;
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    printf("O valor de S e: %.2f\n", calculaS(N));
    return 0;
}
