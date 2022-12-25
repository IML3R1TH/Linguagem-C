#include <stdio.h>
#include <stdlib.h>

int main(){
    float MS, KM;
    printf("Digite uma velocidade em Metros por sergundo(MS), para ser convertida em Quilometros por hora (KM/H)!\n");
    scanf("%f", &MS);

    KM = MS * 3.6;

    printf("A velocidade em KM/H eh igual a:\n%f\n", KM);


system("pause");
return 0;

}