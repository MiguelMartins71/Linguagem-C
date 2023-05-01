//
// Created by miguel.carvalho on 26/04/2023.
//

#include <stdio.h>

float mediaAprovados() {
    float nota, soma = 0;
    int numAlunos = 0, numAprovados = 0;

    printf("Digite as notas dos alunos (digite um valor negativo para encerrar):\n");
    do {
        printf("Nota do aluno %d: ", numAlunos + 1);
        scanf("%f", &nota);

        if (nota >= 6) {
            soma += nota;
            numAprovados++;
        }

        numAlunos++;
    } while (nota >= 0);

    // Caso não tenha sido digitada nenhuma nota aprovada, retorna 0
    if (numAprovados == 0) {
        return 0;
    }

    return soma / numAprovados;
}

int main() {
    int numAlunos;
    float media;

    printf("Digite o número de alunos: ");
    scanf("%d", &numAlunos);

    media = mediaAprovados();

    printf("A média das notas dos alunos aprovados é: %.2f\n", media);

    return 0;
}
