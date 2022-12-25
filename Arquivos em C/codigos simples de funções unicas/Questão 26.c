#include <stdio.h>
#include <stdlib.h>

int main(){
    float dias, valorbruto, valordesconto, valortotal;
    printf("Esse programa calcula o valor total em dinheiro somando todas as diarias (R$ 30,00), com o desconto de 8 porcento do imposto de renda!\n Para saber o valor mensal, basta digitar a quantidade de dias!\n");
    scanf("%f", &dias);
valorbruto = dias * 30;
valordesconto = valorbruto * 0.8;
valortotal = valordesconto - valorbruto;

printf("O valor mensal a ser recebido eh igual a \n%f\n", valortotal);
system("pause");
return 0;
}