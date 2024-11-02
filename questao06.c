#include<stdlib.h>
#include<stdio.h>
int main (){
    int planeta;
    printf("Insira um número de 1 a 8");
    scanf("%d", &planeta);
    
    switch (planeta)
    {
        case 1: 
            printf("Mercúrio");
            break;
        case 2:
            printf("Vênus");
            break;
        case 3:
            printf("Terra");
            break;
        case 4:
            printf("Marte");
            break;
        case 5:
            printf("Júpiter");
            break;
        case 6:
            printf("Saturno");
            break;
        case 7:
            printf("Urano");
            break;
        case 8:
            printf("Netuno");
            break;
        default:
            printf("Valor digitado invalido");
            break;
    }
}
