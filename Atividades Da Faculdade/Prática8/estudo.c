//
// Created by miguel.carvalho on 03/04/2023.
//


#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    /*
     //Armazenando Valor na String para Imprimir
    char arra[60];

    printf("O nome foi :%s", arra);

    scanf("%s", arra);

     printf("O Nome Armazenado foi: %s", arra);
    getch();

    return 0;
     */

    //Leitura De String/array
    /*
    char str[] = "string";

    printf("%s",str);
    */

     /*
     //Acessando Dados Específicos da String
    char str[] = "meu string";
    char letra;

    printf("%c\n",str[2]); //imprime o 3o caracter

    letra = str[8];

    printf("%c\n",letra); //imprime o 9o caracter
     */

     //Alterando Dados da String

     /*

     char str[] = "meu string";   //reserva espaço para 11 caracteres
    //mudo o 6o caracter
    str[5] = 'd';

    printf("%s",str);

      */

     //Funções de String

     //strcpy = Copiar Valor de uma string para outra
     /*
     char teste1[20] = "Miguel";
     char teste2[20];

    strcpy(teste2,teste1);
    printf("%s",teste2);
    */

     //strcat = Adciona Conteúdo de uma string em outra
      /*
     char teste[20] = "a";
     char teste2[20] = "bc";

     strcat(teste,teste2);
     printf("%s",teste);
     */

      //strlwr = Converte para minuscula
      //strupr = Converte para maiscula
      /*
      char teste[20] = "miguel";

      char teste2[20] = "MIGUEL";

      strlwr(teste2);
      strupr(teste);

      printf("%s\n",teste2);
      printf("%s\n",teste);
      */

      //strlen = Tamanho da string
        /*
      char teste[] = "Manuel";

      printf("Tamanho : %d",strlen(teste));
      */


        //Adcionar Caractere
    /*
    char palavra1[50], palavra2[50], palavra3[50];
    char nova_string[150];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    printf("Digite a terceira palavra: ");
    scanf("%s", palavra3);

    // Concatena as palavras com o separador '-' e armazena na nova_string
    strcpy(nova_string, palavra1);
    strcat(nova_string, "-");
    strcat(nova_string, palavra2);
    strcat(nova_string, "-");
    strcat(nova_string, palavra3);

    printf("Nova string: %s\n", nova_string);

    // Imprime a nova_string de trás para frente
    printf("Nova string de trás para frente: ");
    for (int i = strlen(nova_string) - 1; i >= 0; i--) {
        printf("%c", nova_string[i]);
    }
    printf("\n");
    */

    //Contar Caracter
    /*
    char string[50];

    char carctere;

    int cont=0;


    printf("Digite a string: ");
    fgets(string, 50, stdin);
    printf("Digite o Caractere");
    scanf("%c",&carctere);

    for(int i=0; i < strlen(string);i++){

        if(string[i] == carctere){

             cont++;
        }
        printf("O caractere '%c' aparece %d vezes na string.\n", carctere, cont);

    }


      */







}