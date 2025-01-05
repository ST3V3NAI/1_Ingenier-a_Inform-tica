/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file fraction_main.cc
 * @author Steven
 * @date 2025-01-05
 * @brief Programa que realiza operaciones con fracciones
 * @bug There are no known bugs
*/

#include "fraction.h"

int main(int argc, char *argv[]) {
  Usage(argc, argv);
  Fraction fraction1{1, 2}, fraction2{3, 4};
  std::cout << "Fracciones: " << fraction1 << ' ' << fraction2 << std::endl;
  std::cout << "Suma:      " << fraction1 + fraction2 << std::endl;
  std::cout << "Resta:     " << fraction1 - fraction2 << std::endl;
  std::cout << "Mult.:     " << fraction1 * fraction2 << std::endl;
  std::cout << "Div.:      " << fraction1 / fraction2 << std::endl;
  std::cout << "Son iguales: " << (fraction1 == fraction2) << std::endl;

  return 0;
}