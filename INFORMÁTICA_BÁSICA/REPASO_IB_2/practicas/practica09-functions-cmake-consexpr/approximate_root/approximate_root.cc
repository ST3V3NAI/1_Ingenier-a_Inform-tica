/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file approximate_root.cc
 * @author Steven
 * @date 2025-03-20
 * @brief Definición de approximate_root.cc
 * @bug There are no known bugs
 */

#include "approximate_root.h"

constexpr double eps = 1e-4; 

double ApproximateRoot(double number) {
  assert(number > 0.0); 
  double root{1.0}, delta{1.0}; 

  while(std::abs(pow(root, 2) - number) > eps) {
    if(delta > 0) {
      while(pow(root, 2) < number) {
        root += delta; 
      }
    } else {
      while(pow(root, 2) > number) {
        root += delta; 
      }
    }
    delta *= -0.5;
  }

  return root; 
}