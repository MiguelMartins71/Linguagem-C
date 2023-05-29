#include<stdio.h>
#include<stdlib.h>
/*
// Contar Digitos de um número
int contar_digitos(int n){
     if(n == 0){
        return 0;
     }else{
        return 1+contar_digitos(n/10);
     }
}
int main(){

int numero;
printf("Digite o número");
scanf("%d",&numero);
printf("O Número %d\n Tem o total de %d\n Dígitos",numero,contar_digitos(numero));
}

*/

// Divisão Sucessiva
/*
int divisao(int numerador,int denominador){
   if(denominador==0){
      return 0;
   }else{

      return 1+divisao(numerador-denominador,denominador);
   }
}
*/

//Resto da Divisão
/*
int resto(int numerador,int denominador){

  if(numerador==denominador){
   return 1;
  }else{
   return resto(numerador-denominador,denominador);
  }
}
*/
//Criação da varíavel Ponteiro Para o Arquivo

typedef struct{

char nome[50];
int idade;
char sexo;

}Pessoa;


Pessoa lista[10];

int quant = 0;

int cadastrarPessoa(){
  if(quant < 10){

   Pessoa p;
   scanf("%*c");
   printf("Nome :");
   fgets(p.nome,50,stdin);
    printf("Digite idade e sexo m ou f");

    scanf("%d %c",&p.idade, &p.sexo);
     
     lista[quant] = p;
     quant++;
     return 1;
  }else{

printf("Erro Vetor Cheio\n");
return 0;

  }

}

void imprimirVetor(){
   int i;
   for(i = 0; i< quant;i++){
   printf("Nome:%s",lista[i].nome);
   printf("Idade : %d\tSexo: %c\n\n",lista[i].idade, lista[i].sexo);
   }


}

void salvarEmArquivo(){

 FILE *arq = fopen("lista.txt","w");
 int i;
 if(arq){
     fprintf(arq,"%d\n",0,quant);

     for(i = 0; i< quant;i++){

         fprintf(arq, "%s", lista[i].nome);

         fprintf(arq,"%d\n",lista[i].idade);
         fprintf(arq,"%c\n",lista[i].sexo);
     }
    fclose(arq);

 }else{
     printf("Erro Não foi possível Abrir o arquivo");
 }
 
}

void lerDoArquivo(){

    FILE *arq = fopen("lista.txt","r");
    int i;
    if(arq){
        fscanf(arq,"%d\n",&quant);
        for(i = 0; i< quant;i++){
          Pessoa p;
            fgets(p.nome,50,arq);
            fscanf(arq,"%d\n",&p.idade);
            fscanf(arq,"%c\n",p.sexo);


        }
        fclose(arq);

    }else{
        printf("Erro Não foi possível Abrir o arquivo");
    }


}




int main() {
    int op;

    do {
        printf("\n1 - Cadastrar\n2 - Imprimir\n3 - Salvar em Arquivo\n4 - Ler do Arquivo\n0 - Sair\n");

        scanf("%d", &op);

        switch (op) {

            case 0:
                printf("Tchau...\n\n");
                break;

            case 1:
                cadastrarPessoa();
                break;
            case 2:
                imprimirVetor();
                break;

            case 3:
                salvarEmArquivo();
                break;
            case 4:
                lerDoArquivo();
                break;

            default:
                printf("opção Inválida.\n\n");

        }

    }while (op != 0);
return 0;

}



