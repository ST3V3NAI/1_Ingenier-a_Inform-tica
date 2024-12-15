/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file pitagorica.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Programa que al introducirle tres numeros posotivos, te dice si cumplen con la relación de a^2 + b^2 = c^2
  * @bug There are no known bugs
  */

#include "pitagorica.h"
#include <string>
#include <iostream>
#include <cmath>


void PrintProgramPurpose() {
  std::cout << "This program tells you if the following 3 numbers have a pitagoric relationshin" << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 4) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << "a b c" << std::endl;
    return false;
  }
  return true;
}

void Pitagorica(int number_a, int number_b, int number_c){

  if(sqrt(pow(number_a,2)+pow(number_b,2)) == number_c){
    std::cout << number_a << " " << number_b << " " << number_c << " es una terna pitagórica" << std::endl;
  } else {
    std::cout << number_a << " " << number_b << " " << number_c << " no es una terna pitagórica" << std::endl;
  }
}


