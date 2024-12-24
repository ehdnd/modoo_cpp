#include <stdio.h>
// #은 인수를 문자열로 치환
#define PRINT_EXPR(x) printf(#x " = %d\n", x)
// ## 연산자는 두개의 토큰을 붙여서 하나로 만드는 연산자임
// a토큰과 1토큰 붙혀서 변수명 a1으로 사용
#define NAME_CAT(x, y) (x##y)

int main() {
  int a1, a2;

  NAME_CAT(a, 1) = 10;
  NAME_CAT(a, 2) = 20;
  // 인수에 사용되는 수식이 그대로 문자열로 출력되는 효과
  PRINT_EXPR(a1 + a2);
  PRINT_EXPR(a2 - a1);

  return 0;
}