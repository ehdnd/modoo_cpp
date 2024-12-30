#include <stdio.h>

struct profile {
  int age;
  double height;
};

struct student {
  struct profile pf;  // profile 구조체를 멤버로 사용
  int id;
  double grade;
};

int main() {
  struct student jang;

  jang.pf.age = 21;
  jang.pf.height = 199.9;
  jang.id = 315;
  jang.grade = 5.5;

  printf("나이: %d\n", jang.pf.age);
  printf("키: %.1lf\n", jang.pf.height);
  printf("학번: %d\n", jang.id);
  printf("학점: %.1lf\n", jang.grade);

  return 0;
}