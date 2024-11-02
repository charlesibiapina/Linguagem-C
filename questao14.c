#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
int num, ant, suc;
printf("Insira um numero: ");
scanf("%d", &num);
ant=num-1;
printf("Seu antecessor é: %d", ant);
suc=num+1;
printf("Seu sucessor é: %d", suc);
system("pause");
return 0;
}