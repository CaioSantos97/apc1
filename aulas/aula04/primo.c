#include <stdio.h>

int main() {
  int numero = 0;

  printf("Entre com um numero inteiro: ");
  int leu_certo = scanf("%i", &numero);

  int qtde_divisores = 0;

  for(int i=0; i<numero; i++) {
    if (numero % (i+1) == 0) {
      qtde_divisores++;
    }
  }

  if (qtde_divisores >2) {
    printf("O numero %i não é primo!\n", numero);
  } else {
    printf("O numero %i é primo!\n", numero);
  }
  
  return 0;
}