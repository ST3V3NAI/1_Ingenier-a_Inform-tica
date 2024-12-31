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

#include "acronym.h"
#include <string>
#include <iostream>
#include <cctype>


void PrintProgramPurpose() {
  std::cout << "This program reads a phrase and extract the Initials of it" << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 2) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << " <phrase> " << std::endl;
    return false;
  }
  return true;
}

void Initials(std::string& frase){
  std::getline(std::cin, frase, '.');
    for(char& i : frase){
        if(std::isupper(i)){
            std::cout << i;
        }
    }
}
