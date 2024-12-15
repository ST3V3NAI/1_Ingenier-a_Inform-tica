
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file precedence.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Programa que al introducirle dos palabras, te dice cual le precede alfabeticamente
  * @bug There are no known bugs
  */

#include "precedence.h"
#include <string>
#include <iostream>
#include <cctype>


void PrintProgramPurpose() {
  std::cout << "This program reads 2 words and prints out the phrase that its alphatically bigger" << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 3) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << " <word1> <word2> " << std::endl;
    return false;
  }
  return true;
}


void Precedence(std::string& palabra, std::string& palabra2){
   if(palabra > palabra2){
     std::cout << palabra << std::endl;
   } else {
     std::cout << palabra2 << std::endl;
   }
}
