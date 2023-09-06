/*
faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + pis/pasep) x preço inicial). Considere ICMS igual a 17%, cofins igual a 7,6% e PIS/PASEP igual a 1,65%.
  */ 

#include <stdio.h>

int main() {
  float preco_produto = 100.0f;
  
  float valor_icms = preco_produto * 0.17f;
  float valor_cofins = preco_produto * 0.076f;
  float valor_pispasep = preco_produto * 0.0165f;

  float preco_final = (1 + 0.17f + 0.076f + 0.0165f) * preco_produto; 

  printf("preco final é %.2f\n", preco_final);
  printf("o valor do icms é %.2f\n", valor_icms);
  printf("o valor do cofins é %.2f\n", valor_cofins);
  printf("o valor do pispasep é %.2f\n", valor_pispasep);

  return 0;
}