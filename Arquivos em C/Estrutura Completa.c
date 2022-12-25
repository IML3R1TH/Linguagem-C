#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nick[101];
    int mat;
}Doggz;

struct No{
    Doggz dado;
    struct No* prox;
};

typedef struct{
    struct No *inicio;
    struct No novo;
    struct No prox;
}Lista;

void menu(){
    printf("\n<===|=+=|DOGZ COMPETITION MENU|=+=|===>\n");
    printf("|1  - Inserir no inicio!\n");
    printf("|2  - Inserir no fim!\n");
    printf("|3  - Inserir apos!\n");
    printf("|4  - Inserir Antes!\n");
    printf("|5  - Mostrar Lista de Competidores\n");
    printf("|6  - Pesquisar Por Competidor!\n");
    printf("|7  - Deletar Inicio!\n");
    printf("|8  - Deletar Fim!\n");
    printf("|9  - Deletar Por Matricula!\n");
    printf("|10 - Deletar Apos!\n");
    printf("|11 - Deletar Antes!\n");
    printf("|12 - Deletar Toda a Lista!\n");
    printf("|13 - Alterar o Nome De Um Competidor!\n");
    printf("|14 - Verificar o Tamanho Da Lista!\n");
    printf("|15 - Criar Lista!\n");
    printf("|16 - Ordenar Listas!\n");
    printf("|17 - Salvar Em Um Arquivo.bin!\n");
    printf("|18 - Ler Um Arquivo.bin!\n");
    printf("|19 - Sair|Exit!\n");
    printf("Sua Escolha: \n");
}

void ler(Doggz *XT){
    printf("\nInsira A Nametag (nome no jogo): \n");
    scanf("%s", XT->nick);
    printf("Insira o numero de Inscricao: \n");
    scanf("%d", &XT->mat);
}

void insert_inicio(Lista *PL, Doggz dado){
    struct No *novo = (struct No*) malloc(sizeof(struct No));
    novo->dado = dado;
    novo->prox = PL->inicio;
    PL->inicio=novo;
}

void insert_fim(Lista *PL, Doggz dado){
    struct No *novo = (struct No*) malloc(sizeof(struct No));
    novo->dado = dado;
    novo->prox = NULL;
    if (PL->inicio==NULL){
        PL->inicio = novo;
        }else{
            struct No* Pin;
            for ( Pin = PL->inicio; Pin->prox != NULL; Pin = Pin->prox){
            Pin->prox = novo; 
            }  
            }    
}

struct No* pesquisar(Lista lista, int mat){
    struct No* pin;
    for (pin = lista.inicio; pin != NULL && pin->dado.mat != mat; pin = pin->prox);
     return pin;    
}

void alterarnome(Lista *PL, int mat, char newnick[]){
    struct No* pin = pesquisar(*PL, mat);
    if (pin == NULL){
        printf("\nEsse Competidor Nao Existe, Logo Nao Eh Possivel Fazer Essa Alteracao!\n");
        }else{
            strcpy(pin->dado.nick, newnick);

        }
           
}

void imprimir(Lista lista){
    struct No *pin;
    for (pin = lista.inicio; pin != NULL; pin = pin->prox){
            printf("Nome do Competidor: %s matricula: %d\n", pin->dado.nick, pin->dado.mat);
    }   
}

void deletar_inicio(Lista *PL){
    if(PL->inicio == NULL){
      printf("\nA Lista Esta Vazia!\n");
      }else{
        struct No* pin = PL->inicio;
        PL->inicio = pin->prox;
        free(pin);  
      }
}

struct No* inserir_apos(Lista *PL, Doggz D, int mat){
  struct No * pin;
  for(pin = PL->inicio; pin != NULL && pin->dado.mat != mat;pin = pin->prox){
    if (pin == NULL){
            return pin;
        }else{
            struct No *novo = (struct No*)malloc(sizeof(struct No));
            //novo->dado = dado;
            novo->prox = pin->prox;
            pin->prox = novo;
            return pin;
        } 
  }
}

struct No* inserir_antes(Lista *PL, Doggz dado, int mat){
    struct No *novo = (struct No*)malloc(sizeof(struct No));
    if (PL->inicio == NULL){
            return NULL;
        }else if(PL->inicio->dado.mat == mat){
          novo->dado = dado;
          novo->prox = PL->inicio;
          PL->inicio = novo;  
            }else{
              struct No* pin;
                for(pin = PL->inicio; pin->prox != NULL && pin->prox->dado.mat == mat; pin = pin->prox){
                    if (pin == NULL){
                        return pin;
                        }else{
                             struct No *novo = (struct No*)malloc(sizeof(struct No));
                             novo->dado = dado;
                             novo->prox = pin->prox;
                             pin->prox = novo;
                             return pin;
                        }
                }
                }
}

void deletar_fim(Lista *PL){
    if (PL->inicio == NULL){
            printf("\nO Competidor Nao Pode Ser Excluido!\n");
        }else if (PL->inicio->prox == NULL){
            struct No * pin = PL->inicio;
                PL->inicio = NULL;
                free(pin);
        }else{
            struct No * pin;
            struct No * pan;
                for(pin = PL->inicio; pin->prox != NULL; pin = pin->prox){
                    pan = pin;

                }
                pan->prox = NULL;
                free(pin);
        }   
}

void deletar_por_insc(Lista *PL, int mat){
    if (PL->inicio == NULL){
        printf("\nEssa Lista Esta Vazia!\n");
        }else if (PL->inicio->dado.mat == mat){
            struct No * pin = PL->inicio;
            PL->inicio = pin->prox;
            free(pin); 
            }else if (PL->inicio->prox == NULL){
                if (PL->inicio->dado.mat =! mat){
                    printf("\nO Competidor nao pode ser deletado!\n");
                }
    
                }else{
                    struct No * pan;
                    struct No * pin;
                        for (pin = PL->inicio; pin != NULL && pin->dado.mat != mat; pin = pin->prox){
                            pan = pin;
                        }
                    if (pin == NULL){
                        printf("\nO Competidor Nao Pode Ser Removido!\n");
                        }else{
                            pan->prox = pin->prox;
                            free(pin);
                        }
     
                }
                
}

void deletarapos(Lista *PL, int mat){
    struct No * pan;
    struct No * pin;
        for(pan = PL->inicio; pan != NULL && pan->dado.mat != mat; pan = pan->prox);{
            if (pan == NULL){
                printf("\nEsse competidor nao pode ser removido!\n");
                }else if (pan->prox != NULL){
                    printf("\nO Competidor Nao Pode Ser Removido!\n");
                    }else{
                        pin = pan->prox;
                        pan->prox = pin->prox;
                        free(pin);
                    }   
        }
}

void deletarAntes(Lista *PL, int mat){
    if (PL->inicio == NULL){
        printf("\nEssa Lista Esta Vazia!\n");
        }else{
            struct No * Paa = NULL;
            struct No * Pan = NULL;
            struct No * pin;
                for(pin = PL->inicio; pin != NULL && pin->dado.mat != mat; pin = pin->prox){
                    Paa = Pan;
                    Pan = pin;
                }
                    if (Pan == NULL){
                        printf("\nEsse competidor Nao Pode Ser Removido!\n");
                        }else if (Paa == NULL){
                            PL->inicio = pin;
                            free(Pan);
                            }else if (pin == NULL){
                                printf("\nO Competidor Nao Pode Ser Removido!\n");
                                }else{
                                    Paa->prox = pin;
                                    free(Pan);
                                }        
        
        }
           
}

void DeletarLista(Lista *PL){
    struct No * Pin;
    while(PL->inicio != NULL){
        Pin = PL->inicio;
        PL->inicio = Pin->prox;
        free(Pin);
    }
}

int size(Lista PL){
    struct No * pin;
    int contador = 0;
    for (pin = PL.inicio; pin != NULL; pin = pin->prox){
        contador++;
    }
        return contador;
    
}

Lista criarLista(int num){
    Lista lista;
    lista.inicio = NULL;
        for (int i = 0; i < num; i++){
            Doggz D;
            ler(&D);
            insert_fim(&lista, D);
        }

    return lista;       
}

void OrdenarListas(Lista *PL){
    struct No * pin;
    struct No * pij;
    struct No * pfim = NULL;

        if (PL->inicio == NULL){
            return;
        }
            for(pin = PL->inicio; pin->prox != NULL; pin = pin->prox){
                for(pij = PL->inicio; pij->prox != pfim; pij = pij->prox){
                    if (pij->dado.mat > pij->prox->dado.mat){
                        Doggz TEMPORARIO = pij->dado;
                        pij->dado = pij->prox->dado;
                        pij->prox->dado = TEMPORARIO;
                        //bubble sort
                    }  
                }
                pfim = pij;
            }
        
}

Lista BinLer(){
    Lista lista;
    lista.inicio = NULL;
    FILE *file = fopen("./Competição.b", "rb");
    Doggz D;

        while (fread(&D, sizeof(Doggz),1, file)){
            insert_fim(&lista, D);   
        }
        fclose(file);
        return lista;
}

void ArquivoBin(Lista lista){
    FILE *file = fopen("./Competição.b", "wb");
    struct No * pin;
        for (pin = lista.inicio; pin != NULL; pin = pin->prox){
                fwrite(&pin->dado, sizeof(Doggz),1,file);
        }
    fclose(file);
}

int main(){
    system("color 05");
    Lista lista;
    lista.inicio = NULL;
    int op;
    menu();
    scanf("%d", &op);
            while (op != 19){
                if (op == 1){
                    Doggz D;
                        ler(&D);
                        insert_inicio(&lista, D);
                    }else if (op == 2){
                        Doggz D;
                            ler(&D);
                            insert_fim(&lista, D);
                        }else if (op==3){
                            Doggz D;
                            ler(&D);
                            int mat;
                            printf("\nInsira o numero de Matricula que deseja inserir apos: \n");
                            scanf("%d", &mat);
                            struct No* pin = inserir_apos(&lista, D, mat);
                                if (pin == NULL){
                                    printf("\nImpossivel de inserir Competidor!!!\n\a");
                                    }
                            }else if (op == 4){
                                Doggz D;
                                ler(&D);
                                int mat;
                                printf("\nInforme a matricula do competidor a ser inserida antes: \n");
                                scanf("%d", &mat);
                                struct No * pin = inserir_antes(&lista, D, mat);
                                    if (pin == NULL){
                                        printf("\nImpossivel de inserir este competidor!\n");
                                    }
                                
                                }else if (op == 5){
                                            imprimir(lista);
                                        }else if (op == 6){
                                            int mat;
                                                printf("\nInsira a Matricula: \n");
                                                scanf("%d", &mat);
                                            struct No * pin = pesquisar(lista, mat);
                                                if (pin != NULL){
                                                    printf("\n%s %d\n", pin->dado.nick, pin->dado.mat);  
                                                }else{
                                                    printf("\nCompetidor nao encontrando ou nao cadastrado!!!\n\n\a");
                                                }
                                                
                                            }else if(op==7){
                                                deletar_inicio(&lista);
                                                }else if (op == 8){
                                                    deletar_fim(&lista);
                                                    }else if(op == 9){
                                                        int mat;
                                                            printf("\nInforme a Matricula: \n");
                                                            scanf("%d", &mat);
                                                            deletar_por_insc(&lista, mat);       
                                                        }else if(op == 10){
                                                            int mat;
                                                            printf("\nInforme a Matricula: \n");
                                                            scanf("%d", &mat);
                                                                deletar_por_insc(&lista, mat);
                                                            }else if(op == 11){
                                                                int mat;
                                                                printf("\nInforme a Matricula: \n");
                                                                scanf("%d", &mat);
                                                                deletarAntes(&lista, mat);
                                                                }else if(op == 12){
                                                                   DeletarLista(&lista); 
                                                                    }else if (op == 13){
                                                                         int mat;
                                                                            printf("\nInforme a Matricula: \n");
                                                                                scanf("%d", &mat);

                                                                            printf("\nInforme o Novo Nome Para o Competidor Escolhido: \n");
                                                                                char newnick[101];
                                                                                scanf(" %[^\n]s", newnick);
                                                                                    alterarnome(&lista, mat, newnick);

                                                                        }else if(op == 14){
                                                                            int tamanho = size(lista);
                                                                                printf("%i\n", tamanho);
                                                                            }else if(op == 15){
                                                                                int num;
                                                                                    printf("\nInforme o Numero de Listas A Serem Criadas: \n");
                                                                                    scanf("%i", &num);
                                                                                    criarLista(num);
                                                                                }else if(op == 16){
                                                                                    OrdenarListas(&lista);
                                                                                    }else if(op == 17){
                                                                                        ArquivoBin(lista);
                                                                                        }else if(op == 18){
                                                                                            Lista lista = BinLer();
                                                                                            }else if(op == 19){
                                                                                                printf("\nSaindo...!\n");
                                                                                                }else{
                                                                                                    printf("\nOpcao invalida!\n\n");   
                                                                                                }
            menu();
            scanf("%d", &op);
            }
        printf("\nObrigado por usar VitorInutilidades.com.br\n\n\a"); 
          
system("pause");
return 0;
}