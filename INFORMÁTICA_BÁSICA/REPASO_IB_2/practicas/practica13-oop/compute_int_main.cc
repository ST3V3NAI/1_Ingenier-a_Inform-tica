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

int main() {
  ComputeInt compute_integer(7, 10);
  ComputeInt compute_integer_2(8, 21);

  std::cout << "Valor de " << compute_integer << " es: " << compute_integer.Value() << std::endl;
  std::cout << "Valor de " << compute_integer_2 << " es: " << compute_integer_2.Value() << std::endl; 
  std::cout << "Factorial de " << compute_integer << " es: " << compute_integer.Factorial() << std::endl;
  std::cout << "Factorial de " << compute_integer_2 << " es: " << compute_integer_2.Factorial() << std::endl;
  std::cout << "La suma de la serie de " << compute_integer << " es: " << compute_integer.SumSerie() << std::endl;
  std::cout << "La suma de la serie de " << compute_integer_2 << " es: " << compute_integer_2.SumSerie() << std::endl;
  compute_integer.IsPrime();
  compute_integer_2.IsPrime();
  compute_integer.AreRelativesPrimes(compute_integer_2);

  return 0; 
}