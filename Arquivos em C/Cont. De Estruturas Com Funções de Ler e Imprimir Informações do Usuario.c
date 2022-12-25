#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct
{
    char nome_do_streamer[50];
    int qttd_de_seguidores;
    float dinheiro_doado;
    int tempo_de_live;
    int numero_de_visu_simultaneas;
} twitch;

void ler(twitch *t)
{
    printf("Informe a tag do streamer(organizador) que deseja comparar dados!\n");
    scanf("%s", t->nome_do_streamer);
    printf("Informe a quantidade de seguidores que o streamer tem!\n");
    scanf("%i", &t->qttd_de_seguidores);
    printf("Informe a quantidade de dinheiro doado ao streamer(donates)!\n");
    scanf("%f", &t->dinheiro_doado);
    printf("Informe o tempo de live em minutos do streamer!\n");
    scanf("%i", &t->tempo_de_live);
    printf("informe a quantidade de pessoas assistindo o streamer!\n");
    scanf("%i", &t->numero_de_visu_simultaneas);
}

void imprimir(twitch t)
{
    printf("========================================================================\n");
    printf("streamer(organizador): %s\n", t.nome_do_streamer);
    printf("Numero de seguidores: %i\n", t.qttd_de_seguidores);
    printf("Dinheiro doado ao streamer: %f\n", t.dinheiro_doado);
    printf("Tempo de live(em minutos) que o organizador esteve online: %i\n", t.tempo_de_live);
    printf("Numero de pessoas assistindo: %i\n", t.numero_de_visu_simultaneas);
    printf("========================================================================\a\n\n\n");
}

void menu()
{
    printf("<====---===>Welcome/Bem-Vindo<===---===>\nEscolha uma opção:\n");
    printf("1- Informar usuarios!\n2-Mostrar os Resultados da pesquisa!\n3-Sair\n");
    printf("<===========>----===+===----<==========>\n");
}

int main()
{
    system("color 0a");
    setlocale(LC_ALL, "portuguese");
    printf("Olá usuario esse programa armazena e mostra os dados sobre os streamers(organizadores) cadastrados!\n");
    twitch t;
    int op;
    while (op != 3)
    {
        if (op == 1)
        {
            ler(&t);
        }
        else if (op == 2)
        {
            imprimir(t);
        }

        menu();
        scanf("%i", &op);
    }
    printf("Obrigado por usar VitorInutilidades.com\n");

    system("pause");
    return 0;
}