/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file change-case-main.cc
 * @author Steven
 * @date 2025-03-15
 * @brief Programa cliente que llama a la función
 * @bug There are no known bugs
 */

#include "change_case.h"

int main() {
  std::string word;

  std::cin >> word; 
  ChangeCase(word);
  
  return 0;
}