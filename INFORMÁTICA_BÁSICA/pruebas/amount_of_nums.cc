#include <iostream>
#include <cmath>

int main () {
  int int_number{0};

  std::cout << "Introduzca un número entero: ";
  std::cin >> int_number;

  if(int_number == 2) {
    std::cout << "Su numero es dos" << std::endl;
  }

  return 0;
}