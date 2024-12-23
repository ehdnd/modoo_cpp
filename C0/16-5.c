#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char** ps) {
  while (*ps != NULL) {
    printf("%s\n", *ps);
    ps++;
  }
}

int main() {
  char temp[80];        // 임시 char 배열
  char* str[21] = {0};  // 문자열을 연결할 포인터 배열, 널 포인터로 초기화
  int i = 0;

  while (i < 20) {
    printf("문자열 입력: ");
    gets(temp);
    if (strcmp(temp, "end") == 0) break;
    str[i] = (char*)malloc(strlen(temp) + 1);
    strcpy(str[i], temp);
    i++;
  }
  print_str(str);

  for (i = 0; str[i] != NULL; i++) free(str[i]);

  return 0;
}