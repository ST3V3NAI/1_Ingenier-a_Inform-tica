#include <iostream>
#include <algorithm>
#include <vector>
#include "shape.h"
#include "shapes.h"

int main() {
  std::vector<Shape> shapes{Square{1.0}, Circle{0.5}, Triangle{1.0, 1.0}, Triangle{2.0, 2.0}};
  std::sort(shapes.begin(), shapes.end());
  for (auto shape: shapes) {
    std::cout << shape << ' ';   // Posible output: /\0.5 ()0.785398 []1 /\2
  }
  std::cout << std::endl;
  return 0; 

}