#include <stdio.h> 
#include <stdlib.h>

struct twitch {
      int dias_da_semana;
      float doacoes_ao_streamer;
      int horas_de_stream;
      int qttd_de_pessoas_assistindo;  
};


int main(){
    struct twitch t[4];
    system("color 0a");
    printf("Caro usuario, essa plataforma compara dados e informa qual \nstreamer teve o melhor desenvolvimento durante o mes!\n Para iniciar o comparativo, Informe:\nQuantos dias eles fez live:\n");
    printf("Quantidade de donate(dinheiro doado pela comunidade que o assistiu):\nQuantas horas os streamer's se manteram ao vivo:\n e a quantidade de pessoas que estavam o assistindo!\n\n");

        int i;
        for ( i = 0; i < 4; i++){
            scanf("%i %f %i %i", &t[i].dias_da_semana, &t[i].doacoes_ao_streamer, &t[i].horas_de_stream, &t[i].qttd_de_pessoas_assistindo);
        }
            int iDesempenho = 0;
            for (i = 1; i < 4; i++){
                if (t[i].qttd_de_pessoas_assistindo > t[iDesempenho].qttd_de_pessoas_assistindo){
                    iDesempenho = i;    
                }
                
            }
            printf("O Streamer que saiu com o melhor desempenho foi o %i\n", iDesempenho + 1);

            printf("Obrigado por usar VitorInutilidades.SA\n\n\n\a");

    system("pause");
    return 0;
}