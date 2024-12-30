#include <iostream>

int main() {
  int number_a{0}, result{0};

  std::cin >> number_a;

  for(int i = 1; i <= number_a; i++) {
     result = (i * i * i);
     std::cout << result << ",";
  }
}