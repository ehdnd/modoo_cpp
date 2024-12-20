#include <stdio.h>

// 배열명은 포인터의 주소 == 이중 포인터 선언필요
void print_str(char **pps, int cnt) {
  int i;
  for (i = 0; i < cnt; i++) printf("%s\n", pps[i]);
}

int main() {
  char *ptr_ary[] = {"e", "t", "l", "s"};
  int count;

  count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
  print_str(ptr_ary, count);

  return 0;
}