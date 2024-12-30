// 명령행 인수를 프로그램의 main 함수로 넘기자
// 빌드 후 실행

// ./build./16-6 first_arg second_arg 실행

#include <stdio.h>

int main(int argc, char** argv) {
  int i;
  for (i = 0; i < argc; i++) printf("%s\n", argv[i]);
  return 0;
}