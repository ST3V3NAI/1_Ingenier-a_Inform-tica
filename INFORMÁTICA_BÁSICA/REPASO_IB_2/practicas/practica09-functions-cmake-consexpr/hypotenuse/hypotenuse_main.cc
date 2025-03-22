/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file hypotenuse_main.cc
 * @author Steven
 * @date 2025-03-20
 * @brief La función cliente
 * @bug There are no known bugs
*/

#include "hypotenuse.h"

int main() {
  double cat_1{0.0}, cat_2{0.0};

  std::cin >> cat_1 >> cat_2;
  std::cout << Hypotenuse(cat_1, cat_2);
}