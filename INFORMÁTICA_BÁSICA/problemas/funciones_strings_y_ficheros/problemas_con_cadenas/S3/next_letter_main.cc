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

#include "next_letter.h"
#include <string>
#include <iostream>

int main (int argc, char *argv[]) {
  PrintProgramPurpose();

  if(!CheckCorrectParameters(argc, argv, 2)){
    return 1;
  }
    
  std::string frase = argv[1];
  NextLetter(frase);

  return 0;
}
