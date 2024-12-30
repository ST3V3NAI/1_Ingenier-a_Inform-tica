/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file switch_case.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Implementación de funciones para manejar y convertir frases a mayúsculas o minúsculas
  *        en función de su estado inicial.
  * @bug There are no known bugs
  */

#include "switch_case.h"
#include <string>
#include <iostream>


void PrintProgramPurpose() {
  std::cout << "This program reads a phrase and turn it to lowercase or uppercase" << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 2) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << "phrase" << std::endl;
    return false;
  }
  return true;
}

void UpLower(std::string& frase){
    for(char& i : frase){
        if(std::isupper(i)){
            i = std::tolower(i);
        } else {
            i = std::toupper(i);
        }
    }
}

