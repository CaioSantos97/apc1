/*
Faça um programa em C que leia uma string e a imprima em maísculo e em minúsculo.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
  char string[61];

  printf("Entre com uma string: ");
  int ok = scanf("%[^\n]s", string);

  char maiusculo[61];
  strcpy(maiusculo, string);
  for(int i=0; i<strlen(maiusculo); i++) {
    maiusculo[i] = toupper(maiusculo[i]);
  }
  
  char minusculo[61];
  strcpy(minusculo, string);
  for(int i=0; i<strlen(minusculo); i++) {
    minusculo[i] = tolower(minusculo[i]);
  }

  printf("A string informada foi %s \n", string);
  printf("A string em maiusculo: %s \n", maiusculo);
  printf("A string em minusculo: %s \n", minusculo);
  
  return 0;
}