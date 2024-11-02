#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main ()
{
int b, h, a;  
printf("Insira a base");
scanf("%d", &b);
printf("Insira a altura");
scanf("%d", &h);
a=b*h/2;
printf("A área do triangulo é: %d", a);
system("pause");
return 0;
}

