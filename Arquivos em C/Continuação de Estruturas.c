#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct{
    char cidade[81];
    int hbtts;
}IBGE;

void ler(IBGE *X){
    printf("\nInsira o nome da cidade: ");
    scanf(" %[^\n]s", X->cidade);
    printf("\nInsira o numero de HABITANTES: ");
    scanf("%d", &X->hbtts);
}

void ordenacao(IBGE X[], int n){
    int i, j;    
    for ( i = 0; i < n; i++){
        int cidademenor = i;
        for (j = i + 1; j < n; j++){
            if(X[j].hbtts < X[cidademenor].hbtts){
                cidademenor = j;
            }
            
        }
        IBGE XC = X[i];
        X[i] = X[cidademenor];
        X[cidademenor] = XC;
    }
}

int main(){ 
    setlocale(LC_ALL,"Portuguese");
    system("color 05");
    printf("\n<|Bem-Vindo|>\n");
    printf("É com enorme prazer que o IBGE lança o programa de Ordem crescente de cidades menores as maiores\n");
    int  count;
    printf("\nInforme o número de cidades a serem ordenadas de acordo com sua população: \n");
    scanf("%d", &count); 
    IBGE X[count];
    int i, j;
    for (i = 0; i < count; i++){
       ler(&X[i]);
    }
    ordenacao(X, count);
    for ( i = 0; i < count; i++){
        printf("Cidade %s população %d\n", X[i].cidade, X[i].hbtts);
    }
    
    system("pause");
    return 0;
}