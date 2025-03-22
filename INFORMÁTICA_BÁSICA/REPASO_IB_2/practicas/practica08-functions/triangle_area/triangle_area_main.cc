/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file triangle_area_main.cc
 * @author Steven
 * @date 2025-03-16
 * @brief Programa cliente que prueba la función
 * @bug There are no known bugs
*/

#include "triangle_area.h"

int main() {
  double a, b, c;

  std::cin >> a >> b >> c; 
  std::cout << std::fixed << std::setprecision(2) << IsValidTriangle(a, b, c);

  return 0;
}