#include<stdlib.h>
#include<stdio.h>
#include<math.h>
//Faça um programa que leia o preço de um produto e a quantidade comprada, e exiba o valor total da compra.

int main()
{
float preco, quantidade, total;
printf("Insira o valor do produto:");
scanf("%f", &preco);
printf("Insira a quantidade de produtos comprada: ");
scanf("%f", &quantidade);
total=preco*quantidade;
printf("O valor total de todos os produtos comprados é: %f", total);
system("pause");
return 0;
}