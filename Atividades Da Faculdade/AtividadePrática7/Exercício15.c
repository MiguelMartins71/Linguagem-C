//
// Created by Miguel on 09/04/2023.
//
#include<stdio.h>

#include<string.h>
#include<stdlib.h>
int main(){

    char string[100];
    int inteiro;
    float real;

    printf("Digite uma string: ");
    scanf("%s", string);

    if(sscanf(string, "%d", &inteiro) == 1) { // verifica se é um número inteiro
        printf("%d\n", inteiro + 2);
    } else if(sscanf(string, "%f", &real) == 1) { // verifica se é um número real
        printf("%.2f\n", real - 2);
    } else { // se não for um número, imprime "não se aplica"
        printf("Não se aplica\n");
    }


}