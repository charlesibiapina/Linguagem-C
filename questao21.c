#include <stdio.h>
int main() {
    char letra;
    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    if (letra >= 'a' && letra <= 'z') {
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            printf("A letra não é uma consoante minúscula\n");
        } else {
            printf("A letra é uma consoante minúscula\n");
        }
    } else {
        printf("O caractere digitado não é uma letra minúscula\n");
    }
    return 0;
}