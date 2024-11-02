#include <stdio.h>

int main() {
    int idade;
    
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    if(idade >= 18 && idade <= 65) {
        printf("Pessoa adulta\n");
    } else {
        printf("Pessoa não adulta\n");
    }
    
    return 0;
}