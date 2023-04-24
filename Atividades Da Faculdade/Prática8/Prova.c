//
// Created by miguel.carvalho on 10/04/2023.
//


#include<stdio.h>
#include <string.h>
#include<ctype.h>
int main(){


    //1 Ler um caractere, escrever o seu antecessor e seu sucessor na tabela ASCII.
    /*
    char caractere;

    printf("Digite o caractere");
    scanf("%c",&caractere);
    printf("O Antecesso do Caractere %c\n", caractere-1);
    printf("O Antecesso do Caractere %c\n", caractere+1);
    */

    //2 Ler um caractere e imprimir se é letra maiúscula, letra minúscula, número ou outro caractere
    /*
   char caractere;

   printf("Digite um caractere: ");
   scanf("%c", &caractere);

   if (caractere >= 'A' && caractere <= 'Z') {
       printf("Letra maiúscula %c\n",caractere);
   } else if (caractere >= 'a' && caractere <= 'z') {
       printf("Letra minúscula\n");
   } else if (caractere >= '0' && caractere <= '9') {
       printf("Número\n");
   }
   */

    //3 Ler uma palavra e imprimir a palavra totalmente em letras maiúsculas
    /*
    char string[40];

    printf("Digite a palavra");
    scanf("%s",&string);

    strupr(string);
    printf("Palavra em Maísculo %s",&string);
    */

    //	4 Ler uma palavra e imprimir a primeira letra maiúscula e as demais letras minúsculas
    /*
 char palavra[50];
 int cont=0;
 printf("Qual a palavra?");
 scanf("%s",&palavra);
 for(int i=0; i< palavra[i]!='\0';i++){
  palavra[i] = tolower(palavra[i]);

 }
palavra[0] = toupper(palavra[0]); // converte a primeira letra para maiúscula

printf("Palavra formatada: %s\n", palavra);
*/

    //5 Ler uma palavra e imprimir quantos caracteres ela tem
     /*
    char palavre[30];
    printf("Digite a palavra\n");
    scanf("%s",&palavre);
   int tamanho = strlen(palavre);
   printf("Tamanho da Palavra %d\n", tamanho);
      */

     //6 Leia duas palavras e imprima na tela a que vier primeiro na ordem ASCII;
       /*
     char palavra1[100],palavra2[200];

     printf("Digite a primeira palavra");
     scanf("%s",&palavra1);
     printf("Digite a Segunda palavra");
     scanf("%s",&palavra2);
        //Quem vem pprimeiro na tabela ASC
     int contador = strcmp(palavra1,palavra2);

     if(contador < 0){

         printf("A primeira palavra vem primeiro");

     }if(contador > 0){

         printf("A Segunda vem primeiro");
     }else{

         printf("As Palavras são iguais");
     }
      */

       //7 Leia duas palavras e imprima na tela a que vier primeiro na ordem alfabética;
        /*
    char palavra1[100], palavra2[100];
    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);
    int comp = strcasecmp(palavra1, palavra2);
    if (comp < 0) {
        printf("A palavra %s vem primeiro na ordem alfabética.\n", palavra1);
    }
    else if (comp > 0) {
        printf("A palavra %s vem primeiro na ordem alfabética.\n", palavra2);
    }
    else {
        printf("As palavras estão em ordem alfabética igual.\n");
    }
         */


        //

     /*
       char palavra[30],caractere;
       int count=0;
       printf("Digite a palavra");
       scanf("%s",&palavra);
    printf("Digite o caractere");
    scanf("%c",&caractere);


    for(int i =0;i < strlen(palavra);i++){

           if(palavra[i] == caractere){


               count++;
           }

          printf("O Caractere %c aparece %d na Palavre %s",caractere,count,palavra);


    }


     */

   /*

     char palavra1[50];
     printf("Digite a Palavra");
     scanf("%s",&palavra1);

     palavra1[0] = toupper(palavra1[0]);

     for(int i = 1; i < palavra1[i];i++){

         palavra1[i] = tolower(palavra1[i]);

     }

         printf("%s",palavra1);
*/



   //Inverter Dados de Uma String

   /*
     char str[100], strInvertida[100];
    int i, j;

    printf("Digite uma string: ");
    scanf("%s", str);

    j = strlen(str) - 1;

    for (i = 0; i < strlen(str); i++) {
        strInvertida[i] = str[j];
        j--;
    }

    strInvertida[i] = '\0';

    printf("String original: %s\n", str);
    printf("String invertida: %s\n", strInvertida);

    */


}
