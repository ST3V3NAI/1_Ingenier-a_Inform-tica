/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file F1_source_print.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 28 2024
  * @brief Write a program that makes the fucntion of cat
  * in lowercase if it was uppercase, or prints it in uppercase if it was lowercase.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <fstream>
#include <string>

void PrintProgramPurpose() {
  std::cout << "This program do the same function of cat in Linux" << std::endl << std::endl;
}


bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 0) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters" << std::endl << std::endl;
    std::cout << "This program should be called" << argv[0] << " ./F1_source_print " << std::endl;
    return false;
  }
  return true;
}


int main() {
  PrintProgramPurpose();
    std::string linea;
    std::ifstream fichero("F1_source_print.cc");
    while (std::getline(fichero, linea)) {
        std::cout << linea << std::endl;
    }
    return 0;
}

