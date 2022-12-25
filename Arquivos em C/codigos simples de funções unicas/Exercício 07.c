#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;

    printf("Esse programa recebe uma idade e mostra o valor a ser pago para o plano de saude!\n\n");
    scanf("%i", &idade);

    if (idade > 0 || idade == 10)printf("O valor a ser pago eh de R$30,00!\n\n");
    else if (idade > 10 || idade == 29){ printf("O valor a ser pago eh R$60,00!\n\n");
    if (idade > 29 || idade == 45)
    {
       printf("o valor a ser pago eh R$120,00!!\n\n");
    }
    if (idade > 45 || idade == 59)
    {
       printf("o valor a ser pago eh igual a R$150,00!\n\n");
    }
     if (idade > 59)
     {
       printf("O valor a ser pago eh igual a R$300,00!\n\n");
     }
       
    }
    else printf("essa idade nao existe!!\n\n");
    
     
    system("pause");
    return 0;
}