// @author Graham Hemingway @copyright 2024 - All rights reserved
#ifndef POINT_H
#define POINT_H

class Point {
public:
  /**
   * Declaration of public instance variables & methods,
   * including constructors
   */
  Point();  // default constructor
  ~Point(); // destructor
  Point &operator=(const Point &) = delete;

  int getX();          // get the x coordinate
  void setX(int newX); // set the x coordinate

private:
  /**
   * Declaration of private instance variables & methods
   */
  int x; // x coordinate of the Point
  int y; // y coordinate of the Point
};

#endif // POINT_H
