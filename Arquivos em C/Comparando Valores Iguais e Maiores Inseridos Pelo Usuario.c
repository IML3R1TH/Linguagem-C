#include <stdio.h> 
#include <stdlib.h>

int main(){
   int vetor,i;
   int X;
   system("color 0a");
  
   printf("Informe quantos valores o vetor vai ter!\n\n");

   scanf("%i",&vetor);

        int *v=(int*)malloc(vetor*sizeof(int));

            printf("Informe os valores!:\n\n");

                for(i=0; i < vetor; i++){

                scanf("%i",&v[i]);
                }
                printf("informe o valor a ser avaliado!:\n\n");
                scanf("%i",&X);

                    int maiores=0, iguais=0;

                    for(i=0;i < vetor;i++)

                        if(v[i]>X)

                        maiores++;

                    else
                        iguais++;

                        if(X > 0){

                            printf("Os valores iguais ou maiores ao valor, foram esses:\n\n");

                                for(i=0; i < vetor; i++){

                                    if(v[i]>X || v[i]==X)

                                    printf("%i\n", v[i]);}
                                
                        }
    printf("\nEndereco acessado: %x\n", v); 
    printf("Obrigado por usar VitorINUTILIDADES.BR\n\n\a");           
    free(v);
   system("pause");
   return 0;
}