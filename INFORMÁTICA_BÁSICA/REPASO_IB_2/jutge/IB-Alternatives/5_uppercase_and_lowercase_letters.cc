/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 5_uppercase_and_lowercase_letters.cc
 * @author Steven
 * @date 2025-02-15
 * @brief This program that reads a letter and prints it in
 * lowercase if it was uppercase, or prints it in uppercase if it
 * was lowercase.
 * @bug There are no known bugs
*/

#include <iostream>

int main() {
  char character{};

  std::cin >> character; 

  if(character >= 'a' && character <= 'z') {
    character -= 32;         // Restar para los caracteres lowercase
    std::cout << character << std::endl;
  } else { 
    character += 32;        // Sumar para los caracteres uppercase
    std::cout << character << std::endl; 
  }


  return 0;
}

