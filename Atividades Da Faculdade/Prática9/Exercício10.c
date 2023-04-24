//
// Created by miguel.carvalho on 20/04/2023.
//
#include <stdio.h>

int main() {
    int candidato_1 = 0, candidato_2 = 0, candidato_3 = 0, candidato_4 = 0, votos_nulos = 0, votos_brancos = 0;
    int codigo;

    do {
        printf("Digite o código do candidato (1 a 4), 5 para voto nulo, 6 para voto em branco ou 0 para encerrar: ");
        scanf("%d", &codigo);

        switch (codigo) {
            case 1:
                candidato_1++;
                break;
            case 2:
                candidato_2++;
                break;
            case 3:
                candidato_3++;
                break;
            case 4:
                candidato_4++;
                break;
            case 5:
                votos_nulos++;
                break;
            case 6:
                votos_brancos++;
                break;
            case 0:
                printf("Encerrando contagem...\n");
                break;
            default:
                printf("Código inválido. Tente novamente.\n");
                break;
        }
    } while (codigo != 0);

    printf("Total de votos para cada candidato:\n");
    printf("Candidato 1: %d\n", candidato_1);
    printf("Candidato 2: %d\n", candidato_2);
    printf("Candidato 3: %d\n", candidato_3);
    printf("Candidato 4: %d\n", candidato_4);
    printf("Total de votos nulos: %d\n", votos_nulos);
    printf("Total de votos em branco: %d\n", votos_brancos);

    return 0;
}
