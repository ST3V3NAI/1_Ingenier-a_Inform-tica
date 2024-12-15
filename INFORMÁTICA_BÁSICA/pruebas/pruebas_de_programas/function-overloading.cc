
#include <iostream>
#include <string>

std::string Func(int num) { return "int"; }
std::string Func(const std::string& str) { return "string"; }

int main() {
  std::cout << Func(1) << std::endl;
  std::cout << Func("hello") << std::endl;
  return 0;
}