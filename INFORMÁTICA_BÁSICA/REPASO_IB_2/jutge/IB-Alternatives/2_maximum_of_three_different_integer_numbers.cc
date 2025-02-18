/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 2_maximum_of_three_different_integer_numbers.cc
 * @author Steven
 * @date 2025-02-15
 * @brief This program reads three numbers, all different, and prints their maximum
 * @bug There are no known bugs
*/

#include <iostream> // Para flujos de entrada y salida

int main() {
  int number_a{0}, number_b{0}, number_c{0};

  std::cin >> number_a >> number_b >> number_c;

  if(number_a > number_b && number_a > number_c) {
    std::cout << number_a << std::endl;
  } else if (number_b > number_a && number_b > number_c) {
    std::cout << number_b << std::endl;
  } else {
    std::cout << number_c << std::endl; 
  }

  return 0;
}