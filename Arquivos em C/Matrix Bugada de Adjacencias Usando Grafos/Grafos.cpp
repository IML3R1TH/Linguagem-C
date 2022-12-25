#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 5570
#include "Grafo.h"

using namespace std;

Grafo::Grafo(int Max, int ValorNULL)
{
    MaxCidades = 0;         // Começa Com Zero, Pois, Não Há Nenhum Valor AINDA!
    TamanhoDaMatriz = Max;  // Será o Valor Maximo Informado Pelo Usuario, Já Que é Uma MATRIZ DE ADJACÊNCIA!
    ArestaNula = ValorNULL; // Será o Valor NULO Informado Pelo Usuario!

    Cidades = new TipoItem[TamanhoDaMatriz]; // Cria Vetores de STRINGS

    MatrixDAJS = new int *[TamanhoDaMatriz]; // Vetor de Inteiros, Onde Cada Elemento Dessa Matriz é um Vetor de Inteiros
    for (int i = 0; i < TamanhoDaMatriz; i++)
    {
        MatrixDAJS[i] = new int[TamanhoDaMatriz];
    } // Declaração da Matriz

    for (int i = 0; i < TamanhoDaMatriz; i++)
    {
        for (int j = 0; j < TamanhoDaMatriz; j++)
        {
            MatrixDAJS[i][j] = ArestaNula;
        }
    } // Essa Matriz é Um LOOP Snake, Ela indica que por enquanto Ninguém TEM ARESTAs

} // Construtor

Grafo::~Grafo()
{
    delete[] Cidades;
    for (int i = 0; i < TamanhoDaMatriz; i++)
    {
        delete[] MatrixDAJS[i]; // Deleta Todos os Vetores LINHAS!
    }
    delete[] MatrixDAJS; // Desaloca Todos Os Vetores
} // Calcula o Destrutor

int Grafo::ObterIndice(TipoItem item)
{
    int indice = 0;
    while (item != Cidades[indice])
    {
        indice++; // Se a CONDIÇÃO FOR VERDADEIRA ELA INCREMENTA VALORES!!!
    }             // Percorre os Vertices, até encontrar alguém igual a esse ITEM
    return indice;
}

bool Grafo::ItsFull()
{
    return (MaxCidades == TamanhoDaMatriz); // Se os Números Forem Iguais, Ele é Verdadeiro e Logo Está Cheio... Se Forem Diferente, ele Retornara Falso, Pois, Não Alcançou o Número de Vertices!
}

void Grafo::InserirCidades(TipoItem item)
{
    if (ItsFull())
    {
        cout << "\nO Numero Maximo de Cidades Ja Foi Alcancado!!\n";
    }
    else
    {
        Cidades[MaxCidades] = item;
        MaxCidades++;
    } // Se o vertice não estiver CHEIO, ele será incrementado!

} // Função de Inserir os Vertices

void Grafo::InserirInforms(TipoItem NODEEXIT, TipoItem NODEJOIN, int Distancia)
{
    int Linha = ObterIndice(NODEEXIT);
    int Coluna = ObterIndice(NODEJOIN);
    MatrixDAJS[Linha][Coluna] = Distancia;

    MatrixDAJS[Coluna][Linha] = Distancia; // Remover se For Direcionado!
} // Função de Inserir as Arestas

int Grafo::ObterPeso(TipoItem NODEEXIT, TipoItem NODEJOIN)
{
    int Linha = ObterIndice(NODEEXIT);
    int Coluna = ObterIndice(NODEJOIN);
    return (MatrixDAJS[Linha][Coluna]);
}

int Grafo::ObterGrau(TipoItem Item)
{
    int Linha = ObterIndice(Item);
    int Grau = 0;
    for (int i = 0; i < TamanhoDaMatriz; i++)
    {
        if (MatrixDAJS[Linha][i] != ArestaNula)
        {
            Grau++; // Se a Aresta For Diferente de 0, o Grau Incrementa!
        }
    }
    return Grau;
}

void Grafo::ImprimirMatriz()
{
    cout << "Matriz de Adjacencias:\n";
    for (int i = 0; i < TamanhoDaMatriz; i++)
    {
        for (int j = 0; j < TamanhoDaMatriz; j++)
        {
            cout << MatrixDAJS[i][j] << " ";
        }
        cout << endl;
    }
} // Imrpime a Matriz!!

void Grafo::ImprimirCidades()
{
    cout << "Lista de Cidades:\n";
    for (int i = 0; i < MaxCidades; i++)
    {
        cout << i << ": " << Cidades[i] << endl;
    }
} // Imprime os Vertices!!

/*float Grafo::Distance(float X1, float Y1, float X2, float Y2)
{
    return(sqrt(pow(X1 - X2,2) + (pow(Y1 - Y2,2))));
}*///Calcula Distancia

void Grafo::MENU()
{
    cout << "\n|+=+=+=+=+=+|------|M E N U|------|+=+=+=+=+=+|\n";
    cout << "#1 -  inserir um vertice!\n";
    cout << "#2 -  inserir uma aresta!\n";
    cout << "#3 -  imprimir o grau de um vertice!\n";
    cout << "#4 -  imprimir o peso de uma aresta!\n";
    cout << "#5 -  imprimir a matriz de adjacencias!\n";
    cout << "#6 -  imprimir a lista de vertices!\n";
    cout << "#7 -  Sair!\n";
    cout << "\nSua Escolha:\t";
}

