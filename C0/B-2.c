// 선택 정렬
// 비교 모두 끝난 이후에 한 번만 교환
#include <stdio.h>

int main() {
  int a[5] = {3, 2, 1, 6, 5};
  int i, j, temp;
  int min;

  for (i = 0; i < 4; i++) {
    min = i;

    for (j = i + 1; j < 5; j++)
      if (a[min] > a[j]) min = j;

    if (min != i) {
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
    }
  }
  for (i = 0; i < 5; i++) printf("%5d", a[i]);

  return 0;
}