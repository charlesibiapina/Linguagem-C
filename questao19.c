#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
float salario_min, salario_p, quant_salario;
printf("Insira o valor do salario minimo: ");
scanf("%f", &salario_min);
printf("Insira o valor ganho por mes:");
scanf("%f", &salario_p);
quant_salario=salario_p/salario_min;
printf("A quantidade de salarios minimos ganhos por mes é: %f", quant_salario);
system("pause");
return 0;
}