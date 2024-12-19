// 일반 지역 변수 vs 정적 지역 변수
// 결국 선언된 블록 안에서만 사용되는 전역변수

#include <stdio.h>

void auto_func() {
  auto int a = 0;

  a++;
  printf("%d\n", a);
}

void static_func() {
  static int a;
  // 0으로 자동 초기화

  a++;
  printf("%d\n", a);
}

int main() {
  int i;

  printf("일반 지역 변수(auto)를 사용한 함수...\n");
  for (i = 0; i < 3; i++) auto_func();

  printf("정적 지역 변수(static)를 사용한 함수...\n");
  for (i = 0; i < 3; i++) static_func();

  return 0;
}