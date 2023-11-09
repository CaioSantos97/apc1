/*
Faça um programa em C que preencha uma matriz com 10 números, depois leia um
número e localize a posição dele na matriz.*/

#include <stdio.h>

int main() {
  int numeros[10] = {5, 4, 2, 3, 1, 6, 8, 7, 9};

  int numero = 0;

  printf("Entre com um número: ");
  int deu_certo = scanf("%i", &numero);

  int posicao = -1;

  for (int i = 0; i < 10; i++) {
    if (numero == numeros[i]) {
      posicao = i;
      break;
      printf("O número %i está na posição %i da matriz.\n", numero, i);
    }
  }

  if (posicao < 0) {
    printf("Não achei o número %i na matriz.\n", numero);
  } else {
    printf("Achei o número %i na posição %i da matriz.\n", numero, posicao);
  }
  return 0;
}