//
// Created by miguel.carvalho on 20/04/2023.
//
#include <stdio.h>

int main() {
    int num, count_39 = 0, count_25 = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);
        if (num % 3 == 0 && num % 9 == 0) {
            printf("%d é divisível por 3 e 9\n", num);
            count_39++;
        }
        if (num % 2 == 0 && num % 5 == 0) {
            printf("%d é divisível por 2 e 5\n", num);
            count_25++;
        }
        if (num % 3 != 0 && num % 9 != 0 && num % 2 != 0 && num % 5 != 0) {
            printf("Número não é divisível pelos valores: %d\n", num);
        }
    }
    printf("Quantidade de números divisíveis por 3 e 9: %d\n", count_39);
    printf("Quantidade de números divisíveis por 2 e 5: %d\n", count_25);
    return 0;
}
