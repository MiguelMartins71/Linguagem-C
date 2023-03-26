//
// Created by Miguel on 26/03/2023.
//

//Miguel Henrique Martins Carvalho
//766634

#include<stdio.h>

/*
int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
*/
int main(){

    //Exercício 1
    /*
    int n, num, soma = 0;

    printf("Digite a quantidade de numeros a serem somados: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Digite o %d.o numero: ", i);
        scanf("%d", &num);
        soma += num;
    }

    printf("A soma dos numeros digitados e: %d\n", soma);
    */

    //Exercício 2
     /*
    int n, a = 0, b = 1, c;

    printf("Digite o numero de elementos da serie de Fibonacci: ");
    scanf("%d", &n);

    printf("Os primeiros %d elementos da serie de Fibonacci sao:\n", n);

    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");
    */

     //Exercício 3
     /*
     int L, a = 0, b = 1, c;

     printf("Digite o limite L da serie de Fibonacci: ");
     scanf("%d", &L);

     printf("Os elementos da serie de Fibonacci menores que %d sao:\n", L);

     while (a < L) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
     }

     printf("\n");
     */

     //Exercício 4

     /*
     int i=1;

     while (1) {
        if (i % 5 == 0) {
            printf("%d ", i);
        }
        i++;
    }
     */

     //Exercício 5
      /*
      int idade;

      do{
          printf("Digite Sua Idade:");
          scanf("%d",&idade);
      }while(idade < 0 || idade>140){

        printf("A idade inserida foi: %d anos\n", idade);
    }
       */

      //Exercício 6

   /*
    int n;

    printf("Digite o valor de N para calcular o N-esimo termo da sequencia de Fibonacci: ");
    scanf("%d", &n);

    printf("O %d-esimo termo da sequencia de Fibonacci eh: %d\n", n, fibonacci(n-1));
     */

     //Exercício 7
    /*
    int n, i;

    printf("Digite o valor de N para mostrar os N primeiros elementos da sequencia: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", 2*i-1);
    }
    printf("\n");
    */

    //Exercício 8
    /*
    int n, i, elem;

    printf("Digite o valor de N para mostrar os N primeiros elementos da sequencia: ");
    scanf("%d", &n);

    printf("Elementos da sequencia que sao divisiveis por 3 e multiplos de 5 ou divisiveis por 7:\n");

    for (i = 1; i <= n; i++) {
        elem = 2*i-1;
        if ((elem % 3 == 0 && elem % 5 == 0) || elem % 7 == 0) {
            printf("%d ", elem);
        }
    }
    printf("\n");
    */

    //Exercício 9
    /*
    int n, i, elem, A, B;

    printf("Digite o valor de N para mostrar os N primeiros elementos da sequencia: ");
    scanf("%d", &n);

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Elementos da sequencia que sao divisiveis por 3 e multiplos de 5 ou divisiveis por 7 e estao entre A e B:\n");

    for (i = 1; i <= n; i++) {
        elem = 2*i-1;
        if (((elem % 3 == 0 && elem % 5 == 0) || elem % 7 == 0) && elem > A && elem < B) {
            printf("%d ", elem);
        }
    }
    printf("\n");
    */

    //Exercício 10
     /*
    int valor, soma = 0;

    printf("Digite os valores a serem somados (digite 0 para encerrar): \n");

    do {
        scanf("%d", &valor);
        soma += valor;
    } while (valor != 0);

    printf("A soma dos valores digitados é %d\n", soma);
    */


     




}