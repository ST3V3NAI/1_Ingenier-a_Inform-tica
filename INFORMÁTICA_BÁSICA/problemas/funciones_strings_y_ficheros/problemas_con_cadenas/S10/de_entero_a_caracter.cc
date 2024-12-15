/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file de_entero_a_caracter.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Programa que al introducirle un entero, te lo pasa a caracter
  * @bug There are no known bugs
  */

#include "de_entero_a_caracter.h"
#include <string>
#include <iostream>


void PrintProgramPurpose() {
  std::cout << "This program translates a number into the ASCII value" << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 2) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << " <number> " << std::endl;
    return false;
  }
  return true;
}

void DeIntaChar(int& numero) {
  if (numero >= 1 && numero <= 9) {
      char character = static_cast<char>('0' + numero);
      std::cout << character << std::endl;
    } else if (numero >= 10 && numero <= 35) {
      char character = static_cast<char>('A' + (numero - 10));
      std::cout << character << std::endl;
    }  else {
        std::cout << "No está dentro del intervalo" << std::endl;
    }
}
