/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 12_P58153_harmonic_numbers_2.cc
 * @author Steven
 * @date 2025-03-01
 * @brief Write a program that reads pairs of numbers n and m with n ≥ m, and for each pair prints Hn − Hm.
 * @bug There are no known bugs
*/

#include <iostream>
#include <iomanip>

int main() {
  double number_1, number_2; 
  while(std::cin >> number_1 >> number_2) {
    double H{0.0};
    for(int i = number_2 + 1; i <= number_1; i++) {
      H += 1.0 / i;
    }
    std::cout << std::fixed << std::setprecision(10) << H << std::endl; 
  }
  return 0; 
}