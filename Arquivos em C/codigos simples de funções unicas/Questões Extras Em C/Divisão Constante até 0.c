#include <stdio.h>
#include <stdlib.h>

int main(){
    float X, N[100];
    int i;
    system("color 0a");
    printf("Digite um valor para que ele seja dividido constantemente até chegar a 0!");
    scanf("%f", &X);
    N[0] = X;
         for ( i = 1; i < 100; i++)
        {
             N[i] = N[i - 1]/2.0;
        }
            for ( i = 0; i < 100; i++)
            {
                printf("N[%i] = %4.f\n", i, N[i]);
            }
            
    system("pause");    
    return 0;
}