//
// Created by miguel.carvalho on 25/04/2023.
//
#include<stdio.h>
#include<stdlib.h>


void media_populacao(){
    int cont=0;
    float salario,soma=0;
    printf("Digite o salário de cada habitante (digite -1 para encerrar): ");
    scanf("%f", &salario);

    while(salario != -1) {
        cont++;
        soma+= salario;
        printf("Digite o salário de cada habitante (digite -1 para encerrar): ");
        scanf("%f", &salario);
    }

    if(cont>0){
        float media_salario = soma / cont;
        printf("A média de salário da população é: %.2f\n", media_salario);
    } else {
        printf("Não há dados para calcular a média de salário.\n");
    }
    }

int main(){

media_populacao();


}