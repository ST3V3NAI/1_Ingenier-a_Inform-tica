/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file power.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Programa que al introducirle la base y el exponente de la el resultado
  * @bug There are no known bugs
  */

#include "power.h"
#include <string>
#include <iostream>


void PrintProgramPurpose() {
  std::cout << "This program calculates the base and the power you put to the number" << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 3) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << "<base> <exponente>" << std::endl;
    return false;
  }
  return true;
}


double Power(double base, double exponente){
  long double result{1.0};
/*    
    long double result = pow(base, exponente);
*/
  for (int i = 0; i < exponente; i++) {
    result *= base;
  }

    return result;
}
