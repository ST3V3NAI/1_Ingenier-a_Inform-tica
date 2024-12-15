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

#include "min_max.h"

void PrintProgramPurpose() {
  std::cout << "This program after you have introduced a number, its displays which digit is bigger and smaller." << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 3) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << "number number" << std::endl;
    return false;
  }
  return true;
}

void MinimumMaximum(int number_a, int number_b) {
  if(number_a > number_b){
    std::cout << "El dígito mayor es: " << number_a << std::endl;
    std::cout << "El dígito menor es: " << number_b << std::endl;
  } else {
    std::cout << "El dígito mayor es: " << number_b << std::endl;
    std::cout << "El dígito menor es: " << number_a << std::endl;
  }
}