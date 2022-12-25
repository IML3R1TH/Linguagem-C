#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float h, catetoA, catetoB;
    printf("Esse programa calcula o valor da hipotenusa!\nPara Saber ela basta fazer o que se pede:\nDigite os valores do cateto A e o Cateto B!!\a\n\n");
    scanf("%f %f", &catetoA, &catetoB);

    h = sqrt((catetoA * catetoA) + (catetoB * catetoB));

    printf("O valor da hipotenusa eh igual a \n%f aproximadamente!\n", h);

    system("pause");
    return 0;

}