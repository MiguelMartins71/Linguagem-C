#include <stdio.h>

  int main(){
    // imprime o cabeçalho do jogo
  	printf ("*******************************\n");
    printf("*Bem vindo ao jogo de advinhação*\n");
     printf("********************************\n");

     int numerosecreto = 42;
     int tentativas = 1;
     int chute;
   
     while(1){
     printf("Tentativa %d ", tentativas);
     printf("Qual é o seu chute?");
     scanf("%d" , &chute);

     printf("Seu chute foi %d\n",chute);

     if(chute < 0){
        printf("Você não pode chutar números negativos!\n");
        continue;
       }

     int acertou = (chute==numerosecreto);
     int maior = chute > numerosecreto;

     if(acertou){
           printf("Parabéns Você Acertou!\n");
           printf("Jogue de novo, você é um bom jogador\n");
           // For Para de Executar
           break;
     }
       else if(maior){
           printf("Seu chute foi maior que o número secreto\n");
       }
       else {
          
          printf("Seu chute foi menor que o número secreto\n");

       }

             tentativas++;
}
  printf("Fim do Jogo");
  printf("Você Acertou em %d tentativas", tentativas);
}




