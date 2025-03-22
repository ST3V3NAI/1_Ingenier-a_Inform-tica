/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file capitalize_vowels_main.cc
 * @author Steven
 * @date 2025-03-16
 * @brief Programa cliente
 * @bug There are no known bugs
*/

#include "capitalize_vowels.h"

int main() {
  std::string word;

  std::getline(std::cin, word);

  CapitalizeVowels(word);
}