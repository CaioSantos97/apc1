/* 
faça um programa em c que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.
  */

#include <stdio.h>

int main() {
  int valor_da_base = 3;
  int valor_da_altura = 5;
  
  float resultado = valor_da_base * valor_da_altura / 2.0f;

  printf ("resultado = %.2f", resultado);

  return 0;
}