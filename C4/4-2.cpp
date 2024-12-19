#include <iostream>

using namespace std;

// // 함수의 오버로딩
// // 같은 이름을 가진 함수가 여러개 존재 가능

// void print(int x) { cout << "int: " << x << endl; }
// void print(char x) { cout << "char: " << x << endl; }
// void print(double x) { cout << "double: " << x << endl; }

// int main() {
//   int a = 1;
//   char b = 'c';
//   double c = 3.2f;

//   print(a);
//   print(b);
//   print(c);

//   return 0;
// }

/////////////////////

// // 함수 오버로딩 과정
// // 1. 타입과 정확히 일치
// // 2. 형변환을 통해 일치 함수 찾기
// // 3. 포괄적인 형변환

// void print(int x) { cout << "int: " << x << endl; }
// void print(double x) { cout << "double: " << x << endl; }

// int main() {
//   int a = 1;
//   char b = 'c';
//   double c = 3.2f;

//   print(a);
//   print(b);
//   print(c);

//   return 0;
// }

///////////////////

class Date {
  int year_;
  int month_;
  int day_;

 public:
  void SetDate(int year, int month, int day);
  void AddDay(int inc);
  void AddMonth(int inc);
  void AddYear(int inc);

  int GetCurrentMonthTotalDays(int year, int month);

  void ShowDate();

  // 생성자 Constructor
  // 객체 생성시 자동으로 호출되는 함수
  // 생성자 오버로딩
  Date() {
    cout << "기본 생성자 호출!" << endl;
    year_ = 2012;
    month_ = 7;
    day_ = 12;
  }

  Date(int year, int month, int day) {
    cout << "인자 3 개인 생성자 호출!" << endl;
    year_ = year;
    month_ = month;
    day_ = day;
  }
};

void Date::SetDate(int year, int month, int day) {
  year_ = year;
  month_ = month;
  day_ = day;
}

int Date::GetCurrentMonthTotalDays(int year, int month) {
  static int month_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (month != 2) {
    return month_day[month - 1];
  } else if (year % 4 == 0 && year % 100 != 0) {
    return 29;
  } else {
    return 28;
  }
}

void Date::AddDay(int inc) {
  while (1) {
    int current_month_day_total_days = GetCurrentMonthTotalDays(year_, month_);
    if (day_ + inc <= current_month_day_total_days) {
      day_ += inc;
      return;
    } else {
      inc -= (current_month_day_total_days - day_ + 1);
      day_ = 1;
      AddMonth(1);
    }
  }
}

void Date::AddMonth(int inc) {
  AddYear((inc + month_ - 1) / 12);
  month_ = month_ + inc % 12;
  month_ = (month_ == 12 ? 12 : month_ % 12);
}

void Date::AddYear(int inc) { year_ += inc; }

void Date::ShowDate() {
  std::cout << "오늘은 " << year_ << " 년 " << month_ << " 월 " << day_
            << " 일 입니다 " << std::endl;
}

int main() {
  //   Date day;
  //   // 생성후 초기화
  //   day.SetDate(2011, 3, 1);

  // Date 클래스의 day 객체를 만들면서 생성자를 호출한다
  Date day(2011, 3, 1);  // 암시적 방법
  day.ShowDate();

  Date day2 = Date();
  day2.ShowDate();

  day.SetDate(2012, 1, 31);  // 윤년
  day.AddDay(29);
  day.ShowDate();

  day.SetDate(2012, 8, 4);
  day.AddDay(2500);
  day.ShowDate();
  return 0;
}