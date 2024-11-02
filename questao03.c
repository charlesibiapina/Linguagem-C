#include<stdlib.h>
#include<stdio.h>
int main (){
    int estacao;
    printf("Insira um número de 1 a 12: ");
    scanf("%d", &estacao);
    
    switch (estacao)
    {
        case 1:
            printf("Inicio do verão");
            break;
        case 2:
            printf("Verão");
            break;
        case 3: 
            printf("Inicio do outono");
            break;
        case 4: 
            printf("Outono");
            break;
        case 5:
            printf("Outono");
            break;
        case 6:
            printf("Fim do Outono");
            break;
        case 7:
            printf("Inicio do Inverno");
            break;
        case 8:
            printf("Inverno");
            break;
        case 9:
            printf("Fim do inverno");
            break;
        case 10:
            printf("Inicio da primavera");
            break;
        case 11:
            printf("Primavera");
            break;
        case 12:
            printf("Fim da primavera");
            break;
        default:
            printf("Mês inválido");
            break;
    }
}