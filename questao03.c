#include <stdio.h>

int main () {
    int numero, soma;
    printf("Insira uma série de números inteiros (DIGITE 0 PARA SAIR): ");
    while (1){
        printf("Insira um número: ");
        scanf("%d", &numero);
        if (numero==0){
        break;
        }
        soma+=numero;
    }
    printf("A soma dos números é: %d", soma);
    return 0;
}
