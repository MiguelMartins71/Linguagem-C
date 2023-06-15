//Miguel Henrique Martins Carvalho
//766634
/*
#include <cstdlib>
#include <ctime>


1 - Programa para calcular o fatorial de cada elemento do vetor A:
#include <iostream>

int fatorial(int num) {
    int fat = 1;
    for (int i = 1; i <= num; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    const int tamanho = 15;
    int vetorA[tamanho];
    int vetorB[tamanho];

    // Preenchendo o vetor A
    for (int i = 0; i < tamanho; i++) {
        std::cout << "Digite o elemento " << i + 1 << " do vetor A: ";
        std::cin >> vetorA[i];
    }

    // Calculando o fatorial de cada elemento do vetor A e armazenando no vetor B
    for (int i = 0; i < tamanho; i++) {
        vetorB[i] = fatorial(vetorA[i]);
    }

    // Imprimindo o vetor A
    std::cout << "Vetor A: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << vetorA[i] << " ";
    }
    std::cout << std::endl;

    // Imprimindo o vetor B
    std::cout << "Vetor B (fatorial de cada elemento do vetor A): ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << vetorB[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

2 - Programa para unir elementos de dois vetores A e B sem repetição:

int main() {
    const int tamanho = 10;
    std::vector<int> vetorA(tamanho);
    std::vector<int> vetorB(tamanho);
    std::vector<int> vetorC;

    // Preenchendo o vetor A
    for (int i = 0; i < tamanho; i++) {
        std::cout << "Digite o elemento " << i + 1 << " do vetor A: ";
        std::cin >> vetorA[i];
    }

    // Preenchendo o vetor B
    for (int i = 0; i < tamanho; i++) {
        std::cout << "Digite o elemento " << i + 1 << " do vetor B: ";
        std::cin >> vetorB[i];
    }

    // Unindo os elementos dos vetores A e B sem repetição
    vetorC.reserve(vetorA.size() + vetorB.size());
    vetorC.insert(vetorC.end(), vetorA.begin(), vetorA.end());
    vetorC.insert(vetorC.end(), vetorB.begin(), vetorB.end());
    std::sort(vetorC.begin(), vetorC.end());
    vetorC.erase(std::unique(vetorC.begin(), vetorC.end()), vetorC.end());

    // Imprimindo o vetor C (união de A e B sem repetição)
    std::cout << "Vetor C (união de A e B sem repetição): ";
    for (int i = 0; i < vetorC.size(); i++) {
        std::cout << vetorC[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}


3 - Programa para inverter os elementos de um vetor:

void inverterVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho / 2; i++) {
        int temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
}

int main() {
    const int tamanho = 20;
    int vetorA[tamanho];

    // Preenchendo o vetor A com valores aleatórios
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        vetorA[i] = rand() % 100;  // Valores aleatórios de 0 a 99
    }

    // Imprimindo o vetor A antes da inversão
    std::cout << "Vetor A antes da inversão: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << vetorA[i] << " ";
    }
    std::cout << std::endl;

    // Invertendo os elementos do vetor A
    inverterVetor(vetorA, tamanho);

    // Imprimindo o vetor A após a inversão
    std::cout << "Vetor A após a inversão: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << vetorA[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

4 - Programa para contar a quantidade de elementos pares e ímpares em um vetor:



void contarParImpar(int vetor[], int tamanho, int parImpar[]) {
    parImpar[0] = 0;  // Quantidade de elementos pares
    parImpar[1] = 0;  // Quantidade de elementos ímpares

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            parImpar[0]++;
        } else {
            parImpar[1]++;
        }
    }
}

int main() {
    const int tamanho = 10;
    int vetorA[tamanho];
    int parImpar[2];

    // Preenchendo o vetor A com valores aleatórios
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        vetorA[i] = rand() % 100;  // Valores aleatórios de 0 a 99
    }

    // Contando a quantidade de elementos pares e ímpares
    contarParImpar(vetorA, tamanho, parImpar);

    // Imprimindo o vetor A
    std::cout << "Vetor A: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << vetorA[i] << " ";
    }
    std::cout << std::endl;

    // Imprimindo a quantidade de elementos pares e ímpares
    std::cout << "Quantidade de elementos pares: " << parImpar[0] << std::endl;
    std::cout << "Quantidade de elementos ímpares: " << parImpar[1] << std::endl;

    return 0;





5 - Programa para ordenar um vetor em ordem crescente:



int main() {
    const int tamanho = 10;
    int vetorA[tamanho];

    // Preenchendo o vetor A com valores aleatórios
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        vetorA[i] = rand() % 100;  // Valores aleatórios de 0 a 99
    }

    // Imprimindo o vetor A antes da ordenação
    std::cout << "Vetor A antes da ordenação: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << vetorA[i] << " ";
    }
    std::cout << std::endl;

    // Ordenando o vetor A em ordem crescente
    std::sort(vetorA, vetorA + tamanho);

    // Imprimindo o vetor A após a ordenação
    std::cout << "Vetor A após a ordenação: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << vetorA[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}



6 - Função para criar um vetor com valores aleatórios entre 30 e 50:



float* criarVetor(int tamanho) {
    float* vetor = new float[tamanho];
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = 30 + static_cast<float>(rand()) / (RAND_MAX / (50 - 30));
    }
    return vetor;
}

void imprimirVetor(const float* vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int tamanho;
    std::cout << "Digite o tamanho do vetor: ";
    std::cin >> tamanho;

    float* vetor = criarVetor(tamanho);

    std::cout << "Vetor gerado aleatoriamente: ";
    imprimirVetor(vetor, tamanho);

    delete[] vetor;

    return 0;
}

7 - Programa para preencher e imprimir uma matriz 10x10 com valores aleatórios entre 15 e 50:


int gerarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

void preencherMatriz(int matriz[10][10], int min, int max) {
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = gerarNumeroAleatorio(min, max);
        }
    }
}

void imprimirMatriz(const int matriz[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            std::cout << "[" << i << "," << j << "]: " << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int matriz[10][10];
    preencherMatriz(matriz, 15, 50);
    imprimirMatriz(matriz);




8 - Procedimento para encontrar o maior e o menor elemento em uma matriz e imprimir suas posições:

int gerarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

void preencherMatriz(int matriz[10][10], int min, int max) {
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = gerarNumeroAleatorio(min, max);
        }
    }
}

void encontrarMaiorMenor(const int matriz[10][10], int& maior, int& menor, int& posMaiorI, int& posMaiorJ, int& posMenorI, int& posMenorJ) {
    maior = matriz[0][0];
    menor = matriz[0][0];
    posMaiorI = 0;
    posMaiorJ = 0;
    posMenorI = 0;
    posMenorJ = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                posMaiorI = i;
                posMaiorJ = j;
            }

            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                posMenorI = i;
                posMenorJ = j;
            }
        }
    }
}

int main() {
    int matriz[10][10];
    preencherMatriz(matriz, 15, 50);

    int maior, menor, posMaiorI, posMaiorJ, posMenorI, posMenorJ;
    encontrarMaiorMenor(matriz, maior, menor, posMaiorI, posMaiorJ, posMenorI, posMenorJ);

    std::cout << "Maior elemento: " << maior << " (posição: [" << posMaiorI << "," << posMaiorJ << "])" << std::endl;
    std::cout << "Menor elemento: " << menor << " (posição: [" << posMenorI << "," << posMenorJ << "])" << std::endl;

    return 0;
}

9 - Procedimento para calcular a soma dos elementos da diagonal principal de uma matriz:




int gerarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

void preencherMatriz(int matriz[10][10], int min, int max) {
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = gerarNumeroAleatorio(min, max);
        }
    }
}

int calcularSomaDiagonalPrincipal(const int matriz[10][10]) {
    int soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += matriz[i][i];
    }
    return soma;
}

int main() {
    int matriz[10][10];
    preencherMatriz(matriz, 15, 50);

    int somaDiagonalPrincipal = calcularSomaDiagonalPrincipal(matriz);

    std::cout << "Soma dos elementos da diagonal principal: " << somaDiagonalPrincipal << std::endl;

    return 0;
}

10 - Programa para obter o valor de uma posição específica na matriz:



int gerarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

void preencherMatriz(int matriz[10][10], int min, int max) {
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = gerarNumeroAleatorio(min, max);
        }
    }
}

int main() {
    int matriz[10][10];
    preencherMatriz(matriz, 15, 50);

    int posI, posJ;
    std::cout << "Digite a posição [i,j] da matriz: ";
    std::cin >> posI >> posJ;

    int valor = matriz[posI][posJ];

    std::cout << "Valor na posição [" << posI << "," << posJ << "]: " << valor << std::endl;

    return 0;
}

11 - Procedimento para verificar se um número está presente na matriz e imprimir sua posição:


int gerarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

void preencherMatriz(int matriz[10][10], int min, int max) {
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = gerarNumeroAleatorio(min, max);
        }
    }
}

void verificarNumero(const int matriz[10][10], int numero) {
    bool encontrado = false;
    int posI, posJ;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (matriz[i][j] == numero) {
                encontrado = true;
                posI = i;
                posJ = j;
                break;
            }
        }
        if (encontrado) {
            break;
        }
    }

    if (encontrado) {
        std::cout << "O número " << numero << " está presente na posição [" << posI << "," << posJ << "]" << std::endl;
    } else {
        std::cout << "O número " << numero << " não foi encontrado na matriz" << std::endl;
    }
}

int main() {
    int matriz[10][10];
    preencherMatriz(matriz, 15, 50);

    int numero;
    std::cout << "Digite um número: ";
    std::cin >> numero;

    verificarNumero(matriz, numero);

    return 0;
}









*/

