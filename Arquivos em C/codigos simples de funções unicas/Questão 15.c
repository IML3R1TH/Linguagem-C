#include <stdio.h>
#include <stdlib.h>

int main(){
    float ms; 
    int kmh;
    printf("Esse programa faz conversao de KM/h em M/S!\nDigite a velocidade em KM/h para conversao!!\n");
    scanf("%f", kmh);
    ms = kmh/36;
    
    printf("A velocidade em M/S eh igual a:\n%f\n", ms);

system("pause");
return 0;
}