#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1, n2, n3, n4, m;
    printf("Digite 4 valores para o programa fazer sua soma aritmetica!\n");
    scanf("%f \n%f \n%f \n%f", &n1, &n2, &n3, &n4);

    m = (n1 + n2 + n3 + n4)/4.0;

    printf("A media dos numeros eh:\n%.2f\n", m);
    
    system("pause");
    return 0;
}