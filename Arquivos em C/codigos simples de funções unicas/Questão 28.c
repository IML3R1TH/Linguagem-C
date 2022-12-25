#include <stdio.h>
#include <stdlib.h>

int main(){
    float import = 780.000, sub1, sub2, sub3 = 171;
    sub1 = import * 0.46;
    sub2 = import * 0.32;
    
    printf("O ganhador I recebeu \n%2.f mil\n O Ganhador II recebeu \n%2.f mil\n E o III vencedor recebeu \n%2.f mil\n", sub1, sub2, sub3);
    system("pause");
    return 0;
}