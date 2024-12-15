/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file exponente_main.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Implementación de funciones calcular la potencia de la base
  * @bug There are no known bugs
  */

#include "power.h"
#include <iostream>

int main (int argc, char *argv[]) {
  PrintProgramPurpose();

  if(!CheckCorrectParameters(argc, argv, 3)){
    return 1;
  }

  double base = std::atoi(argv[1]);
  double exponente = std::atoi(argv[2]);

  std::cout << Power(base, exponente) << std::endl;
  
  return 0;
}