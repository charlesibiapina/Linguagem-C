#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main (){
   int numero;
   printf("Digite o numero:");
   scanf("%d", &numero);
   if (numero<0)
   printf("Negativo");
   else 
   printf("Positivo");
}