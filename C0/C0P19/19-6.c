#include <stdio.h>
#define VER 7  // 치환될 부분이 있는 매크로명 정의
#define BIT16  // 치환될 부분이 없는 매크로명 정의

int main() {
  int max;

// 조건부 컴파일
#if VER >= 6
  printf("버전 %d입니다.\n", VER);
#endif

#ifdef BIT16
  max = 32767;
#else
  max = 214783647;
#endif

  printf("int형 변수의 최댓값: %d\n", max);

  return 0;
}