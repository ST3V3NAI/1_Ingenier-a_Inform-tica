/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 1_P14130_equal_to_the_last_one.cc
 * @author Steven
 * @date 2025-02-22
 * @brief Write a program that reads a non-empty 
 * sequence of integer numbers, and tells how many of them are equal to the last one.
 * @bug There are no known bugs
*/

#include <iostream>
#include <vector>

int main() {
  int tamaño_array{0}, numbers{0}, counter_of_equals_to_last_one{0};
  std::vector<int> v(tamaño_array);

  std::cin >> tamaño_array;

  for(int i = 0; i < tamaño_array; i++) {
    std::cin >> numbers;
    v.emplace_back(numbers);
  }
  
  int last = v.back(); 

  for(int i = tamaño_array - 2; i >= 0; i--) {
    if(v[i] == last) {
      counter_of_equals_to_last_one++;
    }
  }

  std::cout << counter_of_equals_to_last_one << std::endl;

  return 0; 
}