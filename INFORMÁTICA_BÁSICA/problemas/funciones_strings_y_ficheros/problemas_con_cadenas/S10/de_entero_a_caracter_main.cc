/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file de_entero_a_caracter_main.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Implementación de funciones para calcular el caracter a partir del numero
  * @bug There are no known bugs
  */

#include "de_entero_a_caracter.h"
#include <iostream>

int main (int argc, char *argv[]) {
  PrintProgramPurpose();

  if(!CheckCorrectParameters(argc, argv, 2)){
    return 1;
  }

  int numero = std::atoi(argv[1]);

  DeIntaChar(numero);
  
  return 0;
}