#include <stdio.h>
int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    if (numero % 2 == 0 && numero > 0) {
        printf("O número é par e positivo\n");
    } else {
        printf("O número não é par e positivo\n");
    }
    return 0;
}