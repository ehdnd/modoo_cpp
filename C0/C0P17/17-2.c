#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile {
  char name[20];  // 이름을 저장할 배열 멤버
  int age;
  double height;
  char* intro;  // 자기소개를 위한 포인터
};

int main() {
  struct profile yuni;

  strcpy(yuni.name, "서하윤");
  yuni.age = 17;
  yuni.height = 164.5;

  yuni.intro = (char*)malloc(80);  // 자기소개 저장할 공간 동적할당 필수
  printf("자기소개 입력: ");
  gets(yuni.intro);  // 할당한 공간에 자기소개 입력

  printf("이름: %s\n", yuni.name);
  printf("나이: %d\n", yuni.age);
  printf("키: %.1lf\n", yuni.height);
  printf("자기소개: %s\n", yuni.intro);
  free(yuni.intro);

  return 0;
}