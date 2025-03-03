/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 2_P90133_logarithms.cc
 * @author Steven
 * @date 2025-03-01
 * @brief Write a program that computes logarithms in several bases.
 * @bug There are no known bugs
*/

#include <iostream>
#include <cmath>

int logbase(const int &numero, const int &base) {
  return (numero > (base - 1)) ? 1 + logbase(numero / base, base) : 0;
}

int main() {
  long int base, numero;
  int i{0};
  int result;
  while (std::cin >> base >> numero) {
    if (base < 2 || numero < 1) {
      return 1;
    }
    std::cout << logbase(numero, base) << std::endl;
  }
  return 0;
}