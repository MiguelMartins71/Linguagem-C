#include <stdio.h>
// * = Endereço de Memória
void calcula(int* c){
     printf("Calcula %d %d\n", (*c),c);
     (*c)++;
     printf("Calcula %d %d\n", (*c),c);

} 


int main(){
	
 int c = 10;

 printf("main %d %d\n",c, &c);
 calcula(&c);
 printf("main  %d %d\n", c, &c);





}