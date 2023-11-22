/* Faça um programa em C que leia nome e telefone de 10 contatos, e depois imprima todos os contatos no formato "nome - (telefone)". */

#include <stdio.h>

int main(){
  struct contato_t{
    char nome[41];
    int telefone;
  };

  struct contato_t contatos[10];

  for(int i=0; i<10; i++) {
    printf("O contato %i\n", i + 1);
    printf("Entre com o nome: ");
    int ok = scanf("%[^\n]s", contatos[i].nome);
    getchar();
    printf("Entre com o telefone: ");
    ok = scanf("%i", &contatos[i].telefone);
    getchar();
  }

  printf("Lista de Contatos\n");
  for(int i=0; i<0; i++) {
    printf("%-40s (%9i)\n", contatos[i].nome, contatos[i].telefone);
  }
  // strcpy(contato[0].nome, "Caioba" );
  // contato[0].telefone = 777777;

  // struct contato_t contatos[10];
  // strcpy(contatos[1].nome, "Vampeta" );
  // contatos[1].telefone = 888888;

  return 0;
}