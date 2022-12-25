#include <stdio.h>
#include <stdlib.h>

int main(){
    int X[10], i;
        system("color 0a");
        printf("Esse programa recebe 10 numeros inteiros, onde todo numero negativo ou igual a 0, é substituido pelo numero 1\n\n");
        printf("Digite 10 numeros inteiros!\n");

        for ( i = 0; i < 10; i++)
            {
             scanf("%i", &X[i]);
            }
            for ( i = 0; i < 10; i++)
            {
               if(X[i] <= 0) X[i] = 1;
            }
                for (i = 0; i < 10; i++)
                {
                    printf("X[%i] = %i\n", i, X[i]);
                }
                
    system("pause");
    return (0);
}