#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() 

{
double C, fahrenheight;
printf("Insira a temperatura em celsius: ");
scanf("%lf", &C);
fahrenheight=C*1.8+32;
printf("A temperatura em fahrenheight é: %lf", fahrenheight);
system("pause");
return 0;
}