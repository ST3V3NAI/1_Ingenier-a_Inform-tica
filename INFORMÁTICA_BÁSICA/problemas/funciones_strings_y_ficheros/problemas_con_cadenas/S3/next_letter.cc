
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file acronym.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Programa que al introducirle palabras con Inicial en mayúsucla, te deja por pantalla las Iniciales
  * @bug There are no known bugs
  */

#include "next_letter.h"
#include <string>
#include <iostream>
#include <cctype>


void PrintProgramPurpose() {
  std::cout << "This program reads a phrase and prints out the next words alphabetically of each word of the phrase" << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 2) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << " <phrase> " << std::endl;
    return false;
  }
  return true;
}


void NextLetter(std::string& frase){
    for(char& i : frase){
        i += 1;
    }

    std::cout << frase << std::endl;
}
