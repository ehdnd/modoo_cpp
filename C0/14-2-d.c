#include <stdio.h>

int main() {
  int arr[6][7] = {0};
  int i, j;

  for (i = 1; i < 5; i++) {
    for (j = 1; j < 6; j++) {
      arr[i][j] = (i - 1) * 5 + j;
      arr[i][6] += arr[i][j];
      arr[5][j] += arr[i][j];
      arr[5][6] += arr[i][j];
    }
  }
  printf("%d", arr[5][6]);
}