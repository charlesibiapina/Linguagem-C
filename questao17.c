#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
float ms, kl;
printf("Insira a velocidade em ms: ");
scanf("%f", &ms);
kl=ms*3.6;
printf("A velocidade em kl é: %f", kl);
system("pause");
return 0;
}