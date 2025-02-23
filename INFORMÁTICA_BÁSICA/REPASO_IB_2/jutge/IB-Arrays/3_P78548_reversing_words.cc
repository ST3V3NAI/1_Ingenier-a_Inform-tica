/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 3_P78548_reversing_words.cc
 * @author Steven
 * @date 2025-02-22
 * @brief This program reads words, and prints 
 * each one reversing the order of its characters.
 * @bug There are no known bugs
*/

#include <iostream>
#include <string>
#include <algorithm>

int main() {
  std::string palabra{" "};


  while(std::cin >> palabra) {
    std::reverse(palabra.begin(), palabra.end());

    std::cout << palabra << std::endl; 
  }
}