#include <stdio.h>

int main() {
  int numero = 0;
  
  printf("Entre com um numero entre 1 e 100: ");
  int leu_certo = scanf("%i", &numero);
  
    printf("Multiplos de %i emtre 1 e 100:\n", numero);
  
  for(int i=0; i < 101; i = i + numero) {
    if (i==0) continue;
    printf("%i, ", i);
  }
printf("\n");

return 0;
}