/*
faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + pis/pasep) x preço inicial). Considere ICMS igual a 17%, cofins igual a 7,6% e PIS/PASEP igual a 1,65%.
  */ 

#include <stdio.h>

#define ICMS 0.17f
#define COFINS 0.076f
#define PIS_PASEP 0.0165f

int main() {
  float preco_produto = 100.0f;
  
  float valor_icms = preco_produto * ICMS;
  float valor_cofins = preco_produto * COFINS;
  float valor_pispasep = preco_produto * PIS_PASEP;

  float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_produto; 

  printf("preco final é %.2f\n", preco_final);
  printf("o valor do icms é %.2f\n", valor_icms);
  printf("o valor do cofins é %.2f\n", valor_cofins);
  printf("o valor do pispasep é %.2f\n", valor_pispasep);

  return 0;
}