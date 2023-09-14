/* 
Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
  */

#include <stdio.h>
#include <math.h>

int main() {
  
  int valor_a = -1;
  int valor_b = 2;
  int valor_c = 3;
  double delta = pow(valor_b, 2) - 4 * valor_a * valor_c;
  double raiz1 = ( -valor_b + sqrt(delta)) / 2 * valor_a;
  double raiz2 = ( -valor_b - sqrt(delta)) / 2 * valor_a;

  printf ("As raizes da equação %dX ^2 %dX %d são %.2f e %.2f\n", valor_a, valor_b, valor_c, raiz1, raiz2);
  
  return 0;
}