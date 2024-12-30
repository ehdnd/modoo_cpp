#include <stdio.h>

// 열거형 변수에 저장가능한 기호화된 정수
enum season { SPRING, SUMMER, FALL, WINTER };  // 열거형 선언

int main() {
  enum season ss;
  char* pc = NULL;

  ss = SPRING;
  switch (ss) {
    case SPRING:
      pc = "inline";
      break;
    case SUMMER:
      pc = "swimming";
      break;
    case FALL:
      pc = "trip";
      break;
    case WINTER:
      pc = "skiing";
      break;
    default:
      break;
  }
  printf("나의 레저 활동: %s\n", pc);

  return 0;
}