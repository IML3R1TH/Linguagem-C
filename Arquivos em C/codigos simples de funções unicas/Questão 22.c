#include <stdio.h>
#include <stdlib.h>

int main(){
    float RC, A;
    printf("Digite o Raio de um circulo, para esse programa calcular a area correspondente!\n");
    scanf("%f", &RC);

    A = 3.141592 * (RC * RC);

    printf("A area do circulo eh igual a\n%f\n", A);

    system("pause");
    return 0; 
}