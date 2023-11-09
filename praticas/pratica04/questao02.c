/*Faça um programa em C que leia as notas de 10 alunos, calcule a média da turma
 * e contabilize quantos alunos estão com a nota acima da média.
 */

#include <stdio.h>

int main() {
  float notas[10];
  float soma = 0.0f;
  float media = 0.0f;
  int qtde_acima_da_media = 0;

  for (int i = 0; i < 10; i++) {
    printf("Digite a nota do aluno %d: ", i + 1);
    int deu_certo = scanf("%f", &notas[i]);
    soma = soma + notas[i];
  }

  media = soma / 10; 
  for (int i = 0; i < 10; i++) {
    printf("%.1f, ", notas[i]);
    if (notas[i] > media) {
      qtde_acima_da_media++;
    }
  }
  printf("\n");
  printf("\nA média da turma foi %.1f e %i alunos ficaram acima dela", media,
         qtde_acima_da_media);

  return 0;
}