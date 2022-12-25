#include <stdio.h>
#include <stdlib.h>

int main(){
    int maior, i, pos, N[100];
        system("color 0a");
        printf("Digite um numero!\n");

        for ( i = 0; i < 100; i++)
            {
             scanf("%i", &N[i]);
            }

            maior = N[0];
            for ( i = 0; i < 100; i++)
                {
                if (N[i] > maior){ 
                    maior = N[i];
                    pos = i; 
                }  
                }
                printf("%i\n%i\n", maior, pos);
    system("pause");
    return (0);
}