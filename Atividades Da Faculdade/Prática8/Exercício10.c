//
// Created by miguel.carvalho on 05/04/2023.
//

#include<stdio.h>
#include<string.h>

void substituir_caractere(char* string, char caractere, int posicao) {
    int tamanho = strlen(string);
    if (posicao >= tamanho) {
        printf("Posicao informada e maior do que o tamanho da string\n");
    } else {
        for (int i = 0; i < tamanho; i++) {
            if (i == posicao) {
                string[i] = caractere;
                break;
            }
        }
        printf("Nova string: %s\n", string);
    }
}

int main() {
    char string[100];
    char caractere;
    int posicao;

    printf("Digite uma string: ");
    scanf("%s", string);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    printf("Digite uma posicao: ");
    scanf("%d", &posicao);

    substituir_caractere(string, caractere, posicao);






    }









