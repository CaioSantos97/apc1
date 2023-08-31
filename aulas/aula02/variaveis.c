#include <stdio.h>

int main() {
  // int x;
  int y = 0;
  int z = 10; 
  int x1 = -1;
  int x2 = x1;

  y = 50;
  y = -5;
  
  char caracter; // 1 byte   -128 a 127 'a', '1' ','

  unsigned char caracter_sem_sinal; // 0 a 255

  int i, j;

  short int inteiro_curto; // 2 bytes -32.768 a 32.767
  
  int  inteiro; // 4 bytes  -2.147.483.648 a 2.147.483.647

  lon int inteiro_longo; // 8 bytes -9.223.372.036.854.775.808 a 9.223.372.036.854.775.808

  unsigned short int inteiro_curto_sem_sinal; // 0 a 65535

  unsigned int inteiro_sem_sinal; // 0 a 4.294.967.295

  unsigned long int inteiro_longo_sem_sinal; // 0 a 18.446.744.073.709.551.615

  float ponto_flutuante; // 4 bytes   0.123456f

  double duplo; // 8 bytes   0.1234567890123456

  long double duplo_longo; // 16 bytes 

  void nada; // 1 byte 
  
  return 0;
}