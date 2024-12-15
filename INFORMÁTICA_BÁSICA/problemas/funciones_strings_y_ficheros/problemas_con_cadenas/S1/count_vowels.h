/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file count_vowels.h
  * @author Steven
  * @date Oct 31 2024
  * @brief 
  * @bug There are no known bugs
  */

#include <iostream>
#include <string>

void PrintProgramPurpose() {
  std::cout << "This program after you have introduced a number, its displays which digit is bigger and smaller." << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 2) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << "phrase" << std::endl;
    return false;
  }
  return true;
}

void CountVowels(const std::string& text) {
    int contador{};

    for(char i : text){
        if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' || i == 'A' || i == 'E' || i == 'I' ||  i == 'O' || i == 'U'){
            contador++;
        }
    }

    std::cout << contador << std::endl;
}
