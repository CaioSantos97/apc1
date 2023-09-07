/*
  Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
*/
#include <stdio.h>

int main() {
  
  long int valor_byte = 1024 * 1024 * 1024; //1GB = 1.073.741.824 bytes 
  int valor_gb = 4;
  long int gb_bytes = valor_gb * valor_byte;
  
  printf("Gigabytes em bytes é, %li\n", gb_bytes); 
  printf("Gigabytes é, %i\n", valor_gb);
  printf("Bytes é, %li\n", valor_byte); 

  return 0;
}