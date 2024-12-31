/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file temperatures_main.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Implementación de funciones pa transformar los grados
  * @bug There are no known bugs
  */

#include "temperatures.h"

int main (int argc, char *argv[]) {
  Usage(argc, argv);

  int min_temp = std::atoi(argv[1]);
  int max_temp = std::atoi(argv[2]);
  int difference = std::atoi(argv[3]);

  PrintTableOfTemperatures(min_temp, max_temp, difference);

  return 0;
}