#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() 

{
int idade1, idade2, diferenca;
printf("Insira a primeira idade: ");
scanf("%d", &idade1);
printf("Insira a segunda idade: ");
scanf("%d", &idade2);
diferenca=idade1-idade2;
printf("A diferença de idade é: %d", diferenca);
system("pause");
return 0;
}