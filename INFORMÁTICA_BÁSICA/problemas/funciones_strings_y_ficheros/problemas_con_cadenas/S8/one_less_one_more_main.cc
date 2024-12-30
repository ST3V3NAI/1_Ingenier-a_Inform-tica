/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file one_less_one_more_main.cc
 * @author Steven
 * @date 2024-12-29
 * @brief The main program of find_first
 * @bug There are no known bugs
 */

#include "one_less_one_more.h"

int main(int argc, char *argv[]) {
  Usage(argc, argv);

  std::string phrase = argv[1];

  ChangingCharacters(phrase);

  return 0;

}