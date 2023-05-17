#include<stdio.h>
#include <time.h>
#include<stdlib.h>
#define SIZE 10

//Miguel Henrique Martins Carvalho
//766634

/*
void inverterVetor(float vetor[], int tamanho) {
    int i;
    float temp;

    for (i = 0; i < tamanho / 2; i++) {
        temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
}
*/

int main(){
 /*
 //1 Construir um programa que leia um vetor A com 15 elementos inteiros. Construir um
vetor B do mesmo tipo, em que cada elemento de B deva ser o resultado do fatorial
correspondente de cada elemento de A. Imprimir na tela A e B.


int A[15], B[15];
    int i, j, fatorial;

    // Lendo os elementos do vetor A
    for (i = 0; i < 15; i++) {
        printf("Digite o elemento %d do vetor A: ", i+1);
        scanf("%d", &A[i]);
    }

    // Calculando os fatoriais e preenchendo o vetor B
    for (i = 0; i < 15; i++) {
        fatorial = 1;
        for (j = 1; j <= A[i]; j++) {
            fatorial *= j;
        }
        B[i] = fatorial;
    }

    // Imprimindo os vetores A e B
    printf("Vetor A: ");
    for (i = 0; i < 15; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Vetor B: ");
    for (i = 0; i < 15; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
*/

//2 Construir um programa que leia dois vetores A e B com 10 elementos quaisquer inteiros.
//Construir um vetor C, sendo este o resultado da união dos elementos de A e B – sem
//repetição. Apresentar C.
//srand(time(NULL)); // inicialização
//int r = rand(); // retorna um número randomico inteiro entre 0 e RAND_MAX
 
 /*
  int A[SIZE], B[SIZE], C[2 * SIZE];
    int i, j, k, duplicate;

    srand(time(NULL));

    // Preencher os vetores A e B com elementos aleatórios
    for (i = 0; i < SIZE; i++) {
        A[i] = rand() % 20; // Números aleatórios entre 0 e 19
        B[i] = rand() % 20;
    }

    // União dos elementos de A e B em C
    k = 0;
    for (i = 0; i < SIZE; i++) {
        C[k] = A[i];
        k++;
    }

    for (i = 0; i < SIZE; i++) {
        duplicate = 0;
        for (j = 0; j < SIZE; j++) {
            if (B[i] == A[j]) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            C[k] = B[i];
            k++;
        }
    }

    // Apresentar o vetor C
    printf("Vetor C: ");
    for (i = 0; i < k; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");
*/

//3 Elaborar um programa que preencha com 20 valores aleatórios do tipo real em um vetor
//A, em seguida crie um procedimento que inverta os elementos armazenados. Ou seja, o
//primeiro elemento de A passará a ser o último, o segundo elemento passará a ser o
//penúltimo e assim por diante. Imprimir A

/*
 float A[SIZE];
    int i;

    srand(time(NULL));

    // Preencher o vetor A com valores aleatórios
    for (i = 0; i < SIZE; i++) {
        A[i] = (float)rand() / RAND_MAX; // Valores aleatórios entre 0 e 1
    }

    // Inverter os elementos do vetor A
    inverterVetor(A, SIZE);

    // Imprimir o vetor A
    printf("Vetor A invertido:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%.2f ", A[i]);
    }
    printf("\n");

*/

/*
//
4 - Elaborar um programa que preencha com 10 elementos do tipo inteiro em um vetor A.
Crie um vetor ParImpar de 2 posições e armazene no índice 0 quantos elementos de A são
par e no índice 1 quantos elementos de A são ímpar. Imprimir o vetor ParImpar



int A[SIZE];
    int ParImpar[2];
    int i;

    // Preencher o vetor A com 10 elementos do tipo inteiro
    printf("Digite 10 elementos inteiros:\n");
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &A[i]);
    }

    // Contar a quantidade de elementos pares e ímpares em A
    contarParImpar(A, SIZE, ParImpar);

    // Imprimir o vetor ParImpar
    printf("Vetor ParImpar: [%d, %d]\n", ParImpar[0], ParImpar[1]);








*/
/*

5 - Elaborar um programa que preencha com valores aleatórios 10 elementos do tipo inteiro
em um vetor A. Ordene e imprima o vetor A.


void bubbleSort(int vetor[], int tamanho) {
    int i, j;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                trocar(&vetor[j], &vetor[j + 1]);
            }
        }
    }
}

int main() {
    int vetor[10];
    int i;

    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));

    // Preenche o vetor com valores aleatórios entre 0 e 100
    for (i = 0; i < 10; i++) {
        vetor[i] = rand() % 101;  // Gera um número aleatório entre 0 e 100
    }

    printf("Vetor original:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Ordena o vetor
    bubbleSort(vetor, 10);

    printf("Vetor ordenado:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");




6 - Construa uma função que retorne um vetor real (utilize alocação dinâmica de memória),
com valores aleatórios entre 30 e 50 (intervalo fechado), de tamanho N – passe o tamanho
N por valor.
Construa um procedimento para imprimir um vetor real de tamanho N – passe o vetor e o
tamanho N por valor (utilize a passagem de ponteiro representando o vetor a ser impresso).
Escrever um programa que leia um valor e chame a função e o procedimento criados

// Função para criar um vetor real com valores aleatórios entre 30 e 50
float* criarVetorReal(int tamanho) {
    float* vetor = (float*)malloc(tamanho * sizeof(float));

    srand(time(NULL));

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = (rand() % 21) + 30; // Gera um número aleatório entre 30 e 50
    }

    return vetor;
}

// Procedimento para imprimir um vetor real
void imprimirVetorReal(float* vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
}




 int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    float* vetor = criarVetorReal(tamanho);

    printf("Vetor gerado:\n");
    imprimirVetorReal(vetor, tamanho);

    free(vetor);

    return 0;




7 - Preencher uma matriz de 10 x 10 posições com valores aleatórios de 15 a 50 (utilize
para cada número a função rand – faça uma função que dados os valores inicial e final
devolva um número aleatório dentro deste intervalo). Em seguida imprima os índices (i,j) da
matriz e o valor correspondente, na forma de matriz.

int gerarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}


const int linhas = 10;
    const int colunas = 10;

    int matriz[linhas][colunas];

    srand(time(NULL));

    // Preenche a matriz com valores aleatórios entre 15 e 50
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = gerarNumeroAleatorio(15, 50);
        }
    }

    // Imprime a matriz
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("(%d, %d): %d\t", i, j, matriz[i][j]);
        }
        printf("\n");
    }



8 - Escreva um procedimento que receba a matriz criada no exercício acima (passagem de
parâmetro) e imprime o maior e o menor elemento da matriz bem como a posição de cada
um



int gerarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}



void imprimirMaiorMenorElemento(int matriz[][10], int linhas, int colunas) {
    int maior = matriz[0][0];
    int menor = matriz[0][0];
    int posicaoMaiorI = 0, posicaoMaiorJ = 0;
    int posicaoMenorI = 0, posicaoMenorJ = 0;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                posicaoMaiorI = i;
                posicaoMaiorJ = j;
            }

            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                posicaoMenorI = i;
                posicaoMenorJ = j;
            }
        }
    }

    printf("Maior elemento: %d\tPosição: (%d, %d)\n", maior, posicaoMaiorI, posicaoMaiorJ);
    printf("Menor elemento: %d\tPosição: (%d, %d)\n", menor, posicaoMenorI, posicaoMenorJ);


    const int linhas = 10;
    const int colunas = 10;

    int matriz[linhas][colunas];

    srand(time(NULL));

    // Preenche a matriz com valores aleatórios entre 15 e 50
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = gerarNumeroAleatorio(15, 50);
        }
    }

    // Imprime a matriz
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Chama o procedimento para imprimir o maior e o menor elemento da matriz
    imprimirMaiorMenorElemento(matriz, linhas, colunas);


9 - Escreva um procedimento que receba a matriz do exercício 7 e imprima a soma dos
elementos da diagonal principal (i==j).


// Função para gerar um número aleatório dentro de um intervalo [min, max]
int gerarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

void imprimirSomaDiagonalPrincipal(int matriz[][10], int tamanho) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += matriz[i][i];
    }

    printf("Soma da diagonal principal: %d\n", soma);
}

const int tamanho = 10;

    int matriz[tamanho][tamanho];

    srand(time(NULL));

    // Preenche a matriz com valores aleatórios entre 15 e 50
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            matriz[i][j] = gerarNumeroAleatorio(15, 50);
        }
    }

    // Imprime a matriz
    printf("Matriz:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Chama o procedimento para imprimir a soma dos elementos da diagonal principal
    imprimirSomaDiagonalPrincipal(matriz, tamanho);



10 - A partir da matriz do exerício 7, peça ao usuário a posição [i,j] da matriz, em seguida
exiba o valor que está na matriz nesta posição.




// Função para gerar um número aleatório dentro de um intervalo [min, max]
int gerarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}


const int linhas = 10;
    const int colunas = 10;

    int matriz[linhas][colunas];

    srand(time(NULL));

    // Preenche a matriz com valores aleatórios entre 15 e 50
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = gerarNumeroAleatorio(15, 50);
        }
    }

    // Imprime a matriz
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Solicita ao usuário uma posição [i, j]
    int posicaoI, posicaoJ;
    printf("Digite a posição [i, j] da matriz: ");
    scanf("%d %d", &posicaoI, &posicaoJ);

    // Verifica se a posição é válida
    if (posicaoI >= 0 && posicaoI < linhas && posicaoJ >= 0 && posicaoJ < colunas) {
        int valor = matriz[posicaoI][posicaoJ];
        printf("O valor na posição [%d, %d] é: %d\n", posicaoI, posicaoJ, valor);
    } else {
        printf("Posição inválida!\n");
    }


11 - Escreva um procedimento que receba a matriz do exercício 7. Peça ao usuário um
número qualquer e verifique se o número está ou não na matriz. Se estiver imprima a
posição deste número e se não estiver imprima a mensagem valor não encontrado.



// Função para gerar um número aleatório dentro de um intervalo [min, max]
int gerarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}


// Procedimento para verificar se um número está presente na matriz
void verificarNumeroMatriz(int matriz[][10], int linhas, int colunas, int numero) {
    int encontrado = 0;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] == numero) {
                printf("O número %d foi encontrado na posição [%d, %d]\n", numero, i, j);
                encontrado = 1;
            }
        }
    }

    if (!encontrado) {
        printf("Valor não encontrado na matriz\n");
    }
}

   const int linhas = 10;
    const int colunas = 10;

    int matriz[linhas][colunas];

    srand(time(NULL));

    // Preenche a matriz com valores aleatórios entre 15 e 50
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = gerarNumeroAleatorio(15, 50);
        }
    }

    // Imprime a matriz
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Solicita ao usuário um número
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Chama o procedimento para verificar se o número está presente na matriz
    verificarNumeroMatriz(matriz, linhas, colunas, numero);
*/

}