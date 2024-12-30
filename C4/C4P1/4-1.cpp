#include <iostream>

using namespace std;

// 객체란? 변수들과 참고 자료들로 이루어진 소프트웨어 덩어리
class Animal {
  // 접근 지시자
 private:
  // 클래스 상에서 지칭: 멤버 변수
  int food;
  int weight;

 public:
  // 클래스 상에서 지칭: 멤버 함수
  void set_animal(int _food, int _weight) {
    food = _food;
    weight = _weight;
  }
  void increase_food(int inc) {
    food += inc;
    weight += (inc / 3);
  }
  void view_stat() {
    cout << "food: " << food << endl;
    cout << "weight: " << weight << endl;
  }
};

int main() {
  // 클래스를 이용해서 만들어진 객체: 인스턴스
  Animal animal;
  // play 함수에 animal 을 인자로 주지 않아도 된다..
  animal.set_animal(100, 50);
  animal.increase_food(30);

  animal.view_stat();
  return 0;
}