#include <stdio.h>

void func(int (*fp)(int, int)) {
  int a, b;
  int res;

  printf("두 정수 입력: ");
  scanf("%d%d", &a, &b);
  // 함수포인터로 가리키는 함수를 호출
  res = fp(a, b);
  printf("결과: %d\n", res);
}

int sum(int a, int b) { return (a + b); }
int mul(int a, int b) { return (a * b); }
int max(int a, int b) { return a > b ? a : b; }

int main() {
  int sel;

  printf("0, 1, 2 선택\n");
  scanf("%d", &sel);

  switch (sel) {
    case 1:
      func(sum);
      break;

    case 2:
      func(mul);
      break;
    case 3:
      func(max);
      break;

    default:
      break;
  }
}