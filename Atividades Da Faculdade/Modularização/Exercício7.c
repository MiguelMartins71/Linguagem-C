//
// Created by miguel.carvalho on 26/04/2023.
//


#include <stdio.h>
#include <stdbool.h>

bool eh_positivo(int num);

int main() {
    int n, num;
    bool resultado;

    printf("Digite a quantidade de numeros a serem verificados: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);

        resultado = eh_positivo(num);

        if (resultado == true) {
            printf("O numero %d eh positivo\n", num);
        } else {
            printf("O numero %d eh negativo\n", num);
        }
    }

    return 0;
}
