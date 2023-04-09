//
// Created by Miguel on 09/04/2023.
//
#include<string.h>
#include<stdio.h>

int main(){

    char palavra1[100], palavra2[100], nova_palavra[200];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    strcpy(nova_palavra, palavra1);
    strcat(nova_palavra, palavra2);

    printf("A nova palavra concatenada é: %s\n", nova_palavra);





}