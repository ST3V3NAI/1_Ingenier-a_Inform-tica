/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file binary_to_decimal.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Programa que al introducirle un numero binary, te lo pasa a entero
  * @bug There are no known bugs
  */

#include "binary_to_decimal.h"
#include <iostream>


void PrintProgramPurpose() {
  std::cout << "This program gives you the number from binary" << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 2) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << " <number> " << std::endl;
    return false;
  }
  return true;
}

void BinaryToDecimal(const std::string& binario) {
    int decimal = 0;
    int longitud = binario.length();

    // Recorremos cada dígito del número binario
    for (int i = 0; i < longitud; ++i) {
        // Si el dígito es '1', sumamos la potencia de 2 correspondiente
        if (binario[longitud - i - 1] == '1') {
            decimal += std::pow(2, i);
        }
    }
    
    std::cout << decimal << std::endl;
}
