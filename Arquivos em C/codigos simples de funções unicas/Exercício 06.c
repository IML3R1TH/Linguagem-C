#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("\nDigite o codigo do produto entre 1 e 10 para saber a classificação dele!\n");
    scanf("%i", &n);
    if(n == 1){
        printf("\nAlimento nao-perecivel\n");
    }
    else if(n >= 2 && n == 4){
        printf("\nAlimento perecivel\n");
    }
else if(n >=5 && n == 6){
    printf("Vestuario");
}
else if(n == 7){
    printf ("\nHigiene pessoal\n");
}
else if(n >= 8 && n ==10){
    printf("\nUtensilios domesticos\n");
}
else{
    printf("\nCodigo invalido!!!\n");
}
    system("pause");
    return(0);
}