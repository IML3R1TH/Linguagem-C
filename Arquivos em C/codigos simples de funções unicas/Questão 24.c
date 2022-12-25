#include <stdio.h>
#include <stdlib.h>

int main(){
    float consumo, p, t;
    printf("Esse programa calcula o consumo de energia!\nPara saber o seu consumo basta seguir o que eh pedido!!\n");
    printf("Digite o numero de horas mensais em que os aparelhos ficam ligados!\n");
    scanf("%f", &t);

    printf("Digite a potencia em Watss do aparelho!");
    scanf("%f", &p);

    consumo = (t * p)/ 1000;

    printf("O consumo mensal eh igual a \n%f\n", consumo);
    system("pause");
    return 0; 
}