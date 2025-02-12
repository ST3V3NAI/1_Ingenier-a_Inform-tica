/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 2_P57548_sum_of_two_integer_numbers.cc
 * @author Steven
 * @date 2025-02-10
 * @brief This program reads two number and prints their sum.
 * @bug There are no known bugs
 */

#include <iostream> // Para flujos de entrada/salida

int main() {
  int number_a{0}, number_b{0}, sum{0}; 

  std::cin >> number_a >> number_b; // Pedimos dos numeros por pantalla

  sum = number_a + number_b; // Almacenamos a suma de los dos numeros 

  std::cout << sum << std::endl; // Imprimos la suma por pantalla

  return 0;
}