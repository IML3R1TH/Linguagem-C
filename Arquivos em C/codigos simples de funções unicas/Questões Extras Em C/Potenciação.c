#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, N[10], i;
    system("color 0a");
    printf("Esse programa recebe um numero aleatorio do usuario\nesse numero tera seu  resultado multiplicado por 2 em um total de 10 vezes!\n");
    printf("Digite um numero:\n");
    scanf("%i", &x);
    N[0] = x;
    for (i = 1; i < 10; i++){
            N[i] = N[i-1] * 2;
        }
            for (i = 0; i < 10; i++){
                printf("N[%i] = %i\n", i, N[i]);
                }
    system("pause");
    return (0);          
}