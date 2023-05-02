//
// Created by miguel.carvalho on 01/05/2023.
//
//Miguel Henrique Martins Carvalho
//Matrícula : 766634

#include<stdio.h>
//1. Faça uma função em C para contar os dígitos de um determinado número usando recursão.
int contar_digito(int n){
    if(n == 0){
        return 0;
    }else{
        return 1 + contar_digito(n / 10);
    }
}
//2 Faça uma função para encontrar a soma dos dígitos de um número usando recursão.
int soma(int n){
    if(n == 0){
        return 0;
    }else{
        return n% 10 + soma(n / 10);
    }
}
//3. Faça uma função recursiva que calcula a divisão usando subtrações sucessivas:
//int divisao (int numerador, int denominador)
int divisao(int numerador,int denominador){
   if(numerador < denominador){
       return numerador;
   }else{
       return  resto(numerador - denominador, denominador);
   }
//4. Faça uma função recursiva que calcula o resto da divisão usando subtrações sucessivas:
//int resto (int numerador, int denominador)
double serie(int n){
       if(n == 0){
           return 1.0;
       }else{
           return 1.0 / fatorial(n) + serie(n-1);
       }
   }
//5. Faça uma função recursiva que calcula o valor de S da série a seguir para n > 0:
int fatorial(int n){
       if(n == 0){
           return 1;
       }else{
           return n * fatorial(n - 1);
       }
   }

}
int main(){

int num = 777;
int divisao_div = 5;
int denominador_divisor = 9;

printf("O número %d tem %d dígitos\n",num, contar_digito(num));
printf("A Soma dos Díigitos do número %d é %d\n", num, soma(num));
printf("%d Dividido por %d será %d com resto %d\n",divisao_div,denominador_divisor,divisao(divisao_div,denominador_divisor),resto(denominador_divisor,divisao_div));
printf("Série para n = 5: %f\n",serie(5));

}

//6 - As expressões p++;, (*p)++; e *(p++); têm comportamentos diferentes.
// A primeira incrementa o endereço apontado pelo ponteiro p em uma unidade, a segunda incrementa o valor apontado pelo ponteiro em uma unidade, e a terceira primeiro usa o valor apontado por p e depois incrementa seu endereço em uma unidade. A expressão *(p+10) se refere ao valor armazenado 10 posições depois do endereço apontado por p.

//7 - As alternativas verdadeiras são: b) valor == *valorPtr e c) valorPtr == &valor.
//A opção a) está incorreta porque o operador & retorna o endereço de memória de uma variável e o valor de valorPtr é o endereço de memória para o qual ele aponta, que é diferente do endereço de memória da variável valor.
//
//A opção b) é verdadeira porque *valorPtr é usado para acessar o valor armazenado no endereço de memória para o qual valorPtr aponta. Se valorPtr aponta para o endereço de memória de valor, então *valorPtr retorna o valor armazenado em valor.
//
//A opção c) é verdadeira porque &valor é usado para acessar o endereço de memória de valor e valorPtr contém o endereço de memória para o qual ele aponta. Se valorPtr aponta para o endereço de memória de valor, então &valor é o mesmo que valorPtr.
//
//A opção d) está incorreta porque *valor é usado para acessar o valor armazenado no endereço de memória para o qual valor aponta, mas valor não é um ponteiro, é uma variável

//8 - O erro no programa é o uso incorreto do operador & na linha do printf. A variável q é um ponteiro para um ponteiro para um inteiro, então &q retorna o endereço de memória do ponteiro q, não o valor apontado por ele. Para exibir o valor 10, deve-se usar a expressão *q ou **q no printf, que acessa o valor apontado pelo ponteiro duplo.
//O código corrigido fica assim:
//
//#include <stdio.h>
//int main()
//{
//int x, *p, **q;
//p = &x;
//q = &p;
//x = 10;
//printf("\n%d\n", **q);
//return 0;
//}

//9 - Segue o programa em C:
//#include <stdio.h>
//
//int main() {
//int valor_int = 1, *p_int = &valor_int;
//float valor_float = 1.0, *p_float = &valor_float;
//char valor_char = 'a', *p_char = &valor_char;

//10 - Os dois códigos são iguais.