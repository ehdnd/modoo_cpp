#include <stdio.h>
#include <stdlib.h>

int main() {
  int i;
  int** matrix = (int**)malloc(4 * sizeof(int*));
  for (i = 0; i < 4; i++) {
    matrix[i] = (int*)malloc(sizeof(int));
  }
  for (i = 0; i < 4; i++) free(matrix[i]);
  free(matrix);

  return 0;
}