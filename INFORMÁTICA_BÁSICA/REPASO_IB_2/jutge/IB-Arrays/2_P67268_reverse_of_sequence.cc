/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 2_P67268_reverse_of_sequence.cc
 * @author Steven
 * @date 2025-02-22
 * @brief This program reads sequences of
 *  integer numbers, and prints each one reversing the order of its elements.
 * @bug There are no known bugs
 */

#include <iostream>
#include <vector>

int main() {
  int tamaño_array{0}, numbers{0};
  std::vector <int> v;

  while(std::cin >> tamaño_array) {
    for(int i = 0; i < tamaño_array; i++) {
      std::cin >> numbers; 
      v.push_back(numbers);
    }

    for(int i = tamaño_array - 1; i >= 0; i--){
      if(i > 0) {
        std::cout << v[i] << " ";
      } else {
        std::cout << v[i];
      }
    }
    std::cout << std::endl;
    v.clear();
  }

  return 0;
}