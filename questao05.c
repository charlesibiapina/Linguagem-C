#include<stdlib.h>
#include<stdio.h>
int main (){
    int cor;
    printf("Insira um número de 1 a 3");
    scanf("%d", &cor);
    
    switch (cor)
    {
        case 1: 
            printf("Vermelho");
            break;
        case 2:
            printf("Azul");
            break;
        case 3:
            printf("Amarelo");
            break;
        default:
            printf("Valor digitado invalido");
            break;
    }
}

