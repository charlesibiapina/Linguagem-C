#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() 
{
double m, cm;
printf("Insira a altura em metros: ");
scanf("%lf,", &m);
cm=m/100;
printf("A altura em centimetros é: %lf", cm);
system("pause");
return 0;
}