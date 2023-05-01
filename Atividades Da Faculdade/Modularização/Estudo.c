//
// Created by miguel.carvalho on 25/04/2023.
//

#include<stdio.h>
#include<stdlib.h>
int main(){

    int v1, v2, resultado;

    printf("Digite o valor 1");
    scanf("%d", &v1);

    printf("Digite o valor 2");
    scanf("%d", &v2);

    resultado = mult(v1,v2);

    printf("O Resultado é : %d\n", resultado);
    return 0;


}

int mult(int N1,int N2){

    int resultado;
    resultado = N1 * N2;
    return (resultado);


}
