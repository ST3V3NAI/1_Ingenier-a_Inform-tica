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


int main (int argc, char *argv[]) {
  PrintProgramPurpose();

  if(!CheckCorrectParameters(argc, argv, 5)){
    return 1;
  }

  int numero = std::atoi(argv[1]);
  int numero_2 = std::atoi(argv[2]);
  int numero_3 = std::atoi(argv[3]);
  int numero_4 = std::atoi(argv[4]);

  std::vector<int> numeros{numero, numero_2, numero_3, numero_4};

  std::cout << DeIntaChar(numeros);
  
  return 0;
}