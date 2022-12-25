#include <stdio.h>
#include <stdlib.h>

int main(){
    float metros, litros;
    printf("Digite um valor em metros cubicos, para ser convertido em Litros!\n");
    scanf("%f", &metros);

    litros = metros * 1000;

    printf("O valor em litros eh igual a:\n%f\n", litros);

system("pause");
 return 0;
}