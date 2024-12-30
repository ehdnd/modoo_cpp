// 레지스터 변수: CPU안에 있는 저장공간인 레지스터 사용

#include <stdio.h>

int main() {
  register int i;
  auto int sum = 0;

  for (i = 1; i <= 10000; i++) sum += i;

  printf("%d\n", sum);

  return 0;
}
