#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main() // IMC = Massa (kg) ÷ Altura (m)²
{
float kg, m, imc;
printf("insira o peso: ");
scanf("%f", &kg);
printf("Insira a altura: ");
scanf("%f", &m);
imc=kg/m*m;
printf("O imc é: %f", imc);
system("pause");
return 0;
}