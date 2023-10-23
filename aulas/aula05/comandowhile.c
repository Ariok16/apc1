#include <stdio.h>

int main() {
  int numero = 0;

  printf("Entre com um numero entre 1 e 10:");
  int leu_certo = scanf("%i", &numero);

  while (numero < 1 || numero > 10) {
    getchar();
  printf("Erro ao ler o numero. Tente novamente:");
    leu_certo = scanf("%i", &numero); 
  }

  int i = 0;
  while (i < 10) {
    printf("%i x %i = %i\n", numero, i+1, numero * (i+1));
    i++;
  }
  return 0;
}