#include <stdio.h>
#include <stdlib.h>

int main(){
    int restodadivisao, i, N[1000];
        system("color 0a");
        printf("Digite um numero!\n");
        scanf("%i", &restodadivisao);

        for ( i = 0; i < 1000; i++)
            {
             N[i] = i % restodadivisao;
            }
    
            for ( i = 0; i < 1000; i++)
                {
                printf("N[%i] = %i\n", i, N[i]);
                }
    system("pause");
    return (0);
}