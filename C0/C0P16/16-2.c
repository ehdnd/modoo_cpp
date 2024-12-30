#include <stdio.h>
#include <stdlib.h>

int main() {
  int *pi;
  int i, sum = 0;

  pi = (int *)malloc(5 * sizeof(int));
  if (pi == NULL) {
    printf("메모리 부족\n");
    exit(1);
  }

  printf("5명 나이 입력\n");
  for (i = 0; i < 5; i++) {
    scanf("%d", &pi[i]);
    sum += pi[i];
  }
  printf("평균나이: %.1lf\n", (sum / 5.0));
  free(pi);

  return 0;
}