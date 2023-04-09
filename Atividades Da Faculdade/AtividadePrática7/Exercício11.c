//
// Created by Miguel on 09/04/2023.
//

#include<stdio.h>
#include<string.h>
int main(){
    char str[100], ch;
    int count = 0;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    printf("Digite um caractere: ");
    scanf("%c", &ch);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("O caractere '%c' aparece %d vezes na string '%s'\n", ch, count, str);








}
