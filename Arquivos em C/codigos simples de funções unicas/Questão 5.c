#include <stdio.h>
#include <stdlib.h>

int main(){
    char character;
    scanf("%c", &character);

    printf("\n\nA letra digitada foi: %c\n", character);
    printf("Esse caractere na tabela ASCII eh equivalente a: %i\n\n", character);

    system("pause");
    return 0;
}