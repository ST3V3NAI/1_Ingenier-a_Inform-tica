/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file traingulo_rectangulo_entero_main.cc
  * @author Steven
  * @date Nov 11 2024
  * @brief Implementación de funciones coger las 3 numeros y ver si tienes semejanza piatgorica
  * @bug There are no known bugs
  */

#include "seno_coseno.h"
#include <iostream>

int main (int argc, char *argv[]) {
  PrintProgramPurpose();

  if(!CheckCorrectParameters(argc, argv, 3)){
    return 1;
  } else {
    double valor_x{std::atof(argv[1])};
    int terminos{std::atoi(argv[2])};

    std::cout << SenoAprox(valor_x, terminos) << ' ' 
    << std::sin(valor_x) << std::endl
    << CosenoAprox(valor_x, terminos) << ' '
    << std::cos(valor_x) << std::endl; 
  }

}