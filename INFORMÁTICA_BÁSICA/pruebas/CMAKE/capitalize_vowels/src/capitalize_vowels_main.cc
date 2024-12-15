/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file capitalize_vowels_main.cc
  * @author Steven
  * @date Nov 11 2024
  * @brief Implementación de funciones pa conseguir la que las vocales pasen a mayúsculas
  * @bug There are no known bugs
  */

#include "capitalize_vowels.h"
#include <string>
#include <iostream>

int main (int argc, char *argv[]) {
  PrintProgramPurpose();

  if(!CheckCorrectParameters(argc, argv, 2)){
    return 1;
  }

  std::string frase = argv[1];

  CapitalizeVowels(frase);

  std::cout << frase << std::endl;


}