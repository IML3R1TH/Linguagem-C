#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float number, raiz, quadrado, valor = 2;
    printf("Esse programa recebe um numero REAL!\nCaso o numero recebido seja positivo o programa apresenta o quadrado e a raiz!\n Digite um numero:\a\n");
    scanf("%f", number);
    if(number > 0 || number == 0){
        quadrado = pow(number, valor);
        raiz = sqrt(number);
        printf("\nNumero ao quadrado = %2.f\nRaiz do numero =%2.f\n", quadrado, raiz);
    }
    else{
        printf("Esse numero eh NEGATIVO!!!\a\n");
    }
    system("pause");
    return 0;
}