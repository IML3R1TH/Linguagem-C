#include <stdio.h>
#include <stdlib.h>
int main(){
    float CJ, BigSmoke;
    printf("Digite dois numeros reais!\n");

    scanf("%f %f", &CJ, &BigSmoke);

    printf("Seus numeros foram:\n%f \n%f\n\n", BigSmoke, CJ);

    system("pause");
    return 0;
}