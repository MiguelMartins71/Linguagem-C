#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//Miguel Henrique Martins Carvalho
//766634

typedef struct {
    int codigo;
    char nome[100];
    char endereco[100];
    char telefone[15];
    char data_nascimento[11];
} Cliente;

// Variável global para armazenar os clientes cadastrados
Cliente clientes[100];
int totalClientes = 0;

// Função para verificar se o código do cliente já está em uso
bool codigoClienteExistente(int codigo) {
    for (int i = 0; i < totalClientes; i++) {
        if (clientes[i].codigo == codigo) {
            return true;
        }
    }
    return false;
}





/*
struct Cliente aluno;

printf("Nome do Aluno");
fgets(aluno.nome,50,stdin);

printf("Digite o número do aluno :");
scanf("%d",&aluno.codigo);
printf("Lendo Dados da Struct : ---");

printf("Nome.............: %s",aluno.nome);
printf("Número............ %d",aluno.codigo);
*/








