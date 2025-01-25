/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file my_wc.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 30 2024
  * @brief Write a program that behaves like Unix`s wc
  * @bug There are no known bugs
  * @see 
  */


#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

void PrintProgramPurpose() {
  std::cout << "This program behaves like Unix`s wc" << std::endl << std::endl;
}



bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 1) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters" << std::endl << std::endl;
    std::cout << "This program should be called" << argv[0] << " Quijote.txt " << std::endl;
    return false;
  }
  return true;
}

int main() {
  PrintProgramPurpose();
  std::ifstream fichero("Quijote.txt");
  if(!fichero) {
    std::cerr << "No se pudo abrir el archivo." << std::endl;
    return 1;
  }

  int numLineas{}, numPalabras{}, numCaracteres{};
  std::string lineas; 


  while(std::getline(fichero, lineas)){
    numLineas++;
    numCaracteres += lineas.length();
    
    std::istringstream streamLinea(lineas);
    std::string palabra;
    while (streamLinea >> palabra) {
        numPalabras++;
    }
  }

  fichero.close(); 

  std::cout << "Numero de líneas: " << numLineas << std::endl;
  std::cout << "Numero de palabras: " << numPalabras << std::endl;
  std::cout << "Numero de caracteres: " << numCaracteres << std::endl; 

    return 0;
}