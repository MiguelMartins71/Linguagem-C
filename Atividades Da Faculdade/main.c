//-----------------------------------
//Miguel Henrique Martins Carvalho
//766634
//-----------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

    //Exercício 1
    /*
    float energia=100, salario_minimo,residencia,qw,desconto,valp,desc,residenciacalc;
    printf("Quanto de Energia QW sua residência gasta");
    scanf("%f", &residencia);
    printf("Qual Seu Salário");
    scanf("%f", &salario_minimo);    
   energia = (salario_minimo/7)/100;
   valp = energia * residencia;
   desconto = (valp*10) / 100;
   desc = valp - desconto;
   printf("O valor em reais do QW será de %f\n" , energia);
   printf("O Valor em Reais a ser pago será de %f\n", valp);
   printf("O Valor a Ser Pago com Desconto será de %f\n ", desc);
   */
   //Exercício 2
   /*
   float base,altura,perimetro,area,diagonal;

   printf("Qual a Base do Retângula?");
   scanf("%f", &base);
   printf("Qual a Altura do Retângulo");
   scanf("%f", &altura);

   area = base * altura;
   perimetro = 2 * base + 2 * altura;
   diagonal = sqrt(pow(altura,2) + pow(base,2));

   printf("A Area do Retângulo será %f\n" , area);
   printf("O Perímetro do Retângulo será de %f\n", perimetro);
   printf("O Diagonal será de %f\n", diagonal);      
   */
   //Exercício 3
   /*
   float raio,perimetro,area;
   float PI = 3.14;
   printf("Qual será o raio do Círculo");
   scanf("%f", &raio);
   perimetro = 2 * PI * raio;
   area = PI * raio * raio;
   printf("O Perímetro do Círculo será de %2.f\n", perimetro);
   printf("A Aréa do Círculo será %2.f\n", area);
   */
   //Exercício 4
   /*
   int a,b,hipotenusa;
   printf("Qual o valor do Cateto Oposto?");
   scanf("%d" ,&a);
    printf("Qual o valor do Cateto Adjacente?");
    scanf("%d" ,&b);
    hipotenusa= sqrt(pow(a,2) + pow(b,2));
    printf("A hipotenusa será %d\n" , hipotenusa);
   */

    //Exercício 5
   /*
    float numero,razao,decimo;
     
     printf("Digite o Primeiro termo da P.A");
     scanf("%f", &numero);
     printf("Digite a Razão da P.A");
     scanf("%f", &razao);
     decimo = numero + (10 - 1) * razao;

     printf("O valor será %f\n" , decimo);
      */
   //Exercício 6
   /*
    float numero,razao,decimo;
    printf("Digite o  termo da P.G");
    scanf("%f", &numero);
    printf("Digite a Razão da P.A");
    scanf("%f", &razao);
    decimo = numero * pow(razao,4);

    printf("O valor será %f\n" , decimo);
    */
   //Exercício 7
     /*
    int a, b, c;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    // três operações de atribuição
    c = a;// faz uma cópia de a em c
    a = b;// copia b para a
    b = c;// copia c para b

    printf("Valor do a: %d\n", a);
    printf("Valor do B : %d\n", b);
    */
    //Exercício 8
    /*
    float numerador,denominador,decimal;
    printf("Qual será o numerador da fração");
    scanf("%f", &numerador);
    printf("Qual será o denominador da fração:");
    scanf("%f", &denominador);
    decimal = numerador/denominador;
    printf("O valor da Fração em Decimal será de : %f\n", decimal);
    */


    //Exercício 9
    /*
    int horas,minutos;
    printf("Qual a hora atual(Formato de Horas)");
    scanf("%d", &horas);
    minutos = (horas * 60);
    printf("Desde o Início do dia até a hora informada já se passaram %d minutos", minutos);
   */

    //Exercício 10

    //Classifique os valores abaixo de acordo com seu tipo, assinalando com I os valores Inteiros, R os valores Reais e com C os Caracteres.
    //
    //(C) ‘a’     (C) ‘/’     (R) 5.7     (R) 1012     (R) -49     (R) +342     (I) 569     (C) ‘A     (C) ‘_’     (R) 0.00001     (R) -545      (I) 1     (I) 0     (C) ‘(‘

    //Exercício 11

    // Assinale com um X os nomes de variáveis válidos.
    //(X) abc     ( ) 3abc     (X) a     ( ) 123a     (X) –a     (X) acd1     (X) ABCDE     ( ) etc.     (X) b316     (X) leia     (X) inteiro     (X) valor     (X) _b248     ( ) nota*do*aluno     (X) a1b2c3     ( ) 3 x 4     ( ) -_ad     (X) A&a     ( ) guarda-chuva     ( ) A123     ( ) Aa     (X) guarda_chuva     ( ) km/h     ( ) 3xyz     ( ) nome empresa     (X) sala_215     ( ) “nota”     ( ) ah!

}

