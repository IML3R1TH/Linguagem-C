#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char dado1[50], dado2[50], dado3[50];
    system("color 0a");

        printf("Em prol do ministerio e a pedido de instituições de ensino, esse algoritmo foi criado com intuito de aperfeçoar o conhecimento\nesse programa recebe a extrutura do animal/inseto(vertebrados ou nao)\n");
        printf("Para saber o tipo de animal, digite oque se pede\n");
        printf("vertebrado ou invertebrado?");
            scanf("%[^\n]s", dado1);
            getchar();
        printf("\nave, mamifero, inseto ou anelideo?");
            scanf("%[^\n]s", dado2);
            getchar();
        printf("\ncarnivoro, onivoro, herbivoro ou hematofago?");
            scanf("%[^\n]s", dado3);
            getchar();

            if (strcmp(dado1, "vertebrado")==0){
                if (strcmp(dado2, "ave")==0){
                    if (strcmp(dado3, "carnivoro")==0){
                        printf("As informações recebidas foram: %s, %s e %S um exemplo desse tipo de animal é a Aguia!\nA águia é conhecida em toda terra como a rainha das aves,\nela é a ave mais forte que existe na terra,\npodendo conduzir em voo animais pequenos e até mesmo uma criança,\ntamanha sua resistência.\n... Ela é a ave que voa mais alto,\nsomente igualada em capacidade de voo pelo condor.\n\n", dado1, dado2, dado3);
                    }
                        else if (strcmp(dado3, "onivoro")==0){
                            printf("As informações recebidas foram: %s, %s e %S um exemplo desse tipo de animal é a Pomba!\nAs pombas têm corpo roliço, pescoço curto, cabeça pequena e asas longas. \nElas podem medir de 15 a 84 centímetros de comprimento. \nA maioria é cinza, marrom, preta ou branca. \nElas conseguem voar por longas distâncias.\n\n", dado1, dado2, dado3);
                        }
                    
                }
                            else if (strcmp(dado2, "mamifero")==0){
                                    if (strcmp(dado3, "onivoro")==0){
                                        printf("As informações recebidas foram: %s, %s e %S um exemplo desse tipo de animal é o Homem!\n\n", dado1, dado2, dado3);
                                        printf("Homo sapiens é o nome dado à espécie dos seres humanos, \nde acordo com a classificação taxonômica. Esta é uma expressão latina que significa literalmente \n“homem sábio” ou “homem que sabe”.\nEstima-se que os primeiros Homo sapiens tenham aparecido entre aproximadamente 300 mil e 100 mil anos atrás, \nna atual região do leste africano.A principal característica que marca o Homo sapiens é a sua capacidade de pensar e raciocinar, \nqualidade esta que é única entre os seres desta espécie. Além disso, o Homo sapiens é conhecido por suas complexas estruturas sociais e sistemas de comunicação.\n\n");
                                    }
                                        else if (strcmp(dado3, "herbivoro")==0){
                                        printf("As informações recebidas foram: %s, %s e %S um exemplo desse tipo de animal é a Vaca!\na vaca é um mamífero ruminante de porte médio e cuja pelagem é curta. \nA vaca é um exemplo de bovino domesticado e se caracteriza também por contar com cascos e apenas dois dedos em cada pata. \n No caso de animais como a vaca os dedos podem ser chamados de dígitos\n\n", dado1, dado2, dado3);
                                        }
                                
                            }
                
            }
                                            else if (strcmp(dado1, "invertebrado")==0){
                                                    if (strcmp(dado2,"inseto")==0){
                                                        if (strcmp(dado3, "hematofago")==0){
                                                            printf("As informações recebidas foram: %s, %s e %S um exemplo desse tipo de animal é a Pulga!\n A ordem Siphonaptera é representada pelas pulgas, \npequenos insetos de coloração escura que não voam. \nSão parasitas externos, que na fase adulta se alimentam majoritariamente do sangue de mamíferos, \nembora algumas espécies tenham aves como hospedeiro.\n\n", dado1, dado2, dado3);
                                                        }
                                                            else if (strcmp(dado3, "herbivoro")==0){
                                                            printf("As informações recebidas foram: %s, %s e %S um exemplo desse tipo de animal é a Lagarta!\nNa linguagem popular, lagarta é o nome para o primeiro estágio larval dos insetos da ordem dos Lepidoptera. \nAs lagartas da maioria das espécies são herbívoras, \nmas não todas; algumas são insectívoras, até mesmo canibais.\n\n", dado1, dado2, dado3);
                                                            }
                                                        
                                                        
                                                    }
                                                        else if (strcmp(dado2, "anelideo")==0){
                                                                if (strcmp(dado3, "hematofago")==0){
                                                                    printf("As informações recebidas foram: %s, %s e %S um exemplo desse tipo de animal é Sanguessuga!\nUma sanguessuga é um anelídeo da classe ou infraclasse Hirudinea que se alimenta geralmente do sangue de outros animais, \nembora muitas sanguessugas sejam predadoras carnívoras e não hematófagas. \nSão animais hermafroditas, não possuem cerdas e possuem ventosas para sua fixação.\n\n", dado1, dado2, dado3);
                                                                }
                                                                    else if (strcmp(dado3, "onivoro")==0){
                                                                        printf("As informações recebidas foram: %s, %s e %S um exemplo desse tipo de animal é Minhoca!\nAs minhocas são animais anelídeos, da subclasse Oligochaeta, de simetria bilateral, recobertos por uma fina cutícula pigmentada. \nSeu corpo cilíndrico é segmentado interna e externamente, mas os dois primeiros segmentos não são identificados externamente.\n\n", dado1, dado2, dado3);
                                                                    }
                                                            
                                                            
                                                        }
                                                    
                                                    
                                            }
                                                                            else{
                                                                                    printf("Os dados %s, %s e %s não coincidem com nenhum exemplo extra de animal cadastrado no sistema!![internal error]!!\n\n", dado1, dado2, dado3);
                                                                                }
            printf("Obrigado por usar o sistema VitorInutilidades.org.US!\n\n\a");                                                                     
                                                                            
                                    
    
    
    system("pause");
    return 0;
}