#include <stdio.h>
#include <stdlib.h>

int main(){
    float r, g;
    printf("Digite um valor em Graus para ser convertido em radianos!\n");
    scanf("%f", &g);
    
    r = g * 3.141592 / 180;

    printf("O valor em radianos eh igual ah\n%f\n");

    system("pause");
    return 0;

}