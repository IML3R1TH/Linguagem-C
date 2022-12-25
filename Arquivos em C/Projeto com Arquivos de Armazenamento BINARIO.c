#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct{
    char proprietario[81];
    char tabeliao[81];
    char testemunha1[81];
    char testemunha2[81];
    char consideracoes[1001]; 
}cartorio;

void escrever(cartorio *c){
        FILE *file = open("./Testamento.b", "wb");
        printf("Informe o nome do proprietario responsavel por criar o testamento: \n");
        scanf(" %[^\n]s", c->proprietario);
        printf("\nInforme o nome do tabelião presente no recinto: \n");
        scanf(" %[^\n]s", c->tabeliao);
        printf("\nInforme o nome da primeira testemunha: \n");
        scanf(" %[^\n]s", c->testemunha1);
        printf("\nInforme o nome da segunda testemunha: \n");
        scanf(" %[^\n]s", c->testemunha2);
        printf("\nInforme o motivo desse testamento: \n");
        scanf(" %[^\n]s", c->consideracoes); 
}

void mostrar(){
    FILE *file = fopen("./Testamento.b", "rb");
    cartorio c;
    if (file == NULL){
        printf("O Arquivo não existe!\n\n");
        system("pause");
        exit(1);
    }else{    
        while (fread(&c, sizeof(cartorio), 1, file)){
        printf("O proprietario do testamento: %s com a presença do tabelião %s, e as testemunhas %s e %s, Escreveu: %s\n\n", c.proprietario, c.tabeliao, c.testemunha1, c.testemunha2, c.consideracoes);
        }
    }
    fclose(file);
}

void menu(){
    printf("|<=====>|Escolha um Opção|<=====>|\n");
    printf("1 - Iniciar um novo testamento!\n");
    printf("2 - Mostrar o testamento Escrito!\n");
    printf("3 - Sair!\n");
    printf("|<=====|*|*|*|*|*|*|*|*|*|<=====>|\n");
    printf("Sua opção: ");
}

int main(void){
    cartorio c;
    FILE *file = fopen("./Testamento.b", "wb");
    setlocale(LC_ALL, "Portuguese");
        system("color 09");
        printf("Esse algoritmo é responsavel por salvar um testamento em um arquivo binario AFIM de manter a segurança e preservar o documento!\nPara criar o seu, informe oque se pede!\n");
        menu();
        int op;
        scanf("%d", &op);

            while (op != 3){
                    if (op == 1){
                                cartorio c;
                                escrever(&c);
                                fwrite(&c, sizeof(cartorio),1,file);
                                fclose(file);
                            }
                    else if (op == 2){
                                cartorio c;
                                mostrar(c);
                    }
                    else{
                        printf("Essa opção não foi encontrada!\n\n");
                    }

                    menu();
                    scanf("%d", &op);
                   }
            
                putchar('\n');
                printf("\nExecução concluida com exito!\nObrigato por usar nosso sistema de cartorio virtual!\n");

    system("pause");
    return 0;
}