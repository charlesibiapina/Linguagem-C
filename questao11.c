#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main (){
    int numero;
    printf("Insira um numero inteiro:");
    scanf("%d", &numero);

    if (numero%5==0){
        printf("É múltiplo de 5");
    } else {
        printf ("Não é múltiplo");
    }
}