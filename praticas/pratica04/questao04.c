/*
Faça um programa em C que leia a frase de até 30 caracteres preenchendo uma matriz 6x5 e depois imprima a matriz percorrendo coluna por coluna.
  */
#include <stdio.h>
#include <string.h>

int main() {
  char frase[31];
  char matriz[6][5];

  // memset(frase, 'a', sizeof(frase));//aaaaaaaaaaaaaaaaaaaaaa
  // printf("%s\n", frase);

  // strcpy(frase, "uma frase qualquer");//frase = uma frase qualquer
  // printf("%s\n", frase);

  // strcat(frase, " com ponto");//frase = frase + "com ponto" 
  // printf("%s\n", frase);//uma frase qualquer com ponto
  
  // printf("sao iguais? %d\n", strcmp(frase, "com outra frase"));

  // printf("%li\n", strlen(frase));

  printf("Entre com uma frase: ");
  int ok = scanf("%[^\n]s", frase);

  int k = 0;
  for(int i=0; i<6; i++) {
    for(int j=0; j<5; j++) {
      matriz[i][j] = frase[k];
      k++;
    }
  }

  printf("A frase transposta da matriz: ");
  for(int j=0; j<5; j++) {
    for(int i=0; i<6; i++) {
      printf("%c", matriz[i][j]);
    }
  }

  printf("\n");

  return 0;
}