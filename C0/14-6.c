#include <stdio.h>

int main() {
  char *pary[5];  // 5개 포인터 저장하는 포인터배열
  int i;

  pary[0] = "dog";
  pary[1] = "e";
  pary[2] = "p";
  pary[3] = "t";
  pary[4] = "l";

  for (i = 0; i < 5; i++) printf("%s\n", pary[i]);
}