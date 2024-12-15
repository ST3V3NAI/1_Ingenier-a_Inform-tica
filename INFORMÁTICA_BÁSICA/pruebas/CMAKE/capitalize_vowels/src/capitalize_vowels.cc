/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file capitalize_vowels.cc
  * @author Steven
  * @date Nov 11 2024
  * @brief Programa que al darle una frase con minusculas te las pasa a minúsculas
  * @bug There are no known bugs
  */

#include "capitalize_vowels.h"
#include <string>
#include <iostream>

void PrintProgramPurpose() {
   std::cout << "This program that passes lowecase vowels onto uppercase" << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 2) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << " <phrase>" << std::endl;
    return false;
  }
  return true;
}

void CapitalizeVowels(std::string& frase){  
  for(char& i : frase){
    if((i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')){
       i = std::toupper(i);
    }
  }
}