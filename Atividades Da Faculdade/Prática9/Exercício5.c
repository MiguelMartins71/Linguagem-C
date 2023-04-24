//
// Created by miguel.carvalho on 20/04/2023.
//
#include <stdio.h>

int main() {
    float salario, maiorSalario = 0.0, somaSalario = 0.0, mediaSalario, totalSalarioAte100 = 0.0;
    int numFilhos, totalHabitantes = 0, totalFilhos = 0;
    float mediaFilhos;

    printf("Digite o salário do habitante (digite um valor negativo para finalizar): ");
    scanf("%f", &salario);

    while (salario >= 0) {
        printf("Digite o número de filhos do habitante: ");
        scanf("%d", &numFilhos);

        totalHabitantes++;
        totalFilhos += numFilhos;
        somaSalario += salario;

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        if (salario <= 100.0) {
            totalSalarioAte100++;
        }

        printf("\nDigite o salário do habitante (digite um valor negativo para finalizar): ");
        scanf("%f", &salario);
    }

    mediaSalario = somaSalario / totalHabitantes;
    mediaFilhos = (float) totalFilhos / totalHabitantes;
    float percentualSalarioAte100 = (totalSalarioAte100 / totalHabitantes) * 100.0;

    printf("\nA média do salário da população é: R$%.2f", mediaSalario);
    printf("\nA média do número de filhos da população é: %.2f", mediaFilhos);
    printf("\nO maior salário é: R$%.2f", maiorSalario);
    printf("\nO percentual de pessoas com salário até R$100,00 é: %.2f%%", percentualSalarioAte100);

    return 0;
}
