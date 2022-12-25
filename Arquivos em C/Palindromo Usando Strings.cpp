#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 200


//A Função Palindromo, vai calcular o tamanho da STRING n usando strlen(entrada); O uso da STRLEN: Função strlen: Esta função irá retornar a quantidade de caracteres existentes em uma string, não considerando o caractere NULL na contagem dos caracteres!
int palindromo(char *entrada){
//O Uso do Static: O uso deste modificador promove ganho de performance no código, porém pode dificultar a manutenção, um motivo pelos quais os programas com static são considerados menos flexíveis. Tornando mais simples a verificação!
    static int aux, calcula=0, tamanho=strlen(entrada);
    if(aux<tamanho/2){
         if(entrada[aux]==entrada[tamanho-aux-1])//se o elemento em entrada[aux] estiver igual ao de entrada[tamanho - aux - 1] as variaveis calcula e aux serão incrementadas!
    	    calcula++;
    	    aux++;

    	palindromo(entrada);//a função chama a si mesma 
	}else{
		if(calcula==aux)
        return 1;
        else
        return 0;
	}	
}
//A função main Vai chamar a função de verificação PALINDROMO  para fazer a verificação.
int main(){
system("color a");
char entrada[MAX_SIZE];
    printf("# Esse Programa Recebe uma Frase Como Parametro, e A Verifica se eh ou Nao um PALINDROMO!\nDEFINICAO: diz-se de ou frase ou palavra que se pode ler, indiferentemente, da esquerda para a direita ou vice-versa.\n\nInforme a Frase: ");
    scanf(" %[^\n]s", entrada);
        if (palindromo(entrada)){
            printf("\nEh um palindromo!\n");
        }else printf("Nao Eh Palindromo!\n");
system("pause");
return 0;
}
