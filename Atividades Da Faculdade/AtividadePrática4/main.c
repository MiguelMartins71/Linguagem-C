//Miguel Henrique Martins Carvalho
//766634




#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
  //Exercício 1
  /*
  int num;
  printf("Digite o númerp");
  scanf("%d", &num);

  if(num%2==0){

    printf("Número Par");
  }else if(num % 2!=0){

    printf("ímpar");
  }
 */
  //Exercício 2
    /*
    float temp;
    printf("Qual será a temperatura da água?");
    scanf("%f",&temp);
    if(temp > 0 && temp < 100){

        printf("A água está em estado liquido");
    }else if(temp <= 0){

        printf("A água está em estado sólido");
    }else if(temp >=100){

        printf("A água está em estado gasoso");
    }
    */
   //Exercício 3
   /*
   int x,y;
   printf("Qual será o valor de x");
   scanf("%d", &x);
   if(x < 0){
       y = x * 2 + 4;
       printf("O valor será %d", y);

   }else if(x > 0){
       y = x * 3 - 3;
       printf("O valor será %d", y);

   }else {
       printf("Digite um valor maior que 0");
   }

   */
   //Exercício 4
   /*
   int a,b,c,menor,maior,inter;
   printf("Qual o valor de A");
   scanf("%d", &a);
   printf("Qual o valor de B");
   scanf("%d", &b);
   printf("Qual o valor de C");
   scanf("%d", &c);


    if (a > b) {
        maior = a;
        menor = b;
    } else {
        maior = b;
        menor = a;
    }

    if (c > maior) {
        inter = maior;
        maior = c;
    } else {
        if (c < menor) {
            inter = menor;
            menor = c;
        } else {
            inter = c;

        }

    }
      printf("A : %d, B %d, C %d", menor,inter,maior);
    */

   //Exercício 5
   /*
   int x,y,z;

   printf("Digite o Valor de X");
   scanf("%d", &x);
   printf("Digite o Valor de Y");
   scanf("%d", &y);
   printf("Digite o Valor de Z");
   scanf("%d", &z);


    if( x%y ==0 && x%z ==0 ){
        printf( " %d é divisível por %d",x,y,z);
    }

    if (x%y ==0 && x%z !=0){
        printf(" %d é divisível por %d mas não por %d", x,y,z);
    }
    if (x%z ==0 && x%y !=0 ){
        printf(" % d é divisível por %d mas não por %d", x,z,y);
    }
    if (x%y !=0 && x%z!=0){
        printf(" % d não é divisível nem por %d nem por %d", x,y,z);
    }
   */

   //Exercício 6
    /*
    int num, d1, d2, d3, d4, aux, soma1, soma2, y;
    printf("Digite o número");
    scanf("%d", &num);
    d1=num%10; aux=num/10; d2=aux%10; aux=aux/10; d3=aux%10; d4=aux/10;
    soma1 = d2*10+d1; soma2 = d4*10+d3; y=soma1+soma2;
    if(pow(y,2) == num)
        printf("O NUMERO POSSUI TAL CARACTERISTICA\n");
    else
        printf("O NUMERO NAO POSSUI TAL CARACTERISTICA\n");
    return 0;
    */

    //Exercício 7
     /*
    int num;
    printf("Digite o número");
    scanf("%d", &num);
    if(num == 221){
        printf("Bernado");
    }if(num == 211){
        printf("Eustáquio");
    }if(num == 311){
        printf("Luiz");
    }if(num == 312){
        printf("Mário");
    }if(num == 332){
        printf("Artur");
    }else{
        printf("Digite um dos códigos válidos!");
    }
    */
     //Exercício 8
     /*
    int n1,n2,n3,n4,n5,numero,aux, inverter;
    printf("Digite o número");
    scanf("%d",&numero);

    n1 = numero / 10000;
    aux = numero % 10000;
    n2 = aux / 1000;
    aux = aux % 1000;
    n3 = aux / 100;
    aux = aux % 100;
    n4 = aux / 10;
    n5 = aux % 10;

    inverter = (n5 * 10000) + (n4 * 1000) + (n3 * 100) + (n2 * 10) + n1;

   if (numero == inverter){
   printf("O NUMERO E PALINDROMO\n");
   }

   else {
   printf("O NUMERO NAO E PALINDROMO\n");
  }
  */

   //Exercício 9
    /*
    int contacliente, consumoagua;
    float formula;
    char tipoconsumidor[15];

    scanf("%d",&contacliente);
    scanf("%d",&consumoagua);
    scanf("%s",tipoconsumidor);

    if (strcmp(tipoconsumidor,"RESIDENCIAL") == 0){
        formula = 5.00 + (0.05 * consumoagua);
        printf("CONTA = %d\n",contacliente);
        printf("VALOR DA CONTA = %.2f\n",formula);
    }

    if (strcmp(tipoconsumidor,"COMERCIAL") == 0 && consumoagua <= 80 ){
        formula = 500.00;
        printf("CONTA = %d\n",contacliente);
        printf("VALOR DA CONTA = %.2f\n",formula);
    }

    else if (strcmp(tipoconsumidor,"COMERCIAL") == 0 && consumoagua > 80 ){
        formula = 500.00 + ((consumoagua - 80) * 0.25);
        printf("CONTA = %d\n",contacliente);
        printf("VALOR DA CONTA = %.2f\n",formula);
    }

    if (strcmp(tipoconsumidor,"INDUSTRIAL") == 0 && consumoagua <= 100){
        formula = 800.00;
        printf("CONTA = %d\n",contacliente);
        printf("VALOR DA CONTA = %.2f",formula);
    }
    else if (strcmp(tipoconsumidor,"INDUSTRIAL") == 0 && consumoagua > 100){
        formula = 800.00 + ((consumoagua - 100 )* 0.04);
        printf("CONTA = %d\n",contacliente);
        printf("VALOR DA CONTA = %.2f\n",formula);
    }
     */

    //Exercício 10
     /*
    int a,b,c,x,y,calc;
    printf("Qual o valor de a");
    scanf("%d",&a);
    printf("Qual o valor de b");
    scanf("%d", &b);
    printf("Qual o valor de c");
    calc = a* x ^2 + b * x + c;
    */

     //Exercício 11
      /*
     int a,b,calc;
     printf("Digite o Valor de A");
     scanf("%d", &a);
     printf("Digite o Valor de B");
     scanf("%d", &b);
     if(b != 0){
         calc = a/b;
         printf("A Divisão terá resultado de %d\n", calc);
     }else{
         printf("O Segundo Deve ser Diferente de 0");
     }
      */

      //Exercício 12
      /*
      int quest;

      printf("Qual a questão");

      switch (quest) {

        case 1:
            printf("Fazer um algoritmo que leia um numero inteiro e mostre uma mensagem indicando se este numero e par ou impar.");
            break;
        case 2:
            printf("Fazer um algoritmo que leia a temperatura da água e mostre se está no estado solido, líquido ou gasoso");
            break;
        case 3:
            printf("Leia um valor X e se ele for menor que 0 avalie Y = x2 + 4. Se ele for maior que 0 avalie x3 -3 e se ele for igual a 0 de uma mensagem de erro");
            break;
        case 4:
            printf("Construa um algoritmo que receba como entrada três valores (A,B e C). Após o processamento o menor valor deverá estar em A e o maior valor em C, e o valor intermediário em B. Imprima A,B e C");
            break;
        case 5:
            printf("Desenvolver um algoritmo que leia três números inteiros: X, Y, Z e verifique se o número X é divisível por Y e por Z. O algoritmo deverá mostrar as possíveis mensagens");
            break;
        case 6:
            printf("O numero 3025 possui a seguinte característica");
            break;
        case 7:
            printf("Ler um código do teclado e mostrar o nome correspondente, de acordo com a lista");
            break;
        case 8   :
            printf("Números palíndromos são aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor. Exemplo:929, 44, 97379. Fazer um algoritmo que dado um numero de 5 dígitos; calcule e escreva se este é ou não palíndromo");
            break;
        default:
            printf("Digite uma das questões");

    }
       */

}