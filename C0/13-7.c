// 포인터를 써서 변수의 값에 10을 더하자

#include <stdio.h>

void add_ten(int *pa) { *pa += 10; }

int main() {
  int a = 10;
  add_ten(&a);
  printf("a: %d\n", a);
  return 0;
}