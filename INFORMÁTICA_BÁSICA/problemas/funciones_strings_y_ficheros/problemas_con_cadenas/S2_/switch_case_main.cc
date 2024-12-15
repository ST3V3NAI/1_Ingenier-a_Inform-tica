/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file main.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief  Programa que convierte una frase ingresada en mayúsculas o minúsculas.
  * @bug There are no known bugs
  */

#include "switch_case.h"
#include <string>
#include <iostream>

int main (int argc, char *argv[]) {
  PrintProgramPurpose();

  if(!CheckCorrectParameters(argc, argv, 2)){
    return 1;
  }

  std::string frase = argv[1];

  UpLower(frase);

  std::cout << frase << std::endl;

  return 0;
}