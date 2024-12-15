/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file equilateral_main.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Implementación de funciones pa transformar los grados
  * @bug There are no known bugs
  */

#include "equilateral.h"
#include <string>
#include <iostream>

int main (int argc, char *argv[]) {
  PrintProgramPurpose();

  if(!CheckCorrectParameters(argc, argv, 2)){
    return 1;
  }

  int lado = std::atoi(argv[1]); 

  std::cout << TriangleArea(lado) << std::endl;

  return 0;
}