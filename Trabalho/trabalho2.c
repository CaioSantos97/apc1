#include <stdio.h>
#include <string.h>

typedef struct {
  char time1[20];
  char time2[20];
  int gols_time1;
  int gols_time2;
} Jogo;

int determinarVencedor(Jogo jogo) {
  if (jogo.gols_time1 > jogo.gols_time2) {
    return 1;
  } else if (jogo.gols_time1 < jogo.gols_time2) {
    return 2;
  } else {
    return 0;
  }
}

int main() {

  char times[16][20];
  char continuar;

  do {

    Jogo oitavas[8];
    printf("OITAVAS DE FINAL\n");

    for (int i = 0; i < 8; i++) {
      printf("Jogo %d: Digite o nome do time 1: ", i + 1);
      scanf("%s", oitavas[i].time1);

      printf("Digite o nome do time 2: ");
      scanf("%s", oitavas[i].time2);

      printf("Digite o número de gols de %s: ", oitavas[i].time1);
      scanf("%d", &oitavas[i].gols_time1);

      printf("Digite o número de gols de %s: ", oitavas[i].time2);
      scanf("%d", &oitavas[i].gols_time2);
    }

    Jogo quartas[4];
    printf("\nQUARTAS DE FINAL\n");

    for (int i = 0; i < 8; i += 2) {
      printf("Jogo %d: Vencedor %s vs Vencedor %s\n", i / 2 + 1,
             oitavas[i].time1, oitavas[i + 1].time1);

      printf("Digite o número de gols de Vencedor %s: ", oitavas[i].time1);
      scanf("%d", &quartas[i / 2].gols_time1);

      printf("Digite o número de gols de Vencedor %s: ", oitavas[i + 1].time1);
      scanf("%d", &quartas[i / 2].gols_time2);

      strcpy(quartas[i / 2].time1, oitavas[i].time1);
      strcpy(quartas[i / 2].time2, oitavas[i + 1].time1);
    }

    Jogo semiFinais[2];
    printf("\nSEMI-FINAIS\n");

    for (int i = 0; i < 4; i += 2) {
      printf("Jogo %d: Vencedor %s vs Vencedor %s\n", i / 2 + 1,
             quartas[i].time1, quartas[i + 1].time1);

      printf("Digite o número de gols de Vencedor %s: ", quartas[i].time1);
      scanf("%d", &semiFinais[i / 2].gols_time1);

      printf("Digite o número de gols de Vencedor %s: ", quartas[i + 1].time1);
      scanf("%d", &semiFinais[i / 2].gols_time2);

      strcpy(semiFinais[i / 2].time1, quartas[i].time1);
      strcpy(semiFinais[i / 2].time2, quartas[i + 1].time1);
    }

    Jogo final;
    printf("\nFINAL\n");

    printf("Final: Vencedor %s vs Vencedor %s\n", semiFinais[0].time1,
           semiFinais[1].time1);

    printf("Digite o número de gols de Vencedor %s: ", semiFinais[0].time1);
    scanf("%d", &final.gols_time1);

    printf("Digite o número de gols de Vencedor %s: ", semiFinais[1].time1);
    scanf("%d", &final.gols_time2);

    printf("\nRESULTADO FINAL\n");

    int vencedorFinal = determinarVencedor(final);

    if (vencedorFinal == 1) {
      printf("O vencedor do torneio é: %s\n", semiFinais[0].time1);
    } else if (vencedorFinal == 2) {
      printf("O vencedor do torneio é: %s\n", semiFinais[1].time1);
    } else {
      printf("A final irá para a prorrogação!\n");
    }

    printf("Deseja recomeçar? (S/N): ");
    scanf(" %c", &continuar);

  } while (continuar == 'S' || continuar == 's');

  return 0;
}
