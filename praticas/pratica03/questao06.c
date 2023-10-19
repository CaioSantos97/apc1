/*
Faça um programa em C que liste todos os múltiplos de 3, entre 1 e 100
  */

#include <stdio.h>

int main () {
  int numero = 0;

  printf("Etre com um numero entre 1 e 100: ");
  int leu_certo = scanf("%i", &numero);

  printf("Os multiplos de %i entre 1 e 100", numero);
  for (int i=numero; i<101; i = i + numero) {
    printf("%i, ", i);
  }
  
  // for(int i=1; i<101; i++) {
  // if(i % 3 == 0) {
  // printf("%i, ", i);
  // }
  // }
  // printf("\n");
  
  return 0;
  }