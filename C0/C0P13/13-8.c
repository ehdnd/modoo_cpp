// 정적 지역 변수와 전역 변수는 주소를 반환하여 호출하는 함수에서 사용가능
// 주소를 반화항 두 정수의 합 계산

#include <stdio.h>

int* sum(int a, int b) {
  static int res;
  res = a + b;
  return &res;
}

int main() {
  int* resp;  // result pointer
  resp = sum(10, 20);
  printf("두 정수의 합: %d\n", *resp);
  return 0;
}