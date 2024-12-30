#include <stdio.h>

struct adress {
  char name[20];
  int age;
  char tel[20];
  char addr[80];
};

void print_list(struct adress *lp) {
  int i;
  for (i = 0; i < 5; i++) {
    // lp[i].name
    // (lp + i) -> name
    // (*(lp + i)).name
    // 모두 가능
    printf("%10s%5d%15s%20s\n", (lp + i)->name, (lp + i)->age, (lp + i)->tel,
           (lp + i)->addr);
  }
}

int main() {
  struct adress list[5] = {{"홍길동", 23, "111-111", "울릉도 독도"},
                           {"이순신", 35, "222-222", "서울 건천동"},
                           {"장보고", 19, "333-333", "완도 청해진"},
                           {"유관순", 15, "444-444", "충남 천안"},
                           {"안중근", 45, "555-555", "황해도 해주"}};
  print_list(list);
  return 0;
}
