#include <stdio.h>
#include <stdlib.h>
int main() {
  char opcao = 0;

  while (opcao != '0') {
    int deu_certo = system("clear");
    printf("MENU PRINCIPAL\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Fazer Recarga\n");
    printf("3 - Listar Recados\n");
    printf("0 - Sair\n");
    printf("Escolha uma opção => ");
    deu_certo = scanf("%c", &opcao);
    while (getchar() != '\n');

    switch (opcao) {
    case '1':
      printf("O saldo é R$ 10,00\n");
      break;
    case '2':
      printf("Escolha o valor da Recarga\n");
      break;
    case '3':
      printf("Não há recados\n");
      break;
    case '0':
      break;
    default:
      printf("Opção inválida\n");
      break;
    }

    if (opcao != '0') {
      printf("Pressione ENTER para continuar\n");
      getchar();
    }
  }
  return 0;
}