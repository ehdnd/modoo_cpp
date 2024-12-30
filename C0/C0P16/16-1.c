#include <stdio.h>
#include <stdlib.h>

int main() {
  int *pi;  // 동적 할당 영역 연결할 포인터 선언
  double *pd;

  pi = (int *)malloc(sizeof(int));  // 메모리 동적할당 후 포인터 연결
  if (pi == NULL) {                 // 실패시 NULL 포인터 반환
    printf("# 메모리 부족\n");
    exit(1);
  }
  pd = (double *)malloc(sizeof(double));
  if (pd == NULL) {
    printf("# 메모리 부족\n");
    exit(1);
  }

  *pi = 10;  // 포인터로 동적할당 영역 사용
  *pd = 3.4;

  printf("정수형으로: %d\n", *pi);
  printf("실수형으로: %.1lf\n", *pd);

  free(pi);
  free(pd);

  return 0;
}