/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file acronym.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Implementación de funciones coger las 3 numeros y ver si tienes semejanza piatgorica
  * @bug There are no known bugs
  */

#include "pitagorica.h"
#include <string>
#include <iostream>

int main (int argc, char *argv[]) {
  PrintProgramPurpose();

  if(!CheckCorrectParameters(argc, argv, 4)){
    return 1;
  } else {
    
    int number_a = std::atoi(argv[1]);
    int number_b = std::atoi(argv[2]);
    int number_c = std::atoi(argv[3]);

  Pitagorica(number_a, number_b, number_c);

  }
  return 0;
}