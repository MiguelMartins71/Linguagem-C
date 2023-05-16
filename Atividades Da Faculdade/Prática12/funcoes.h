// diretiva if not defined
#ifndef FUNCOES_H
#define FUNCOES_H

// utilização de macro definindo PI
#define PI 3.14159

// variável global definindo um valor para PI2
float PI2 = 3.14;

// constante global definindo um valor para PI3
const float PI3 = 3.1;

// protótipos de funções/procedimentos
void proc(int *var);
int strLenght( char *palavra); //retorna o tamanho da palavra
int contarDigitos(int n); // retorna a quantidade de dígitos de um número n 
int contarDigitos_recursivo(int n); // retorna a quantidade de dígitos de um número n 
int fibonacci(int n); // retorna o n-esimo numero da série de fibonacci
int fibonacci_recursivo(int n); // retorna o n-esimo numero da série de fibonacci
int fatorial(int n); // retorna o fatorial de n
int fatorial_recursivo(int n); // retorna o fatorial de n
int isPalindromo(char *palavra, int n); // retorna 1 se a palavra for palindromo, 0 se não for. n é o tamanho da palavra
int isPalindromo_recursivo(char *palavra, int n); // retorna 1 se a palavra for palindromo, 0 se não for. n é o tamanho da palavra
int isPrimo(int n); //retorna 1 se um número for primo, 0 se não for
void strLower(char *palavra); // converte para minúsculas as letras maiúsculas
void strUpper(char *palavra); // converte para maiúsculas as letras minúsculas

// fim da diretiva if not defined
#endif