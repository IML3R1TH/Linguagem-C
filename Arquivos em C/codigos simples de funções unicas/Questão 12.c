#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, n3, soma;
    printf("Digite 3 valores para o programa executar a soma do quadrado deles!!!\n");
    scanf("%i %i %i", &n1, &n2, &n3);

    soma = (n1 * n1) + (n2 * n2) + (n3 * n3);

    printf("\n A soma do quadrado dos numeros eh: \n%i\n", soma);

    system("pause");
    return 0;
}