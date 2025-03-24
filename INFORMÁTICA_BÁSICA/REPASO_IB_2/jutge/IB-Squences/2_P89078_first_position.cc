/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 2_P89078_first_position.cc
 * @author Steven
 * @date 2025-03-23
 * @brief This program prints after a sequence of numbers the first even
 * @bug There are no known bugs
*/

#include <iostream>
#include <vector>

int main() {
  int number{0};
  std::vector<int> v = {0}; 

  while(std::cin >> number) {
    v.push_back(number);
  }

  for(size_t i = 0; i < v.size(); i++) {
    if(v[i] % 2) {
      std::cout << v[i] << std::endl; 
    }
  }

  return 0; 
}