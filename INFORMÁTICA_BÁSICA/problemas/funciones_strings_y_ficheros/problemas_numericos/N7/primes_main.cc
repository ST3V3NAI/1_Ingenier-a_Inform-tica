/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file primes_main.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Implementación de funciones para calcular la descomposición del número
  * @bug There are no known bugs
  */

#include "primes.h"
#include <iostream>

int main (int argc, char *argv[]) {
  PrintProgramPurpose();

  if(!CheckCorrectParameters(argc, argv, 2)){
    return 1;
  }

  int numero = std::atoi(argv[1]);

  Primes(numero);
  
  return 0;
}