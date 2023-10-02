#include <stdio.h>

int main() {
  float valor_bruto = 0.0f;

  printf("Entre com o valor bruto: ");
  scanf("%f", &valor_bruto);

  float valor_desconto = 0.0f;

  int valor_bruto_ate_100 = valor_bruto <= 100,0f;

  if(valor_bruto_ate_100) {
    valor_desconto = valor_bruto * 0,01f;
}
  

int valor_bruto_entre_101_e_500 = valor_bruto > 100.0f && valor_bruto <= 500.of;

  if (valor_bruto_entre_101_e_500) {
  valor_desconto = valor_bruto * 0.05f;
}

  int valor_bruto_acima_de_500 = valor_bruto > 500;

   if (valor_bruto_acima_de_500) {
  valor_desconto = valor_bruto * 0.01f;
   }

  printf("O valor do desconto é %.2f\n", valor_desconto);

  return 0;
}