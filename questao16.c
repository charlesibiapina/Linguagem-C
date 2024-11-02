#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
float b, h, a;
printf("Insira a base: ");
scanf("%f", &b);
printf("Insira a altura: ");
scanf("%f", &h);
a=b*h;
printf("A area do retangulo é: %f", a);
system("pause");
return 0;
}