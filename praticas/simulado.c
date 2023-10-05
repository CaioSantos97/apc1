#include <stdio.h>
#include <math.h>

int main () {

  int x = 10;
  {
    int y = x * 2;
    {
      int x = 1;
      y = x + 1;
      x++;
      printf("%d, %d", x, y);
    }
  }
  return 0;
  
}