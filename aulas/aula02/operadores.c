#include <stdio.h>

int main() {
  // operador de atribuicao
  int valor = 10;
  valor = 20;
  
  // operadores aritméticos + - * /
  int soma = 10 + 2;
  int subtracao = 10 - 2;
  int multiplicacao = 10 * 2;
  int divisao = 10 / 2;
  int resto = 10 % 2;

  // operadores incremento e decremento
  int pre_incremento = ++soma; // soma + 1
  int pre_decremento = --soma; // soma - 1
  int pos_incremento = soma++; // soma + 1
  int pos_decremento = soma--; // soma - 1

  // operadores relacionais
  int menor_que = 0 < 1;
  int menor_igual = 0 <= 1;
  int maior_que = 0 > 1;
  int maior_igual = 0 >= 1;
  int igual = 0 == 1;
  int diferente = 0 != 1;

  // operadores logicos
  int e = 0 < 1 && 1 < 10; // 0 < 1 < 10 (na programação isso não funciona)
  int ou = 0 < 1 || 1 > 10; // 0 < 1, 1 > 10
  int nao = !0; // !0 = 1, !1 = 0

  return 0;
}