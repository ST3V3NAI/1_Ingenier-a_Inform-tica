/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 4_P99133_reversing_words_2.cc
 * @author Steven
 * @date 2025-02-22
 * @brief Descripción del programa
 * @bug There are no known bugs
*/

#include <iostream>
#include <vector>
#include <algorithm>

void reverseStrings(std::string& frase) {
  reverse(frase.begin(), frase.end());
}

int main() {
  int number_of_strings;
  std::cin >> number_of_strings; 

  std::vector<std::string> strings(number_of_strings);

  for(int i = 0; i < number_of_strings; i++) {
    std::cin >> strings[i];
  }

  for(int i = number_of_strings - 1; i >= 0; i--) {
    reverseStrings(strings[i]);
    std::cout << strings[i] << std::endl;
  }
}
