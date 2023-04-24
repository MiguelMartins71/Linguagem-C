//
// Created by miguel.carvalho on 02/04/2023.
//
#include<stdio.h>

int main(){

    char palavra1[100], palavra2[100];
    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    int comparacao = strcmp(palavra1, palavra2);

    if (comparacao < 0) {
        printf("A primeira palavra (%s) vem primeiro na ordem alfabetica.\n", palavra1);
    } else if (comparacao > 0) {
        printf("A segunda palavra (%s) vem primeiro na ordem alfabetica.\n", palavra2);
    } else {
        printf("As palavras sao iguais.\n");
    }










}