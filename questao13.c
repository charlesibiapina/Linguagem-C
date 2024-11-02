#include<stdlib.h>
#include<stdio.h>
int main (){
   char vogal;
   scanf("%c", &vogal);
   if (vogal=='a' || vogal =='e' || vogal=='i' || vogal=='o' || vogal=='u') {
    printf("A letra é uma vogal minuscula");
   } else {
    printf("A letra não é uma vogal minuscula");
   }
}

