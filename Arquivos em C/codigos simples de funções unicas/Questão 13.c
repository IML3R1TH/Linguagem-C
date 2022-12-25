#include <stdio.h>
#include <stdlib.h>

int main(){
    int ano, idade, adn;
    printf("Digite o ano atual e a idade que voce vai faz /ou ja fez!\n");
    scanf("%i\n%i", &ano, &idade);
    adn = ano - idade;

    printf("O ano que voce nasceu foi:\n%i\n", adn);

    system("pause");
    return 0;
}