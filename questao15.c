#include <stdio.h>

int main() {
    int angulo1, angulo2, angulo3;
    
    printf("Digite o primeiro ângulo: ");
    scanf("%d", &angulo1);
    
    printf("Digite o segundo ângulo: ");
    scanf("%d", &angulo2);
    
    printf("Digite o terceiro ângulo: ");
    scanf("%d", &angulo3);
    
    if(angulo1 + angulo2 + angulo3 == 180) {
        printf("Os ângulos formam um triângulo válido\n");
    } else {
        printf("Os ângulos não formam um triângulo válido\n");
    }
    
    return 0;
}