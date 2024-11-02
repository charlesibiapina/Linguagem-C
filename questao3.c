#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() 

{
int num1, num2, multiplicacao;
printf("Digite o numero 1: ");
scanf("%d", &num1);
printf("Digite o numero 2: ");
scanf("%d", &num2);
multiplicacao=num1*num2;
printf("A multiplicação entre eles é: %d\n", multiplicacao);

system("pause");
return 0;
}