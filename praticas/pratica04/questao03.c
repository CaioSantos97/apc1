/*Faça um programa em C que leia a quantidade e o preço de 10 produtos de um
 * nota fiscal e imprima o valor total de cada produto e o valor total da nota*/

#include <stdio.h>

int main() {

  float produtos[10][3];
  float total = 0.0f;

  for (int i = 0; i < 10; i++) {
    printf("Digite a quantidade do produto%i: ", i + 1);
    int deu_certo = scanf("%f", &produtos[i][0]);
    printf("Entre com o preço do produto %i: ", i + 1);
    deu_certo = scanf("%f", &produtos[i][1]);
    produtos[i][2] = produtos[i][0] * produtos[i][1];
    total = total + produtos[i][2];
  }
  printf("Qtde  Preço  Total Item\n");
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%8.2f", produtos[i][j]);
    }
    printf("\n");
  }
  printf("O total da NF é R$%5.2f\n", total);
  return 0;
}