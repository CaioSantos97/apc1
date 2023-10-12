/*
Faça um programa em C que imprima um qualitativo associado a uma nota lida
conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 =
Ótimo, e imprima Nota inválida nos demais casos.
  */

#include <stdio.h>

int main() {

  int valor_da_nota = 0;

  printf("Entre com o Valor da Nota:");

  int leu_certo = scanf("%i", &valor_da_nota);

  if (leu_certo) {
    if (valor_da_nota == 5) {
      printf("Nota ótima\n");
    } else if (valor_da_nota == 4) {
      printf("Nota boa\n");
    } else if (valor_da_nota == 3) {
      printf("Nota suficiente\n");
    } else if (valor_da_nota == 2) {
      printf("Nota Insuficiente\n");
    } else if (valor_da_nota == 1) {
      printf("Nota Ruim\n");
    } else {
      printf("Nota Inválida\n");
    }
  } else {
    printf("erro ao ler. Tente Novamente\n");
  }
  return 0;
}