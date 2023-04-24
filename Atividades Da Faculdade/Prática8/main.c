//
// Created by Miguel on 02/04/2023.
//
//Miguel Henrique Martins Carvalho
//766634
#include<stdio.h>
#include<string.h>
int main(){

    /*
    //Exercício 1
    char caractere;
    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    printf("O antecessor de '%c' na tabela ASCII e: %c\n", caractere, caractere - 1);
    printf("O sucessor de '%c' na tabela ASCII e: %c\n", caractere, caractere + 1);
    */

    /*
     //Exercício 2
    char caractere;
    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    if (caractere >= 'A' && caractere <= 'Z') {
        printf("O caractere '%c' e uma letra maiuscula.\n", caractere);
    } else if (caractere >= 'a' && caractere <= 'z') {
        printf("O caractere '%c' e uma letra minuscula.\n", caractere);
    } else if (caractere >= '0' && caractere <= '9') {
        printf("O caractere '%c' e um numero.\n", caractere);
    } else {
        printf("O caractere '%c' e outro tipo de caractere.\n", caractere);
    }

     */

    /*
     //Exercício 3

       char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    // Converter cada caractere para letra maiúscula usando a função toupper()
    for (int i = 0; palavra[i]; i++) {
        palavra[i] = toupper(palavra[i]);
    }

    printf("A palavra em letras maiusculas e: %s\n", palavra);

     */

    /*
     //Exercício 4
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    // Converter a primeira letra para maiúscula usando a função toupper()
    palavra[0] = toupper(palavra[0]);

    // Converter as letras restantes para minúsculas usando a função tolower()
    for (int i = 1; palavra[i]; i++) {
        palavra[i] = tolower(palavra[i]);
    }

    printf("A palavra com a primeira letra maiuscula e as demais minusculas e: %s\n", palavra);

     */

    /*
     //Exercício 5
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    printf("A palavra tem %d caracteres.\n", tamanho);

     */

    /*
     //Exercício 6
      char palavra1[100], palavra2[100];
    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    int comparacao = strcmp(palavra1, palavra2);

    if (comparacao < 0) {
        printf("A primeira palavra (%s) vem primeiro na ordem ASCII.\n", palavra1);
    } else if (comparacao > 0) {
        printf("A segunda palavra (%s) vem primeiro na ordem ASCII.\n", palavra2);
    } else {
        printf("As palavras sao iguais.\n");
    }
     */

    /*
     //Exercício 7
     /*
      char palavra1[100], palavra2[100];
    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    int comparacao = strcmp(palavra1, palavra2);

    if (comparacao < 0) {
        printf("A primeira palavra (%s) vem primeiro na ordem alfabetica.\n", palavra1);
    } else if (comparacao > 0) {
        printf("A segunda palavra (%s) vem primeiro na ordem alfabetica.\n", palavra2);
    } else {
        printf("As palavras sao iguais.\n");
    }
     */

    /*
     //Exercício 8

    char palavra[100];
    int i, j, palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    // Verifica se a palavra é um palíndromo
    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        if (palavra[i] != palavra[j]) {
            palindromo = 0;
            break;
        }
    }

    // Imprime a mensagem "sim" ou "nao" na tela, dependendo se a palavra é um palíndromo ou não
    if (palindromo == 1) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }

     */


}