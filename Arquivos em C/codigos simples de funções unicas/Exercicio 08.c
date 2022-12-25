#include <stdio.h>
#include <stdlib.h>

int main(){
    int op;
    float homens, mulheres, h;
    printf("Esse programa recebe o sexo e a altura de uma pessoa\ne calcula seu peso ideal!!\nQual o seu sexo?\n(1)masculino\n(2)Feminino\n");
    scanf("%i", &op);
    printf("\nDigite a sua altura!\n");
    scanf("%f", &h);
    switch( op ){
    case 1:
    homens = (72.7 * h) - 58;
    printf("Seu peso ideal eh de %f\n\n", homens);
        break;
    case 2: 
    mulheres = (61.1 * h) - 44.7;
    printf("Seu peso ideal eh de %f\n\n", mulheres);
    break;

    default:
    printf("opcao invalida!\n\n");
        break;
    }   
    system("pause");
    return 0;
}