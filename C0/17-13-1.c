#include <stdio.h>

typedef struct {
  int num;
  double grade;
} Student;

void print_data(Student* ps) {
  printf("학번: %d\n", ps->num);
  printf("학점: %.1lf\n", ps->grade);
}

int main() {
  Student s1 = {315, 4.4};
  print_data(&s1);
  return 0;
}