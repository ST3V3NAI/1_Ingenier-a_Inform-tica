/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file find_first_main.cc
 * @author Steven
 * @date 2024-12-29
 * @brief The main program of find_first
 * @bug There are no known bugs
 */

#include "find_first_of.h"

int main(int argc, char *argv[]) {
  Usage(argc, argv);

  std::string phrase = argv[1];
  char character = argv[2][0];

  int position = FindFirstOf(phrase, character);

  std::cout << position << std::endl;

  return 0;

}