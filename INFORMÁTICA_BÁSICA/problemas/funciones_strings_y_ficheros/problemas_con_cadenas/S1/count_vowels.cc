/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file count_vowels.cc
  * @author Steven
  * @date Oct 31 2024
  * @brief 
  * @bug There are no known bugs
  */

#include <iostream>
#include "count_vowels.h"

int main(int argc, char *argv[]){  
  PrintProgramPurpose();
  CheckCorrectParameters(argc, argv, 2);
  std::string text;
  
  std::cin >> text;
  std::getline(std::cin, text, '.');
  CountVowels(text);


  return 0;
}