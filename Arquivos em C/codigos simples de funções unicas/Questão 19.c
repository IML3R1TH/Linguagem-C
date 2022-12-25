#include <stdio.h>
#include <stdlib.h>

int main(){
    float C, P;
    printf("Digite uma medida em polegadas para ser convertida em centimetros!\n");
    scanf("%f", P);
    C = P * 2.54;

    printf("O valor convertido para centimetros eh igual a: \n%2.f\n", C);

    system("pause");
    return 0;
}