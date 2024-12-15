/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file min_max.cc
  * @author Steven
  * @date Oct 31 2024
  * @brief 
  * @bug There are no known bugs
  */

#include <iostream>
#include "min_max.h"

int main (int argc, char *argv[]) {
  PrintProgramPurpose();

  if(!CheckCorrectParameters(argc, argv, 3)){
    return 1;
  }
    
  int number_a = std::atoi(argv[1]);
  int number_b = std::atoi(argv[2]);

  MinimumMaximum(number_a, number_b);

  return 0;
}