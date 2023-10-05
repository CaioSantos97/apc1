/*
Faça um programa em C que determine se um número inteiro lido é par ou ímpar.
*/

#include <stdio.h> 

int main() {
  int numero = 0;

  printf("entre com um numero inteiro: ");
  scanf("%i", &numero);

  int numero_eh_divisivel_por_2 = numero % 2 == 0;

  if (numero_eh_divisivel_por_2) { 
    printf("o numero %i é par!\n", numero);
  }else {
    printf("o numero %i é impar!\n", numero);
  }
  
  //int numeor_nao_eh_divisivel_por_2 = numero % 2 != 0;

  //if (numeor_nao_eh_divisivel_por_2) {
  //  printf("o numero %i é impar!\n", numero);
  //}
  
  return 0;
}