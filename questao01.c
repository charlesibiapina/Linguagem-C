#include <stdio.h>
int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    if (numero<0) {
        printf("Insira um número positivo.");
        return 1;
    }
    printf("Contagem regressiva");
    while(numero>=0){
        printf("%d", numero);
        numero--;
    }

    return 0;
}