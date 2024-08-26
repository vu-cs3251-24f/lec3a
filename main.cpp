// @author Graham Hemingway @copyright 2024 - All rights reserved
#include "point.h"
#include <iostream>

int main() {
  Point p1; // What is the life-cycle of this object?
  std::cout << "1 X: " << p1.getX() << std::endl;
  std::cout << "1 Y: " << p1.getX() << std::endl;

  { // A short-term block - ends before the function returns
    Point p2(p1); // Copy construction
    Point p3; // What is the life-cycle of this object?
    // p3 = p1; // Assignment operation
    std::cout << "2 X: " << p2.getX() << std::endl;
    std::cout << "3 Y: " << p3.getX() << std::endl;
  }
  return 0;
}
