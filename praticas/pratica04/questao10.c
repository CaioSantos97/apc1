/*Faça um programa em C que leia o número de mês, valide o número com os meses definidos por uma enumeração e imprima o nome do mês.*/

#include <stdio.h>

int main() {
  enum meses_e {jan=1, fev, mar, abr, mai, jun, jul, ago, set, out, nov, dez};

  char nomes[12][10] = {"janeiro", "fevereiro", "Março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

  int mes;
  printf("Entre com o numero do mês: ");
  int ok = scanf("%i", &mes);

  switch(mes) {
    case jan:
    case fev:
    case mar:
    case abr:
    case mai:
    case jun:
    case jul:
    case ago:
    case set:
    case out:
    case nov:
    case dez: printf("O mês escolhido foi %s\n", nomes[mes-1]); break;
    default: printf("Numero de mês invalido\n"); break;
  }

  return 0;
}