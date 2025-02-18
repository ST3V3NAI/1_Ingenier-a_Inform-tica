/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 6_classification_of_characters.cc
 * @author Steven
 * @date 2025-02-15
 * @brief This program  reads a letter, and 
 * tells if it is an uppercase letter or a lowercase letter, 
 * and that also tells if it is a vowel or a consonant. 
 * Here, assume that the vowels are ‘a’, ‘e’, ‘i’, ‘o’ and ‘u’,
 *  and their corresponding uppercase letters.
 * @bug There are no known bugs
*/

#include <iostream> // Para flujos entrada y salida

int main() {
  char character{};

  std::cin >> character;

  if(character >= 'a' && character <= 'z') {
    std::cout << "lowercase" << std::endl;
  } else if (character >= 'A' && character <= 'Z') {
    std::cout << "uppercase" << std::endl;
  }
  if(character == 'a' || character == 'e' || character == 'i' ||
     character == 'o' || character == 'u' || character == 'A' || 
     character == 'E' || character == 'I' || character == 'O' || 
     character == 'U') {
    std::cout << "vowel" << std::endl;
  } else {
    std::cout << "consonant" << std::endl;
  }

  return 0;
}