#include <stdio.h>
#include <stdlib.h>
 
int main() {
   float A[100];
  int i;
    system("color 0a");
        printf("Digite 100 numeros!\n");
        for(i = 0; i < 100; i++){
            scanf("%f", &A[i]);
        }
        for(i = 0; i < 100; i++){
            if(A[i] <= 10){
                printf("A[%i] = %0.1f\n", i, A[i]);
            }
        }
    system("pause");    
    return 0;
}