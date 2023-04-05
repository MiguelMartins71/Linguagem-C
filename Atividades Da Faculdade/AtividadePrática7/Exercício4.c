//
// Created by miguel.carvalho on 02/04/2023.
//
#include<stdio.h>

int main(){

    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    // Converter a primeira letra para maiúscula usando a função toupper()
    palavra[0] = toupper(palavra[0]);

    // Converter as letras restantes para minúsculas usando a função tolower()
    for (int i = 1; palavra[i]; i++) {
        palavra[i] = tolower(palavra[i]);
    }

    printf("A palavra com a primeira letra maiuscula e as demais minusculas e: %s\n", palavra);










}