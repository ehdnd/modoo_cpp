#include <stdio.h>

struct score {
  int kor;
  int eng;
  int math;
};

int main() {
  struct score yuni = {90, 80, 70};
  struct score *ps = &yuni;

  // .연산자가 *연산자보다 우선순위 높음
  printf("국어: %d\n", (*ps).kor);
  // 간접 멤버 접근 연산자
  printf("영어: %d\n", ps->eng);
  printf("수학: %d\n", ps->math);

  return 0;
}
