#include <stdio.h>
#include <stdlib.h>

int main(){
   float x, y;
   float *px = &x, *py = &y;

    system("color 0a");
    printf("Esse programa recebe 2 coordenas com uma casa decimal, e aponta qual quadrante elas pertencem!!\nDigite o valor de X\n");
    scanf("%f", px);
    printf("Digite o valor de Y!\n");
    scanf("%f", py);

    if (*px > 0 && *py > 0)
    {
        printf("os pontos %.2f e %.2f pertencem ao Q1\n\n", *px,*py);
    }
        else if (*px < 0 && *py > 0)
        {
            printf("os pontos %.2f e %.2f pertencem ao Q2\n\n", *px,*py);
        }
            else if (*px < 0 && *py < 0)
             {
                printf("os pontos %.2f e %.2f pertencem ao Q3\n\n", *px,*py);
             }
                else if (*px > 0 && *py < 0)
                {
                    printf("os pontos %.2f e %.2f pertencem ao Q4\n\n", *px,*py);
                }
                    else{printf("os pontos %.2f e %.2f pertencem a origem\n\n", *px,*py);}

                        printf("Os pontos foram armazenados em X:%p e Y:%p\n\n",(float *)px, (float *)py);
                        
    system("pause");
    return 0;
}