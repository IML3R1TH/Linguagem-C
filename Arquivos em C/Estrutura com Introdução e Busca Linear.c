#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct{
    char nome[51];
    char endereco[101];
    int numero;
    int telefone;
    int CEP;
}correios;

void ler(correios *c){
        printf("Informe seu nome: \n");
        scanf(" %[^\n]s", c->nome);
        putchar('\n');
        printf("Informe o CEP: \n");
        scanf("%i", &c->CEP);
        putchar('\n');
        printf("Informe o endereço da sua residência: \n");
        scanf(" %[^\n]", c->endereco);
        putchar('\n');
        printf("Informe o numero da casa: ");
        scanf("%i", &c->numero);
        printf("Informe um numero de telefone para contato: \n");
        scanf("%i", &c->telefone);
        putchar('\n');
    }

int buscalinear(correios c[], int x, int numero){
    int i;
    for (i = 0; i < x; i++){
        if (c[i].telefone == numero){
            return i;
        }
       return -1; 
    }
    
}
int main(void){
setlocale(LC_ALL, "portuguese");
system("color 06");
            printf("Bem-Vindo ao nosso sistema de cadastros aos Correios HQ!\npara se registrar faça oque se pede: \n");
                int count;
                printf("Informe a quantidade de usuarios a serem cadastrados: \n");
                scanf("%d", &count);
                    correios c[count];
                    for (int i = 0; i < count; i++){
                        ler(&c[count]);
                    }
                    printf("Informe o cadastro que deseja procurar, utilizando o numero do telefone: \n");
                    int v;
                    scanf("%i", &v);

                    int procura = buscalinear(c, count, v);

                    if (procura == -1){
                        printf("Não foi encontrado ninguém com esse telefone!!!!\n\a");
                    }else{
                       printf("O Telefone informado pertence a %s\n", c[procura].nome);
                    }
 printf("\nObrigado por utilizar VitorInutilidades.com.br!\n\a");
system("pause");
return 0;
}