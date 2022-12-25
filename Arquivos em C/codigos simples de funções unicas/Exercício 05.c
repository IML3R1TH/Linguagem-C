#include <stdio.h>
int main (){
    int livros;
    printf("Bem-Vindo aoLablivre");
    printf("\nDigite a quantidade de livros que deseja comprar.\n");
    scanf("%i", &livros);
   if (livros == 1){
       
        printf("\nParabens por comprar 1 livro na LabLivre, com essa compra voce adquriu 5 pontos!\n");
    }
else if(livros == 2){
    printf("\nparabens por ter comprado 2 livros na lablivre, com essa compra voce adquiriu 15 pontos!\n");
}
else if(livros == 3){
    printf("\nparabens por ter comprado 3 livros na lablivre, com essa compra voce adquiriu 30 ponto!\n");
}
else if (livros >= 4){
    printf("\nparabens por ter comprado nosso pacote premium de 4 ou mais livros, com essa compra voce acaba de aquirir 60 pontos.\n");
}
else{
    printf("\n vejo que voce nao fez nenhuma compra... venha faça a sua compra e adquira vantagens em nosso site :D\n");
}
printf("\nObrigado por acessar o nosso site de compras!!!\n");
 system ("pause");
    return(0);
}