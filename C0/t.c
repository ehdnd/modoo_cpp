#include <stdio.h>

int main() {
  char mark[5][5] = {0};
  int i, j;
  for (i = 0; i < 5; i++)
    for (j = 0; j < 5; j++)
      if (i + j == 4) mark[i][j] = 'X';
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++)
      (i + j == 4) ? printf("%c", mark[i][j]) : printf("O");
    printf("\n");
  }
}
