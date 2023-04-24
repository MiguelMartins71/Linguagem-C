//
// Created by miguel.carvalho on 18/04/2023.
//
//Miguel Henrique Martins Carvalho
//766634
#include <stdio.h>

int main() {
    int n, valor, positivos = 0, negativos = 0, zeros = 0;
    float perc_pos, perc_neg, perc_zero;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &valor);

        if (valor > 0) {
            positivos++;
        } else if (valor < 0) {
            negativos++;
        } else {
            zeros++;
        }
    }

    perc_pos = (float)positivos/n * 100;
    perc_neg = (float)negativos/n * 100;
    perc_zero = (float)zeros/n * 100;

    printf("\nQuantidade de valores positivos: %d\n", positivos);
    printf("Quantidade de valores negativos: %d\n", negativos);
    printf("Quantidade de zeros: %d\n", zeros);
    printf("Percentual de valores positivos: %.2f%%\n", perc_pos);
    printf("Percentual de valores negativos: %.2f%%\n", perc_neg);
    printf("Percentual de zeros: %.2f%%\n", perc_zero);

    return 0;
}

