#include <iostream>

int main() {
  int numerator{0}, denominator{0}, division_result{0}, remainder{0};

  std::cin >> numerator >> denominator;

  while (denominator != 0) {
    remainder = numerator % denominator;
    numerator = denominator;
    denominator = remainder;
  }

  std::cout << "The greatest common divisor is: " << numerator << std::endl;

}

