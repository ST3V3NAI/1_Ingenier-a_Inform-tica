/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file acronym.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Implementación de funciones calcular el año bisiesto
  * @bug There are no known bugs
  */

#include "leap.h"
#include <string>
#include <iostream>

int main (int argc, char *argv[]) {
  PrintProgramPurpose();

  if(!CheckCorrectParameters(argc, argv, 2)){
    return 1;
  }

  int year = std::atoi(argv[1]);

  Leap(year);

  return 0;
}