/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file generate_vector_main.cc
 * @author Steven
 * @date 2025-03-20
 * @brief Programa cliente
 * @bug There are no known bugs
*/

#include "generate_vector.h"

int main() {
  std::vector<double> my_vector = GenerateVector(30, 5.0, 10.0);
  for (const auto& value: my_vector) {
  std::cout << "Component: " << value << std::endl;
  }

  std::cout << "La suma de los componentes del vector generado es: " << ReduceSum(my_vector);

  CalculateMaxMinProm(my_vector);
}