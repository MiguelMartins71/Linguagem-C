//
// Created by miguel.carvalho on 25/04/2023.
//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void calcular_media(float nota1, float nota2, float nota3, char opcao) {
    float media;
    if(opcao == 'A') {
        media = (nota1 + nota2 + nota3) / 3;
        printf("Média aritmética: %.2f\n", media);
    } else if(opcao == 'P') {
        media = (nota1*5 + nota2*3 + nota3*2) / 10;
        printf("Média ponderada: %.2f\n", media);
    } else {
        printf("Opção inválida.\n");
    }
}

int main() {
    int n, i;
    float nota1, nota2, nota3;
    char opcao;

    printf("Digite o número de alunos: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nAluno %d\n", i+1);
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);

        printf("Digite a opção (A - média aritmética / P - média ponderada): ");
        scanf(" %c", &opcao);

        calcular_media(nota1, nota2, nota3, opcao);
    }

    return 0;
}





