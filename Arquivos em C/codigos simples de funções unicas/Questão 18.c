#include <stdio.h>
#include <stdlib.h>

int main(){
    float KM, M;
    printf("Digite a distancia em milhas, para ser convertida em KM/H");
    scanf("%f", M);

    KM = 1.61 * M;

    printf("A Velocidade em quilometros é: \n%f\n", KM);

system("pause");
return 0;
}