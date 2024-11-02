int main() {
    int numero1, numero2, numero3;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    printf("Digite o terceiro número: ");
    scanf("%d", &numero3);
    
    if (numero1 > numero2) {
        int temp = numero1;
        numero1 = numero2;
        numero2 = temp;
    }
    if (numero2 > numero3) {
        int temp = numero2;
        numero2 = numero3;
        numero3 = temp;
    }
    if (numero1 > numero2) {
        int temp = numero1;
        numero1 = numero2;
        numero2 = temp;
    }

    printf("Os números em ordem crescente são: %d, %d, %d\n", numero1, numero2, numero3);

    return 0;
}