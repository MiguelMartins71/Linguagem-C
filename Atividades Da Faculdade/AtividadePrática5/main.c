//
// Created by Miguel on 18/03/2023.
//

//Miguel Henrique Martins Carvalho
//766634

#include<stdio.h>
int main(){

    //Exercício 1
    /*
    int n1,n2;
    printf("Qual será o primeiro número?");
    scanf("%d", &n1);
    printf("Qual será o segundo número?");
    scanf("%d", &n2);
    if(n1 > n2){

        printf("O maior será %d", n1);

    }if(n2 > n1){

        printf("O maior será %d", n2);
    }else if(n1 == n2){

        printf("Os números são iguais");
    }
     */

    //Exercício 2
    /*
    int n1,n2,soma;
    printf("Qual será o primeiro número?");
    scanf("%d", &n1);
    printf("Qual será o segundo número?");
    scanf("%d", &n2);
    soma = n1 + n2;

    if(soma >= 10){

        soma = n1+n2+5;
        printf("O Resultado será %d", soma);

    }else{

        soma = n1+n2 + 7;
        printf("O Resultadp srá %d", soma);
    }
     */

    //Exercício 3

    /*
    int idade,ano=2023,soma;
    printf("Em que ano você nasceu?");
    scanf("%d", &idade);
    soma = ano - idade;
    printf("Você possui %d\n anos", soma);
    if(soma >= 18){

        printf("Você já tem idade para tirar carteira de habilitação!");
    }else{

        printf("Você ainda não pode tirar carteira");
    }
    */

    //Exercício 4

    /*
    float nota;

    printf("Qual foi sua Nota?");
    scanf("%f", &nota);
    if(nota >=8 && nota <=10){
         printf("ótimo");

    }else if(nota >= 7 && nota < 8){

        printf("Bom");
    }else if(nota >=5 && nota<7){

        printf("Regular");
    }else if(nota < 5){
        printf("Insatisfatório");
    }
    */

   //Exercício 5

   /*
    float diaria, diaria_com_desc;

    float qtdaptos;

    printf("\nDigite o valor da diaria: ");

    scanf("%f",&diaria);

    printf("\nDigite a quantidade de apartamentos:");

    scanf("%f",&qtdaptos);

    diaria_com_desc = diaria * 0.75;

    printf("\n\nO valor da diaria com desconto e: %2.f", diaria_com_desc);

    printf("\nO total arrecadado com 100 por cento de ocupacao e: %2.f",diaria_com_desc * qtdaptos);

    printf("\nO total arrecadado com 70 por cento de ocupacao e: %2.f", diaria_com_desc * qtdaptos  * 0.7);

    printf("\nO total da perda com desconto e: %2.f", diaria * qtdaptos * 0.25);

    */

   //Exercício 6
     /*
    float a, b, x;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0) {
            printf("A equação é indeterminada.\n");
        } else {
            printf("A equação é impossível.\n");
        }
    } else {
        x = -b / a;
        printf("A raiz da equação é: %.2f\n", x);
    }
    */


     //Exercício 7
     /*
    int x, y;

    printf("Digite um valor para X: ");
    scanf("%d", &x);

    y = 2 * x + 1;

    printf("O valor de Y é: %d", y);
    */

   //Exercício 8
    /*
    float salario_atual, novo_salario;
    char opcao;

    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salario_atual);

    printf("Escolha uma opção (A, B ou C): ");
    scanf(" %c", &opcao);

    switch(opcao) {
        case 'A':
            novo_salario = salario_atual * 1.08;
            break;
        case 'B':
            novo_salario = salario_atual * 1.11;
            break;
        case 'C':
            if (salario_atual <= 1000) {
                novo_salario = salario_atual + 350;
            } else {
                novo_salario = salario_atual + 200;
            }
            break;
        default:
            printf("Opção inválida!");
    }
     */

    //Exercício 9
    /*
    char simbolo;

    printf("Digite um símbolo: ");
    scanf(" %c", &simbolo);

    switch(simbolo) {
        case '<':
            printf("SINAL DE MENOR");
            break;
        case '>':
            printf("SINAL DE MAIOR");
            break;
        case '=':
            printf("SINAL DE IGUAL");
            break;
        default:
            printf("OUTRO SINAL");
            break;
    }
     */

    //Exercício 10
    /*
    int velocidadeMaxima, velocidadeMotorista, diferencaVelocidade;
    scanf("%d %d", &velocidadeMaxima, &velocidadeMotorista);

    diferencaVelocidade = velocidadeMotorista - velocidadeMaxima;

    if (diferencaVelocidade <= 0) {
        printf("Motorista respeitou a lei");
    } else if (diferencaVelocidade <= 10) {
        printf("Multa no valor de 50 reais");
    } else if (diferencaVelocidade <= 30) {
        printf("Multa no valor de 100 reais");
    } else {
        printf("Multa no valor de 200 reais");
    }
     */

    






}
