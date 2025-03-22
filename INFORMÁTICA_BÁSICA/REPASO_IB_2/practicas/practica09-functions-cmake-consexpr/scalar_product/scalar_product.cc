/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file scalar_product.cc
 * @author Steven
 * @date 2025-03-16
 * @brief Implementación de scalar_product
 * @bug There are no known bugs
 */

#include "scalar_product.h"

double ScalarProduct(std::vector<int> v1, std::vector<int> v2) {
  double suma{0};
  for(int i = 0; i <= v1.size(); i++) {
    suma += v1[i] * v2[i];
  }
  return suma;
}
