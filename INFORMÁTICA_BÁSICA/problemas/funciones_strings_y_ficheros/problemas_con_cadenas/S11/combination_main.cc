/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file combination_main.cc
 * @author Steven
 * @date 2024-12-29
 * @brief The main program of combination
 * @bug There are no known bugs
 */

#include "combination.h"

int main(int argc, char *argv[]) {
  Usage(argc, argv);

  std::string phrase = argv[1];
  std::string phrase_2 = argv[2];

  std::cout << CombiningStrings(phrase, phrase_2);

  return 0;

}