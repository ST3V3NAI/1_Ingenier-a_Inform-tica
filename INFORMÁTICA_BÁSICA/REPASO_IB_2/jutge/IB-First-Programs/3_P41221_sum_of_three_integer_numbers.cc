/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 3_P41221_sum_of_three_integer_numbers.cc
 * @author Steven
 * @date 2025-02-10
 * @brief This program reads three numbers and prints their sum
 * @bug There are no known bugs
 */

#include <iostream> // Para flujos entrada/salida

int main() {
  int number_a{0}, number_b{0}, number_c{0}, sum{0};
  
  std::cin >> number_a >> number_b >> number_c; // Pedimos los tres numeros

  sum = number_a + number_b + number_c; // Almacenamos su suma

  std::cout << sum << std::endl; // Imprimimos la suma

  return 0;
}