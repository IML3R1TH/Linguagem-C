#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "cidade.cpp"
#define MAX 5570

// DECLARATIONS
dataItem *getItens(cidade *, gps *);
void printDataItens(dataItem *);
void saveDataItens(dataItem *);

cidade *getCidades(char *arquivo);
gps *getGps(char *);
char *remover(char *text);

// READING CITIES
cidade *getCidades(char *arquivo, int limit)
{
    FILE *f = fopen(arquivo, "r");
    cidade *cidades = (cidade *)malloc(limit * sizeof(cidade));
    if (!f)
    {
        perror("Arquivo não existe");
        return NULL;
    }
    fscanf(f, "CODIGO MUNICIPIO;UF;NOME MUNICIPIO");
    unsigned int cod;
    char *uf;
    char *cid;
    int i = 0;
    while (i < limit)
    {
        uf = (char *)malloc(2 * sizeof(char));
        cid = (char *)malloc(80 * sizeof(char));
        fscanf(f, "%d;%[^;];%s", &cod, uf, cid);
        printf("%d|%s|%s\n", cod, uf, cid);
        cidades[i].id = cod;
        cidades[i].estado = uf;
        cidades[i].cidade = cid;
        i = i + 1;
    }
    return cidades;
}
/*
cidade *getCidades(char *arquivo)
{
    FILE *f = fopen(arquivo, "r");
    cidade *cidades = (cidade *)malloc(MAX * sizeof(cidade));
    if (!f)
    {
        perror("Arquivo não existe");
        return NULL;
    }
    fscanf(f, "CODIGO MUNICIPIO;UF;NOME MUNICIPIO");
    unsigned int cod;
    char *uf;
    char *cid;
    int i = 0;
    while (!feof(f))
    {
        uf = (char *)malloc(2 * sizeof(char));
        cid = (char *)malloc(40 * sizeof(char));
        fscanf(f, "%d;%s;%s", &cod, uf, cid);
        printf("%d %s %s", cod, uf, cid);
        cidades[i].id = cod;
        cidades[i].estado = uf;
        cidades[i].cidade = cid;
        i = i + 1;
    }
    return cidades;
}*/

// READING COORDINATES
gps *getGps(char *localizacoes, int limit)
{
    FILE *f = fopen(localizacoes, "r");
    gps *local = (gps *)malloc(limit * sizeof(gps));
    if (!f)
    {
        perror("Arquivo não existe");
        return NULL;
    }
    fscanf(f, "CODIGO MUNICIPIO;LATITUDE;LONGITUDE");
    unsigned int cod;
    latitude la;
    longitude lo;
    int i = 0;
    while (i < limit)
    {
        fscanf(f, "%u;%f;%f", &cod, &la, &lo);
        printf("%u|%.2f|%.2f\n", cod, la, lo);
        local[i].id = cod;
        local[i].la = la;
        local[i].lo = lo;
        i = i + 1;
    }
    return local;
}
/*
gps *getGps(char *localizacoes)
{
    FILE *f = fopen(localizacoes, "r");
    gps *local = (gps *)malloc(MAX * sizeof(gps));
    if (!f)
    {
        perror("Arquivo não existe");
        return NULL;
    }
    fscanf(f, "CODIGO MUNICIPIO;LATITUDE;LONGITUDE");
    unsigned int cod;
    latitude la;
    longitude lo;
    int i = 0;
    while (!feof(f))
    {
        fscanf(f, "%u;%f;%f", &cod, &la, &lo);
        printf("%u;%.2f;%.2f\n", cod, la, lo);
        local[i].id = cod;
        local[i].la = la;
        local[i].lo = lo;
        i = i + 1;
    }
    return local;
}*/

// READING ITEMS
dataItem *getItens(cidade *cities, gps *local, int limit)
{
    dataItem *dados = (dataItem *)malloc(limit * sizeof(dataItem));
    int k = 0;
    for (size_t i = 0; i < limit; i++)
    {
        dados[k].key = cities[i].id;
        for (size_t j = 0; j < limit; j++)
        {
            if (cities[i].id == local[j].id)
            {
                dados[k].city = cities[i];
                dados[k].GPS = local[j];
                k++;
            }
        }
    }
    return dados;
}
/*
dataItem *getItens(cidade *cities, gps *local)
{
    dataItem *dados = (dataItem *)malloc(MAX * sizeof(dataItem));
    int k = 0;
    for (size_t i = 0; i < MAX; i++)
    {
        dados[k].key = cities[i].id;
        for (size_t j = 0; j < MAX; j++)
        {
            if (cities[i].id == local[j].id)
            {
                dados[k].city = cities[i];
                dados[k].GPS = local[j];
                k++;
            }
        }
    }
    return dados;
}*/

// PRINTING
/*
void printDataItens(dataItem *dados, int start, int limit)
{
    if (start > MAX)
    {
        start = 0;
    }
    for (int i = start; i < start + limit; i++)
    {
        printf("%d | %d | %s | %s | %.2f | %.2f \n", i, dados[i].key, dados[i].city.estado, dados[i].city.cidade, dados[i].GPS.la, dados[i].GPS.lo);
    }
}*/

void printDataItens(dataItem *dados, int limit)
{
    for (int i = 0; i < limit; i++)
    {
        printf("%d | %d | %s | %s | %.2f | %.2f \n", i, dados[i].key, dados[i].city.estado, dados[i].city.cidade, dados[i].GPS.la, dados[i].GPS.lo);
    }
}
/*
void printDataItens(dataItem *dados)
{
    for (int i = 0; i < MAX; i++)
    {
        printf("%d | %d | %s | %s | %.2f | %.2f \n", i, dados[i].key, dados[i].city.estado, dados[i].city.cidade, dados[i].GPS.la, dados[i].GPS.lo);
    }
}*/

void saveDataItens(dataItem *dados)
{
    FILE *f = fopen("dados.dat", "w");
    for (int i = 0; i < MAX; i++)
    {
        printf("%d | %d | %s | %s | %.2f | %.2f \n", i, dados[i].key, dados[i].city.estado, dados[i].city.cidade, dados[i].GPS.la, dados[i].GPS.lo);
    }
}

void FileScan(dataItem *PL, int limit)
{
    FILE *f = fopen("data/cidades.csv", "r");
}

float CalcDis(gps local){
    return(sqrt(pow(local.la - (local.la+1), 2) + pow(local.lo - (local.lo+1),2)));
}
