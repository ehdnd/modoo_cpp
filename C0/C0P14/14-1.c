#include <stdio.h>

int main() {
  int score[3][4];
  int total;
  double avg;
  int i, j;

  for (i = 0; i < 3; i++)
    for (j = 0; j < 4; j++) scanf("%d", &score[i][j]);

  for (i = 0; i < 3; i++) {
    total = 0;
    for (j = 0; j < 4; j++) total += score[i][j];

    avg = total / 4.0;
    printf("총점: %d, 평균: %.2lf\n", total, avg);
  }
  return 0;
}