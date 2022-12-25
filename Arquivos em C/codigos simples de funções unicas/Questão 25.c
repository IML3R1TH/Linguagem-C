#include <stdio.h>
#include <stdlib.h>

int main(){
    float p, desconto, sub;
    printf("Digite o valor de um produto para esse programa calcular ele com o desconto de 12 porcento!\n");
    scanf("%f", &p);
    desconto = p * 0.12;
    sub = desconto - p;

    printf("O Valor do produto com desconto eh \n%f\n e o seu desconto foi de \n%f\n", sub, desconto);
    system("pause");
    return 0;
}