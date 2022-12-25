#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[81];
    int matricula;
    int cpf;
}discente;

void lerusuarios(discente *d){
    printf("Informe seu nome: \n");
    scanf(" %[^\n]s", d->nome);
    printf("Informe o numero de matricula: \n");
    scanf("%i", &d->matricula);
    printf("\nInforme o seu CPF: \n");
    scanf("%d", &d->cpf);
}

int buscabinaria(discente d[], int a, int matricula){
    int i = 0;
    int fim = a - 1;
    while (i <= fim){
        int meio = (i + fim)/2;
        if (d[meio].matricula == matricula){
            return meio;
            }else if (d[meio].matricula < matricula){
                i = meio + 1; 

                }else{
                    fim = meio -1;
                }         
    }
    return -1;
}


int main(){
    system("color 0a");
    int a;
    int i;

        printf("Ola instituicao de ensino!\nEsse programa eh responsavel por cadastrar uma determinada quantidade indicada para cadastros a sua instituicao.\nPara iniciar esse processo, faca oque se pede!\n");
        printf("Informe Quantos discente serao cadastrados a instituicao: \n");
        scanf("%i", &a);
        discente d[a];
    for (i = 0; i < a; i++){
        lerusuarios(&d[i]);
    }
    printf("\nInforme o numero de matricula que deseja buscar: \n");
    int g;
    scanf("%i", &g);
    int z = buscabinaria(d, a, g);

    if (z == -1){
        printf("\nDiscente nao encontrado, ou nao cadastrato no sistema!\n\a");
    }else{
        printf("\nO numero de matricula informado pertence ao discente %s", d[z].nome);
        }  
        printf("\nObrigado por utilizar VitorInutilidades.com.br\n"); 
system("pause");
return 0;
}