#include <stdio.h>
#include <math.h>
int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    int raiz = (int)sqrt(numero);
    if (raiz * raiz == numero) {
        printf("O número é um quadrado perfeito\n");
    } else {
        printf("O número não é um quadrado perfeito\n");
    }
    return 0;
}