#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() 
{
double valor, desconto;
printf("Insira o valor:");
scanf("%lf", &valor);
desconto=valor-10/100;
printf("O valor com desconto é: %lf", desconto);
system("pause");
return 0;
}