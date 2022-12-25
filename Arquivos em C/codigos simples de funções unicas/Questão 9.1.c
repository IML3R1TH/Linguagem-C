#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, suc, ant;

    printf("Digite um numero inteiro para o programa apresentar seu numero antecessor e sucessor!\n\n");
    scanf("%i", &num);
    ant = num - 1;
    suc = num + 1;

    printf("O numero foi: %i\n Sucessor: %i\n Antecessor: %i\n", num, suc, ant);

system("pause");
return 0;

}

