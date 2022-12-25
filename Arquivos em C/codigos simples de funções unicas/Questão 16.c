#include <stdio.h>
#include <stdlib.h>

int main(){
    float K, C;
    printf("Digite uma temperatura em KELVIN para ser convertida em celsius!\n");
    scanf("%f", &K);
    C = K - 273.15;

    printf("A temperatura em CELSIUS eh: \n%f\n", C);

system("pause");
return 0;
}