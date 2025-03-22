/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file capitalize_vowels.cc
 * @author Steven
 * @date 2025-03-16
 * @brief Implementación de capitalize vowels
 * @bug There are no known bugs
*/

#include "capitalize_vowels.h"

void CapitalizeVowels(std::string& word) {
  for(char &i : word) {
    if(i == 'a' || 'e' || 'i' || 'o' || 'u' ) {
        i = std::toupper(i);
        std::cout << i;
    }
  }
}