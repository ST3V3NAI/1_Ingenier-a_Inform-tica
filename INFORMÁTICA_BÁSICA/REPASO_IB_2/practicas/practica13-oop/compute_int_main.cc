/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file compute_int_main.cc
 * @author Steven
 * @date 2025-04-08
 * @brief Programa cliente de ComputeInt
 * @bug There are no known bugs
 */

#include "compute_int.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  double numerator = std::atoi(argv[1]);
  double denominator = std::atoi(argv[2]);

  ComputeInt compute_integer(numerator, denominator);

  double value = compute_integer.Value();

  std::cout << "Factorial: " << compute_integer.Factorial() << std::endl;

  return 0; 
}