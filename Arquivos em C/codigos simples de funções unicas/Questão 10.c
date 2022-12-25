#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, n3, soma;
    printf("Digite tres numeros para que o programa faca a soma!\n");
    scanf("%i %i %i", &n1, &n2, &n3);

soma = n1 + n2 + n3;

printf("\nA soma dos tres numeros eh \n%i\n", soma);

system("pause");
return 0;
}