//
// Created by Miguel on 09/04/2023.
//
#include<stdio.h>
#include<string.h>

int main(){

    char palavra1[100], palavra2[100], palavra3[100], nova_palavra[300];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    printf("Digite a terceira palavra: ");
    scanf("%s", palavra3);

    sprintf(nova_palavra, "%s-%s-%s", palavra1, palavra2, palavra3);

    printf("A nova palavra com separador é: %s\n", nova_palavra);

    int tamanho = strlen(nova_palavra);

    printf("A nova palavra de trás para frente é: ");
    for(int i = tamanho - 1; i >= 0; i--) {
        printf("%c", nova_palavra[i]);
    }


















}