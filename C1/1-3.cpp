#include <iostream>

int using_for_loop() {
  int sum = 0;
  char c;
  double d;
  float f;

  for (int i = 1; i <= 10; i++) {
    std::cout << i << std::endl;
  }

  for (int i = 1; i <= 10; i++) sum += i;
  std::cout << "합은: " << sum << std::endl;

  return 0;
}

int using_while_loop() {
  int i = 1, sum = 0;

  while (i <= 10) {
    sum += i;
    i++;
  }
  std::cout << "합은: " << sum << std::endl;
  return 0;
}

int using_if_else() {
  int lucky_number = 3;
  int user_input;
  while (1) {
    std::cin >> user_input;
    if (lucky_number == user_input) {
      std::cout << "COR" << std::endl;
      break;
    } else {
      std::cout << "다시" << std::endl;
    }
  }
  return 0;
}

void using_switch() {
  int user_input;
  std::cin >> user_input;

  switch (user_input) {
    case 1:
      std::cout << "PSI" << std::endl;
      break;
    case 2:
      std::cout << "2" << std::endl;

    default:
      std::cout << "Nothing" << std::endl;
      break;
  }
}

int main() {
  //   using_for_loop();
  //   using_while_loop();
  //   using_if_else();
  using_switch();
}