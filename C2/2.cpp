// https://modoocode.com/141
// 2. C++ 참조자(레퍼런스)의 도입

#include <iostream>

using namespace std;

int using_pointer_change_val(int* p) {
  *p = 3;
  return 0;
}

void using_pointer() {
  int n = 5;
  cout << n << endl;
  using_pointer_change_val(&n);
  cout << n << endl;
}

void using_refernce() {
  int a = 3;
  // another_a 는 a의 또다른 이름이다
  int& another_a = a;

  // another_a 에게 하는 작업은 a에게 하는 것과 마찬가지
  another_a = 5;
  cout << "a: " << a << endl;
  cout << "another_a: " << another_a << endl;
}

int get_ref_change_val(int& p) {
  p = 3;
  return 0;
}

void get_ref() {
  int n = 5;
  cout << n << endl;
  get_ref_change_val(n);
  cout << n << endl;
}

int main() {
  //   using_pointer();
  //   using_refernce();
  get_ref();
  return 0;
}