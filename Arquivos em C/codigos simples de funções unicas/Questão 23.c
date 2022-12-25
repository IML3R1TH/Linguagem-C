#include <stdio.h>
#include <stdlib.h>

int main(){
    float h, rcc, volume;
    printf("Esse programa eh responsavel por calcular o volume de um circulo, entao siga os passos para calcular o volume!!\n\nDigite a Altura e o Raio do circulo circular:\n");
    scanf("%f %f", &h, &rcc);

    volume = 3.141592 * (rcc * rcc) * h;

    printf("o volume eh igual a\n%f\n", volume);
    system("pause");
    return 0;
}