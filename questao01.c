#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main (){
   int idade;
   printf("Digite a idade:");
   scanf("%d", &idade);
   if (idade>=18)
      printf("Maior de idade");
    else(idade<18);
      printf("Menor de idade");
}