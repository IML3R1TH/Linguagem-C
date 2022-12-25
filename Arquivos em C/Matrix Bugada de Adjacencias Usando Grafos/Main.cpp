#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include "lerArquivos.cpp"
#include "cidade.cpp"
#include "Grafo.h"

using namespace std;

int main()
{

    int limit = 500;
    Lista *PL;
    PL->inicio = NULL;
    char *arquivo1 = (char *)"data/cidades.csv";
    cidade *todasCidades = getCidades(arquivo1, limit);

    char *arquivo2 = (char *)"data/coordenadas.csv";
    gps *locais = getGps(arquivo2, limit);


    dataItem *d = getItens(todasCidades, locais, limit);
    printDataItens(d, limit);
    //saveDataItens(d);

   /* for(int i = 0; i < limit; i++)
    {
        printf("%f", CalcDis(PL[i].prox.DADOS.GPS.la)[i]);
    }*/
    Lista L1;
    Lista L2;

    Lista lista[2] = {L1, L2};
    
   /*
    int k=0;
    dataItem* cidadesDoRN = (dataItem*)malloc(167*sizeof(dataItem*));
    gps * localRN = (gps*)malloc(167*sizeof(gps*));
    for(int i = 0; i<5570; i++){
    if( strcmp (todasCidades[i].cidade.estado, "RN") == 0){
        cidadesDoRN[k] = todasCidades[i];
        localRN[k] = todoLocal[i];
            k++;
    }
    }*/
    



    int Maximo, VANULA;
    cout << "Informe a Quantidade de Vertices: \t";
    cin >> Maximo;

    cout << "\nInforme o Valor Para Representar a Ausencia de Aresta: \t";
    cin >> VANULA;
    
    //cout << Distance(L1.prox.DADOS.GPS.la, L2.prox.DADOS.GPS.la, L1.prox.DADOS.GPS.lo, L2.prox.DADOS.GPS.lo);

    Grafo Lista(Maximo, VANULA);
    TipoItem Item1, Item2;
    int OP, Valor, Peso;

    Lista.MENU();
    cin >> OP;
    while (OP != 7)
    {
        if (OP == 1)
        {
            system("cls");
            cout << "\nInforme o Numero de Cidades a Serem Inseridas:\t";
            cin >> Item1;
            Lista.InserirCidades(Item1);
        }
        else if (OP == 2)
        {
            system("cls");
            cout << "\nInforme A Cidade de Saida:\t";
            cin >> Item1;
            cout << "\nInforme A Cidade de Entrada:\t";
            cin >> Item2;
            cout << "Informe a Distancia Entre Elas(PS: Inserir Valores Positivos e Diferente de 0!!!):\n"; // Como se trata de uma MATRIZ ADJ, eu Optei por Valores Inteiros para Facilitar o Algoritmo!
            cin >> Peso;
            Lista.InserirInforms(Item1, Item2, Peso);
        }
        else if (OP == 3)
        {
            system("cls");
            cout << "\nInforme A Cidade Cujo, a distancia sera calculada:\t";
            cin >> Item1;
            Valor = Lista.ObterGrau(Item1);
            cout << "\nA Distancia entre elas EH: " << Valor << endl;
        }
        else if (OP == 4)
        {
            system("cls");
            cout << "\nInforme a Cidade de Saida:\t";
            cin >> Item1;
            cout << "Informe a Cidade de Entrada:\t";
            cin >> Item2;
            Valor = Lista.ObterPeso(Item1, Item2);
            cout << "O Peso Dessa Aresta EH: \t" << Valor << endl;
        }
        else if (OP == 5)
        {
            system("cls");
            Lista.ImprimirMatriz();
        }
        else if (OP == 6)
        {
            system("cls");
            Lista.ImprimirCidades();
        }

        Lista.MENU();
        cin >> OP;
    }

    system("cls");
    system("clear");
    cout << "\n\nObrigado Por Utilizar VitorInutilidades.CPP :P\n\n";
    system("pause");
    return 0;
}