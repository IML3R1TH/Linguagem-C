#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int dia;
    printf("digite um numero de 1 a 7 para ver qual dia da semana e");
    scanf("%i", &dia);
    switch(dia){
        case 1:
        printf("Domingo");
        break;
        case 2:
        printf("Segunda - Feira");
        break;
        case 3:
        printf("Terça - Feira");
        break;
        case 4:
        printf("Quarta - Feira");
        break;
        case 5:
        printf("Quinta - Feira");
        break;
        case 6:
        printf("Sexta - Feira");
        break;
        case 7:
        printf("Sabado (dia de tomar banho xD)");
        break;
        default:
        printf("Não tem essa opção de dia!");
    }
    system("pause");
    return(0);
}