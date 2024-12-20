// 함수 포인터를 사용한 함수 호출
#include <stdio.h>

int sum(int a, int b) { return (a + b); }

int main() {
  int (*fp)(int, int);  // 함수 포인터 선언
  int res, res1;

  fp = sum;          // 함수명을 함수 포인터에 저장
  res = fp(10, 20);  //
  res1 = (*sum)(10, 20);
  printf("res: %d\n", res);
  printf("res1: %d\n", res1);
  return 0;
}