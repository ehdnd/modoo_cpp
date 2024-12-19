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
  // 정의와 함께 초기화 필수
  int& another_a = a;  // 메모리 상에 존재하지 않을 수도 있다

  // another_a 에게 하는 작업은 a에게 하는 것과 마찬가지
  another_a = 5;
  cout << "a: " << a << endl;
  cout << "another_a: " << another_a << endl;
}

// 사실상 int& p = n;
// p에게 n의 새로운 별명 붙이기
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

void understaning_ref() {
  int x;
  int& y = x;
  // 참조자의 참조자? 굳이 별명의 별명을?
  // 곧 x의 참조자를 선언해라와 같은 의미
  int& z = y;

  x = 1;
  cout << "x: " << x << " y: " << y << " z: " << z << endl;

  y = 2;
  cout << "x: " << x << " y: " << y << " z: " << z << endl;

  z = 3;
  cout << "x: " << x << " y: " << y << " z: " << z << endl;
}

void arr_ref() {
  int arr[3] = {1, 2, 3};
  int(&ref)[3] = arr;

  ref[0] = 2;
  ref[1] = 3;
  ref[2] = 1;

  cout << arr[0] << arr[1] << arr[2] << endl;
}

// 참조자를 리턴하는 경우?
// 외부 변수 즉 살아있는 b 를 계속 참조 가능
// '복사' 가 아니라 좋다
int& return_ref_f(int& a) {
  a = 5;
  return a;
}

int return_ref_main() {
  int b = 2;
  int c = return_ref_f(b);
  return 0;
}

// scanf와 다르게 std::cin 은 참조로 user_input 을 받아서 가능한 것

// Dangling reference 를 주의하자..
// 레퍼런스 리턴함수에서 지역 변수의 레퍼런스 리턴 주의

int main() {
  //   using_pointer();
  //   using_refernce();
  // get_ref();
  // understaning_ref();
  // arr_ref();
  return_ref_main();
  return 0;
}