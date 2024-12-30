// 배열을 가리키는 배열 포인터
#include <stdio.h>

int main() {
  int ary[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  // 변수명 앞 * 포인터임 표시
  // 가리키는 int 4개의 1차원 배열 - 괄호없으면 포인터배열임 주의
  int(*pa)[4];  // int형 변수 4개의 배열을 가리키는 배열 포인터
  int i, j;

  pa = ary;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) printf("%5d", pa[i][j]);
    printf("\n");
  }
  return 0;
}