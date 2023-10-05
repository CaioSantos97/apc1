/*
Faça um programa em C que calcule o valor do desconto sobre um valor bruto lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%.
  */

#include <stdio.h>

int main() {
  float valor_bruto = 0.0f;
  float valor_desconto = 0.0f;
  
  printf("entre com o valor: ");
  scanf("%f", &valor_bruto);

  if (valor_bruto <= 100.0f) {
    valor_desconto = valor_bruto * 0.01;
  }

  if (valor_bruto > 100.0f && valor_bruto <= 500.0f) {
    valor_desconto = valor_bruto * 0.05f;
  }

  if (valor_bruto > 500.0f) {
    valor_desconto = valor_bruto * 0.1;
  }

  printf("O valor do desconto foi %.2f\n", valor_desconto);
  
  return 0;
}