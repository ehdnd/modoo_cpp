#include <stdio.h>

void func();

int main() {
  printf("컴파일 날짜와 시간: %s, %s\n\n", __DATE__, __TIME__);
  printf("파일명: %s\n", __FILE__);
  printf("함수명: %s\n", __FUNCTION__);
  printf("행번호: %d\n", __LINE__);

// 매크로명 __FILE__ 과 __LINE__ 변경 가능
#line 100 "macro.c"
  func();

  return 0;
}

void func() {
  printf("\n");
  printf("파일명: %s\n", __FILE__);
  printf("함수명: %s\n", __FUNCTION__);
  printf("행번호: %d\n", __LINE__);
}