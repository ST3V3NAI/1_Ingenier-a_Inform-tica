/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 1_P79817_powers.cc
 * @author Steven
 * @date 2025-02-25
 * @brief Write a program to compute powers.
 * @bug There are no known bugs
*/

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
  int base{0}, exponent{0}, result{0}; 

  while(std::cin >> base >> exponent) {
    if(exponent < 0) {
      return 1; 
    }
    std::cout << std::fixed << std::setprecision << pow(base, exponent) << std::endl;
  }

  return 0;
}