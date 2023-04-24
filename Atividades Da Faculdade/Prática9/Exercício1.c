//
// Created by miguel.carvalho on 18/04/2023.
//
//Miguel Henrique Martins Carvalho
//766634
#include<stdio.h>
int main(){

      int num,n,positivo=0,negativo=0,zero=0;

    printf("Digite a Sequência");
    scanf("%d",&n);

          for(int i =0;i<n;i++){
              scanf("%d",&num);

              if(num > 0){
                  positivo++;

              }if(num<0){

                  negativo++;
              }else{

                  zero++;
              }


              printf("Positivos %d\n:",positivo);
              printf("Negativos %d\n:",negativo);
              printf("Zeros : %d",zero);

          }









}