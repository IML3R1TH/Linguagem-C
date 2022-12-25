#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int nu1, nu2;
    printf("Digite dois numeros para o programa identificar se eles são iguais, maior ou menor\n");
    scanf("%i %i", &nu1, &nu2);
    if(nu1 > nu2){
        printf("\nNu1 é maior que Nu2\n");
    }
else if(nu2 > nu1){
    printf("\nNu2 é maior que Nu1\n");
}
else{
    printf("\nos números digitados são iguais!\n");
}

    system("pause");
    return(0);
}