//
// Created by miguel.carvalho on 02/04/2023.
//
#include<stdio.h>

int main(){

    char caractere;
    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    if (caractere >= 'A' && caractere <= 'Z') {
        printf("O caractere '%c' e uma letra maiuscula.\n", caractere);
    } else if (caractere >= 'a' && caractere <= 'z') {
        printf("O caractere '%c' e uma letra minuscula.\n", caractere);
    } else if (caractere >= '0' && caractere <= '9') {
        printf("O caractere '%c' e um numero.\n", caractere);
    } else {
        printf("O caractere '%c' e outro tipo de caractere.\n", caractere);
    }









}