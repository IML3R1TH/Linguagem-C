#include <stdio.h>
#include <time.h>

int fibonacci(int n) {
  int x;
  if (n == 1||n == 2){
    return(1);
  }
  x = fibonacci(n-1) + fibonacci(n-2);
  return(x);
}

int contFib(int n, int k){
  int i, fib, aux=0, aux2=0; 
  clock_t t1,t2;
  t1 = clock();
  t2 = clock();
  for (i = 1; i <=n; i++) {
      fib = fibonacci(i);
      printf("%d ", fibonacci(i));
      aux++;
      if(i < k){
        aux2++;
      }
      else if(i == k){
        aux2++;
        t2 = clock()-t2;
      }
    }
    t1 = clock()-t1;
    printf("Enquanto o n foi contado %d vezes, k foi contado %d vezes", aux, aux2);
    printf("\nClock para n = %f\n Clock para k = %f", ((float)t1/CLOCKS_PER_SEC), ((float)t2/CLOCKS_PER_SEC));
  }  

int main() {
  int n,k;
  
  printf("Digite o numero de termos da sequencia n: ");
  scanf("%d", &n);
  
  while(n <= 0) {
    printf("Numero abaixo de 1. Digite o numero de termos da sequencia: ");
    scanf("%d", &n);
  }

  printf("Digite o numero de termos da sequencia k: ");
  scanf("%d", &k);

  while (k>= n || k==0) {
    printf("Numero abaixo de 1 e maior/igual ao anterior. Digite o numero de termos da sequencia: ");
    scanf("%d", &k);
  }
  contFib(n,k);
  printf("\n");
  return(0);
}