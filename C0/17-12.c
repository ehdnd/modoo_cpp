#include <stdio.h>

struct student {
  int num;
  double grade;
};

// 구조체_이름: struct student, 새_자료형_이름: Student
typedef struct student Student;

void print_data(Student* ps) {
  printf("학번: %d\n", ps->num);
  printf("학점: %.1lf\n", ps->grade);
}

int main() {
  Student s1 = {315, 4.4};
  print_data(&s1);
  return 0;
}