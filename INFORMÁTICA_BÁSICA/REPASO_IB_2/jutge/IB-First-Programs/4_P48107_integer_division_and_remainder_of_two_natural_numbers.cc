/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 4_P48107_integer_division_and_remainder_of_two_natural_numbers.cc
 * @author Steven
 * @date 2025-02-10
 * @brief This program  reads two natural numbers a and b, with b > 0, 
 * and prints the integer division d and the remainder r of a divided by b.
 * @bug There are no known bugs
 */

#include <iostream>

int main() {
  int number_a{0}, divisor{0}, remainder{0}, resto{0};

  std::cin >> number_a >> divisor;

  if(divisor > 0) {
    remainder = number_a / divisor;
    resto = number_a % divisor;
    std::cout << remainder << " " << resto << std::endl;
  } else {
    std::cout << "The divisor is negative" << std::endl;
  }
  return 0;
}