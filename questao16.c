#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9 / 5) + 32;
    
    printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit\n", celsius, fahrenheit);
    
    return 0;
}