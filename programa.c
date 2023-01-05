#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  int main(){
    // imprime o cabeçalho do jogo
  	printf ("*******************************\n");
    printf("*Bem vindo ao jogo de advinhação*\n");
     printf("********************************\n");

      int segundos = time(0);
      srand(segundos);

     int numerogrande = rand();  

     int numerosecreto = numerogrande % 100;
     int tentativas = 1;
     int chute;

     double pontos = 1000;
       
     int acertou = 0; 
     int nivel;
     printf("Qual o nívl de dificuldade?\n");
     printf("(1) Fácil (2) Médio (3) Difícil\n\n");
     printf("Escolha: "); 
     scanf("%d", &nivel);
     int numerodetentativas; 
     switch (nivel){

        case 1:    
            numerodetentativas = 20;
            break;
        case 2:
            numerodetentativas = 15;
            break;
        default :
        numerodetentativas = 6; 
        break;

    }
     
   
     for(int i = 1; i<= numerodetentativas; i++){
     printf("Tentativa %d ", tentativas);
     printf("Qual é o seu chute?");
     scanf("%d" , &chute);

     printf("Seu chute foi %d\n",chute);

     if(chute < 0){
        printf("Você não pode chutar números negativos!\n");
        continue;
       }

     acertou = (chute==numerosecreto);
     int maior = chute > numerosecreto;

     if(acertou){
       
          // For Parar de Executar
           break;
     }
       else if(maior){
           printf("Seu chute foi maior que o número secreto\n");
       }
       else {
          
          printf("Seu chute foi menor que o número secreto\n");

       }

             tentativas++;
             double pontosperdidos = abs(chute - numerosecreto) / (double)2;
            pontos = pontos - pontosperdidos;
}
     printf("Fim do Jogo");

  if(acertou){
     printf("Você ganhou!\n");
     printf("Você Acertou em %d tentativas!\n", tentativas);
  printf("Total de Pontos %.1f\n", pontos);


  } else{
    printf("Você perdeu ! Tente de novo!\n")
      }

}
