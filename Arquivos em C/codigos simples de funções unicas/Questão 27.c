#include <stdio.h>
#include <stdlib.h>

int main(){
    float hr, reais, valorbruto, valoradd, valortotal;
    printf("Digite o numero de horas trabalhadas por mes, e o valor da hora trabalhada!\a\n");
    scanf("%f %f", &hr, &reais);
    valorbruto = hr * reais;
    valoradd = valorbruto * 0.10;
    valortotal = valoradd + valorbruto;

    printf("O seu valor mensal eh igual a \n%f\n", valortotal);
      
system("pause");
return 0;
}