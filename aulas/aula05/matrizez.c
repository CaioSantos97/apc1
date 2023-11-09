#include <stdio.h>

int main() {
  int numeros [10]; //vetor ou array


  numeros[0] = 10;
  numeros[1] = 15;
  numeros[2] = 7;
  numeros[3] = 1;
  numeros[4] = 3;
  numeros[5] = 22;
  numeros[6] = 38;
  numeros[7] = 4;
  numeros[8] = 56;
  numeros[9] = 6;

  for(int i = 0; i < 10; i++){
    printf("%i, ", numeros[i]);
  }

  printf("\n");


  float notas [10][3];

   notas[0][0] = 6.0f; notas [0][1] = 4.0f; notas [0][2] = 2.0f;
   notas[1][0] = 6.0f; notas [1][1] = 4.0f; notas [1][2] = 2.0f;
   notas[2][0] = 6.0f; notas [2][1] = 4.0f; notas [2][2] = 2.0f;
   notas[3][0] = 6.0f; notas [3][1] = 4.0f; notas [3][2] = 2.0f;
   notas[4][0] = 6.0f; notas [4][1] = 4.0f; notas [4][2] = 2.0f;
   notas[5][0] = 6.0f; notas [5][1] = 4.0f; notas [5][2] = 2.0f;
   notas[6][0] = 6.0f; notas [6][1] = 4.0f; notas [6][2] = 2.0f;
   notas[7][0] = 6.0f; notas [7][1] = 4.0f; notas [7][2] = 2.0f;
   notas[8][0] = 6.0f; notas [8][1] = 4.0f; notas [8][2] = 2.0f;
   notas[9][0] = 6.0f; notas [9][1] = 4.0f; notas [9][2] = 2.0f;

  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 3; j++){
       printf("%.1f, ", notas[i][j]);
    }
    printf("\n");
  }

  //   0  1  2
  //0 | 6  4  2
  //1 |
  //2 |
  //3 |
  //4 |
  //5 |
  //6 |
  //7 |
  //8 |
  //9 |
  return 0;
}