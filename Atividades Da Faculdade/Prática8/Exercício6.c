//
// Created by miguel.carvalho on 02/04/2023.
//
#include<stdio.h>
#include <string.h>
int main(){
    char palavra1[100], palavra2[100];


    int comparacao = strcmp(palavra1, palavra2);

    if (comparacao < 0) {
        printf("%s", palavra1);
    } else if (comparacao > 0) {
        printf("%s", palavra2);
    } else {
        printf("As palavras sao iguais.\n");
    }












}