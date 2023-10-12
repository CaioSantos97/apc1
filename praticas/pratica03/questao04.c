/*
Faça um programa em C que leia uma tecla pressionada e determine se ela é uma
letra, um dígito ou um caractere especial.
  */

#include <stdio.h>

int main() {

  char tecla;

  printf("Entre com a Tecla:");

  int leu_certo = scanf("%c", &tecla);

  if (leu_certo) {
    if (tecla >= '0' && tecla <= '9') {
      printf("numeral de 0 a 9\n");
    } else if ((tecla >= 'A' && tecla <= 'Z') ||
               (tecla >= 'a' && tecla <= 'z')) {
      printf("alfabeto\n");
    } else {
      printf("Você pressionou um caracter Espcial");
    }
  }

  return 0;
}