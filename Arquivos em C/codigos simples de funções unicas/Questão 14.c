#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[50], endereco[50], cep[11], telefone[16];
    printf("digite seu nome completo!");
    scanf(" %[^\n]s", &name);
    printf("\nDigite o seu endereço!\n");
    scanf(" %[^\n]s", &endereco);
    printf("Digite seu CEP!\n");
    scanf("%s", &cep);
    printf("\nDigite seu telefone!");
    scanf("%s", &telefone);

     printf("\nNOME: %s", name);
     printf("\nENDEREÇO: %s", endereco);
     printf("\nCEP:%s          TELEFONE:%s", cep, telefone);

     system("pause");
     return 0;

}