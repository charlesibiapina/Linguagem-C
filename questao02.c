#include <stidio.h>
int main() {
    int numero, i;
    printf("Insira um número:");
    scanf("%d", &numero);
    printf("Tabuada do %d", numero);
    i=1;
    while(i<=10){
        printf("%dx%d=%d", numero, i, numero*i);
        i++;
    }
    return 0;
}