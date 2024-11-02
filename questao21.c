#include <stdio.h>
#include <math.h>

int main() {
float base, altura, hipotenusa;
printf("Digite o valor da base do triângulo retângulo: ");
scanf("%f", &base);
printf("Digite o valor da altura do triângulo retângulo: ");
scanf("%f", &altura);
hipotenusa = sqrt(pow(base, 2) + pow(altura, 2));
printf("O valor da hipotenusa é: %.2f\n", hipotenusa);
return 0;
}