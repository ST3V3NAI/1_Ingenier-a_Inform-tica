/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file leap.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Programa que al introducirle una fecha, te dices si es bisiesto o no
  * @bug There are no known bugs
  */

#include "leap.h"
#include <string>
#include <iostream>


void PrintProgramPurpose() {
  std::cout << "This program tells you if the year is leap or not" << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 2) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << "year" << std::endl;
    return false;
  }
  return true;
}

void Leap(int year){

  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    std::cout << year << " es un año bisiesto" << std::endl;
  } else {
    std::cout << year << " no es un año bisiesto" << std::endl;
  }

}


