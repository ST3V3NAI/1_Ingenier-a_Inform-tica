/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 5_scalar_product.cc
 * @author Steven
 * @date 2025-02-22
 * @brief Write a function that returns the scalar product of u and v.
 * @bug There are no known bugs
*/

#include <iostream>
#include <vector>

using namespace std;

double scalar_product(const vector<double>& u, const vector<double>& v) {
  double result{0.0};
  size_t size = v.size();

  for(size_t i = 0; i < size; i++) {
    result += u[i] * v[i];
  }

  return result;
}

int main() {
  std::vector<double> v{3.0, 4.0, 5.0};
  std::vector<double> u{8.0, 5.0, 5.0};

  std::cout << scalar_product(v, u);
}