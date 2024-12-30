// 매크로 함수
// 부작용 최소화 위해서
// 치환될 부분을 구성하는 인수에 모두 괄호
#include <stdio.h>
#define SUM(a, b) ((a + b))
#define MUL(a, b) ((a * b))

int main() {
  int a = 10, b = 20;
  int x = 30, y = 40;
  int res;

  printf("a + b = %d\n", SUM(a, b));
  printf("x + y = %d\n", SUM(x, y));
  res = 30 / MUL(2, 5);
  // 전처리후: res = 30 / (2 * 5);
  printf("res: %d\n", res);

  return 0;
}