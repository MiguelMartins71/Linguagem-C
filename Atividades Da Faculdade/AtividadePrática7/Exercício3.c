//
// Created by miguel.carvalho on 02/04/2023.
//
#include<stdio.h>
#include<string.h>
int main(){
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
     strupr(palavra);
     printf("%s",palavra);

}