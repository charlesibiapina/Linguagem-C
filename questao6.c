#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main ()
{
int numero1, numero2, numero3;
float media;
printf("Insira o primeiro numero:");
scanf("%d", &numero1);
printf("Insira o segundo numero:");
scanf("%d", &numero2);
printf("Insira o terceiro numero:");
scanf("%d", &numero3);
media=numero1+numero2+numero3/3;
printf("A media é: %f", media);
system("pause");
return 0;
}