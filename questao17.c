#include <stdio.h>

int main() {
    int base, altura;
    int area, perimetro;
    
    printf("Digite o valor da base do retângulo: ");
    scanf("%d", &base);
    
    printf("Digite o valor da altura do retângulo: ");
    scanf("%d", &altura);
    
    area = base * altura;
    perimetro = 2 * (base + altura);
    
    printf("A área do retângulo é %d e o perímetro é %d\n", area, perimetro);
    
    return 0;
}