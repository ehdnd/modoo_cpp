#include <stdio.h>

int main() {
  int score[2][3][4] = {
      {{1, 2, 3, 4}, {11, 22, 33, 44}, {111, 222, 333, 444}},
      {{10, 20, 30, 40}, {100, 200, 300, 400}, {1000, 2000, 3000, 4000}}};

  int i, j, k;

  for (i = 0; i < 2; i++) {
    printf("%d반 점수...\n", i);
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 4; k++) printf("%5d", score[i][j][k]);
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}