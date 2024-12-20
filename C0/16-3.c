#include <stdio.h>
#include <stdlib.h>

int main() {
  int *pi;
  int size = 5;
  int count = 0;
  int num;
  int i;

  pi = (int *)calloc(size, sizeof(int));  // 5개의 저장공간 할당
  while (1) {
    printf("양수 입력: ");
    scanf("%d", &num);
    if (num <= 0) break;
    if (count == size) {  // 저장공간을 모두 사용하면
      size += 5;
      pi = (int *)realloc(pi, size * sizeof(int));  // 크기를 늘려서 재할당
    }
    pi[count++] = num;
  }
  for (i = 0; i < count; i++) printf("%5d", pi[i]);  // 출력

  free(pi);  // 동적 할당 공간 반납
  return 0;
}