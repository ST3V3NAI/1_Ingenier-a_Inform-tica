/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 1_maximum_of_two_integer_numbers.cc
 * @author Steven
 * @date 2025-02-15
 * @brief This porgram reads two numbers and prints their maximum
 * @bug There are no known bugs
*/

#include <iostream> // Para flujos de entrada y salida

int main() {
  int number_a{0}, number_b{0}; // Declaración de variables

  std::cin >> number_a >> number_b; // 

  if(number_a > number_b) {
    std::cout << number_a << std::endl; 
  } else if (number_a < number_b) {
    std::cout << number_b << std::endl; 
  } else {
    std::cout << number_a << std::endl; 
  }

  return 0;
}