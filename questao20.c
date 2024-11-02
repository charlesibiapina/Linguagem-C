#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main (){
   int numero;
   printf("Insira um numero inteiro:");
   scanf("%d", &numero);
   if(numero<0){
    printf("Negativo");
   } else(numero>0) {
    printf("Positivo");
   } else(numero=0) {
    printf("Zero")
   }
}
    