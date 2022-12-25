#include <stdio.h>
#include <stdlib.h>

int main(){
    float h, m;
    printf("Digite uma area em Metros quadrados(M²), para ser convertido em hectares!\n\n");
    scanf("%f", &m);

    h = m * 0.0001;

    printf("\nA area em hectares eh igual a\n%f\n", h);

system("pause");
return 0;

}