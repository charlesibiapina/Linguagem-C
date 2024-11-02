#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() 
{
int horastrabalhadas, valorhora, total;
printf("Insira as horas trabalhadas: ");
scanf("%d", &horastrabalhadas);
printf("Insira o valor por hora: ");
scanf("%d", &valorhora);
total=horastrabalhadas*valorhora*20;
printf("O valor ganho em dias de trabalho é: %d", total);
system("pause");
return 0;
}
