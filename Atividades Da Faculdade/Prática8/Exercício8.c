//
// Created by miguel.carvalho on 02/04/2023.
//
#include<stdio.h>
#include<string.h>

int main(){

    char palavra[100];
    int i, j, palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    // Verifica se a palavra é um palíndromo
    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        if (palavra[i] != palavra[j]) {
            palindromo = 0;
            break;
        }
    }

    // Imprime a mensagem "sim" ou "nao" na tela, dependendo se a palavra é um palíndromo ou não
    if (palindromo == 1) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }






}