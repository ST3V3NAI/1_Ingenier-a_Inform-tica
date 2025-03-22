/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file main_approximate_root.cc
 * @author Steven
 * @date 2025-03-20
 * @brief Programa cliente
 * @bug There are no known bugs
*/

#include "approximate_root.h"

int main() {
  double numero;
  std::cin >> numero; 

  double result = ApproximateRoot(numero);
  std::cout << "Aproximación de la raíz: " << result; 

}