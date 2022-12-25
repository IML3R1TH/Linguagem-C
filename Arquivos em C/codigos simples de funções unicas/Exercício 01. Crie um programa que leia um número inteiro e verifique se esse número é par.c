#include <stdio.h>
#include <stdlib.h>
int main(){
    int numero, resultado;
    printf("Digite um numero para saber se ele e par ou impar\n");
    scanf("%i", &numero);
    resultado = numero%2;
    if(resultado==0){
        printf("%i -> par", resultado);
    }
else{
    printf("%i -> impar", resultado);
}

    system("pause");
    return(0);
}