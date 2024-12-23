// 구조체 변수를 포인터로 연결한 것을 연결 리스트라고 함
#include <stdio.h>

// 자기참조 구조체
struct list {
  int num;
  struct list* next;  // 구조체 자신을 가리키는 포인터 멤버
};

int main() {
  struct list a = {10, 0}, b = {20, 0}, c = {30, 0};
  struct list* head = &a;
  struct list* current;

  a.next = &b;
  b.next = &c;

  printf("head->num: %d\n", head->num);  // head가 가리키는 a의 num 멤버 사용
  printf("head->next->num: %d\n", head->next->num);  // head로 b의 num 멤버 사용

  printf("list all: ");
  current = head;            // 최초 current 포인터가 a를 가리킴
  while (current != NULL) {  // 마지막 c일떄 current->next는 0이므로 널 포인터
    printf("%d ", current->num);
    current = current->next;
  }
  printf("\n");

  return 0;
}