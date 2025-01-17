class A {
 private:
  void private_fucn() {}
  int private_num;

  friend class B;

  friend void func();
};

class B {
 public:
  void b() {
    A a;

    a.private_fucn();
    a.private_num = 2;
  }
};

void func() {
  A a;

  a.private_fucn();
  a.private_num = 2;
}

int main() {}