/* 
Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
*/
#include <stdio.h>
#include <math.h>

int main() {
  int valor_em_giga = 10;

  double valor_em_bytes = valor_em_giga * pow(1024, 3);

  printf("o valor %d em gigabytes equivale a %f bytes\n", valor_em_giga, valor_em_bytes); 

  return 0;
}