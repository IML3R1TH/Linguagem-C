#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include "cidade.cpp"

using namespace std;

typedef string TipoItem;

class Grafo
{
private:
    int ArestaNula;
    int TamanhoDaMatriz;
    int MaxCidades;
    TipoItem *Cidades;
    int **MatrixDAJS;
    float *x, *y;
public:
    Grafo(int Max, int ValorNULL); // Construtor
    ~Grafo();                      // Destrutor
    int ObterIndice(TipoItem item);
    bool ItsFull();
    void InserirCidades(TipoItem item);
    void InserirInforms(TipoItem NODEEXIT, TipoItem NODEJOIN, int Peso);
    int ObterPeso(TipoItem NODEEXIT, TipoItem NODEJOIN);
    int ObterGrau(TipoItem Item);
    void ImprimirMatriz();
    void ImprimirCidades();
    void MENU();
    float Distance();
};