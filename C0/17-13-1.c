#include <stdio.h>

// 재정의 전의 자료형 사용필여 없다면..
// 형 선언과 동시에 재정의
typedef struct {
  int num;
  double grade;
} Student;

// 기본 자료형도 재정의 가능
typedef unsigned int nbyte;

void print_data(Student* ps) {
  printf("학번: %d\n", ps->num);
  printf("학점: %.1lf\n", ps->grade);
}

int main() {
  Student s1 = {315, 4.4};
  print_data(&s1);
  return 0;
}