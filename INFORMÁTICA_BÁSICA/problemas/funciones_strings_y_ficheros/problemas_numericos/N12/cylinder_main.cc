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

#include "cylinder.h"
#include <string>
#include <iostream>

int main (int argc, char *argv[]) {
  PrintProgramPurpose();

  if(!CheckCorrectParameters(argc, argv, 3)){
    return 1;
  }

  int radius = std::atoi(argv[1]);
  int height = std::atoi(argv[2]);

  CircleArea(radius);

  std::cout << CircleVolume(radius, height) << std::endl;

  return 0;
}