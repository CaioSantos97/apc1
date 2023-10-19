/*
Faça um programa em C que calcule o fatorial de um número inteiro.
n! = N * n-1 * n-2 * n-3 ... * 3 * 2 * 1
  */

#include <stdio.h>

int main () {
  int numero = 0;
  long int fatorial = 1;

  printf("entre com um numero > 0:");
  int leu_certo = scanf("%i", &numero);

  printf("Fatorial de %i\n", numero);
  for(int i=0; i<100; i++) {
    fatorial = fatorial * (numero - i);
  }
    printf("O Fatorial de %i eh %li\n", numero, fatorial);

  return 0;
}