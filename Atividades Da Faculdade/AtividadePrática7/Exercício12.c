//
// Created by Miguel on 09/04/2023.
//
#include<string.h>
#include<stdio.h>

int main(){


    char palavra1[100], palavra2[100], palavra3[100];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    printf("Digite a terceira palavra: ");
    scanf("%s", palavra3);

    if (strcmp(palavra1, palavra2) > 0) {
        char temp[100];
        strcpy(temp, palavra1);
        strcpy(palavra1, palavra2);
        strcpy(palavra2, temp);
    }

    if (strcmp(palavra2, palavra3) > 0) {
        char temp[100];
        strcpy(temp, palavra2);
        strcpy(palavra2, palavra3);
        strcpy(palavra3, temp);
    }

    if (strcmp(palavra1, palavra2) > 0) {
        char temp[100];
        strcpy(temp, palavra1);
        strcpy(palavra1, palavra2);
        strcpy(palavra2, temp);
    }

    printf("A última palavra em ordem alfabética é: %s\n", palavra3);


















}