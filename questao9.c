#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() 
{
int kg, lbs;
printf("Insira o peso em quilogramas: ");
scanf("%d,", &kg);
lbs=kg*22046;
printf("O peso em libras é: %d", lbs);
system("pause");
return 0;
}