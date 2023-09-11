#include <stdio.h>

#define ICMS 0.17f
#define CONFINS 0.076f
#define PIS_PASEP 0.165f

int main() {
  float preco_inicial = 100.0f;

  float valor_icms = preco_inicial * 0.17f;
  float valor_cofins = preco_inicial * 0.076f;
  float valor_pispasep = preco_inicial * 0.165f

  float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;

  printf("O preco inicial é %f\n", preco_inicial);
  printf("O valor ICMS é %f\n", valor_icms);
  printf("O valor COFINS é %f\n", valor_cofins);
  printf("O valor PIS_PASEP é %f\n", preco_inicial);
  printf("O preco final é %f\n", preco_final);

  return 0;
}