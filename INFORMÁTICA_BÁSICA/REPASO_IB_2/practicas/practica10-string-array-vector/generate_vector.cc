/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file generate_vector.cc
 * @author Steven
 * @date 2025-03-20
 * @brief Implementación de GenerateVector
 * @bug There are no known bugs
*/

#include "generate_vector.h"

std::vector<double> GenerateVector(const int size, const double lower, const double upper) {
  std::srand(std::time(nullptr));
  std::vector<double> v; 
  for(size_t i = 0; i < size; i++) {
    double randomNumber = lower + (upper - lower) * (std::rand() / (RAND_MAX + 1.0));
    v.push_back(randomNumber);
  }

  return v; 
}

double ReduceSum(std::vector<double> v) {
  double suma{0.0};
  for(size_t i = 0; i < v.size(); i++) {
    suma += v[i];
  }

  return suma; 
}

void CalculateMaxMinProm(std::vector<double> v) {
  double inf = std::numeric_limits<double>::infinity();
  double min{+inf}, max{-inf};
  double suma{0.0};
  double contador{0.0};

  for(size_t i = 0; i < v.size(); i++) {
    if(v[i] < min) {
      min = v[i];
    }

    if(v[i] > max) {
      max = v[i];
    }
    suma += v[i];
    contador++; 
  }

  std::cout << "El menor es: " << min << " el mayor es " << max << " y  el promedio es " << (suma / contador); 
}