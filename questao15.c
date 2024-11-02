#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
float numero, resultado;
printf("Insira o numero: ");
scanf("%f", &numero);
resultado=sqrt(numero);
printf("A raiz quadrada do numero é: %f", resultado);
system("pause");
return 0;
}