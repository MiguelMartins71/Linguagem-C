//
// Created by miguel.carvalho on 25/04/2023.
//

#include <stdio.h>

void ordena_numeros(int a, int b, int c) {
    int lista[3] = {a, b, c};
    int i, j, temp;

    // Algoritmo de ordenação Bubble Sort
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2-i; j++) {
            if (lista[j] > lista[j+1]) {
                temp = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = temp;
            }
        }
    }

    printf("%d %d %d\n", lista[0], lista[1], lista[2]);
}

int main() {
    int n, i, a, b, c;

    printf("Digite o numero de conjuntos a serem ordenados: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite o primeiro numero do conjunto %d: ", i+1);
        scanf("%d", &a);
        printf("Digite o segundo numero do conjunto %d: ", i+1);
        scanf("%d", &b);
        printf("Digite o terceiro numero do conjunto %d: ", i+1);
        scanf("%d", &c);

        ordena_numeros(a, b, c);
    }

    return 0;
}
