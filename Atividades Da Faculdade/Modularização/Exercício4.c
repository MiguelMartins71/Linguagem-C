//
// Created by miguel.carvalho on 26/04/2023.
//
#include <stdio.h>

void verifica_triangulo(float x, float y, float z);

int main() {
    float x, y, z;
    char continua;

    do {
        printf("Digite os tres lados do triangulo: ");
        scanf("%f %f %f", &x, &y, &z);

        verifica_triangulo(x, y, z);

        printf("Deseja continuar? (S/N) ");
        scanf(" %c", &continua);

    } while (continua == 'S' || continua == 's');

    return 0;
}
