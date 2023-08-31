/*
Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um númeoro inteiro e a constante PI igual a 3,1416.
*/

#include <stdio.h>

int main() {
  int raio = 5;
  float PI = 3.1416;

  float perimetro = 2 * PI * raio;

  printf ("perimetro = %.2f", perimetro);
  
  return 0;
}