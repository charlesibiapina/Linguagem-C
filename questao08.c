#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main (){
    double altura, imc;
    int peso;
    printf("Insira a altura: ");
    scanf("%d", &altura);
    printf("Insira o peso:");
    scanf("%d", &peso);
    imc=peso/altura*altura;
    if (imc<18.5);
    printf("Abaixo do peso ideal");
    else (imc>=18.5 &&imc<25)
    printf("Dentro do peso ideal");

}