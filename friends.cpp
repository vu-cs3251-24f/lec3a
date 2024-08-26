// @author Graham Hemingway @copyright 2024 - All rights reserved
#include <iostream>

class Bar {
public:
  friend class Foo;

private:
  int y;
};

class Foo {
public:
  int adds(const Bar rhs) { return x + rhs.y; }

private:
  int x;
};

int main() {
  Foo a;
  Bar b;

  std::cout << "Sum: " << a.adds(b) << std::endl;
  return 0;
}
