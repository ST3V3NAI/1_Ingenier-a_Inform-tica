/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file next_letter_main.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Implementación de funciones para mostrar la siguiente letra del abecedario de la frase
  * @bug There are no known bugs
  */

#include "precedence.h"
#include <string>
#include <iostream>

int main (int argc, char *argv[]) {
  PrintProgramPurpose();

  if(!CheckCorrectParameters(argc, argv, 3)){
    return 1;
  }
    
  std::string palabra = argv[1];
  std::string palabra2 = argv[2];

  Precedence(palabra, palabra2);

  return 0;
}
