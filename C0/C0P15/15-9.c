#include <stdio.h>

int main() {
  int a = 10;
  double b = 3.5;
  // 간접 참조 연산 불가, 포인터 연산 불가
  void *vp;

  vp = &a;
  // 사용시 원하는 형태로 변환하여 사용
  printf("a: %d\n", *(int *)vp);

  vp = &b;
  // 단한 연산자 두개 -> 이경우에는 왼쪽부터
  // vp를 (double *)형으로 변환 -> 변수 참조
  printf("b: %.1lf\n", *(double *)vp);

  return 0;
}