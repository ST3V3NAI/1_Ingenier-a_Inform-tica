/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file main.cc
  * @author Steven
  * @date Nov 6 2024
  * @brief  Programa que comprueba si está contenida la paalabra en la frase
  * @bug There are no known bugs
  */

#include <iostream>
#include <string>
#include "part_of.h"


int main (int argc, char *argv[]) {
  PrintProgramPurpose();

  if(!CheckCorrectParameters(argc, argv, 3)){
    return 1;
  }

  std::string frase = argv[1];
  std::string palabra = argv[2];

  PartOf(frase, palabra); 

  return 0;
}