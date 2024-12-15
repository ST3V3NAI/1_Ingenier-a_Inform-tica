/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file modify.cc
  * @author Steven
  * @date Oct 31 2024
  * @brief This program compares two txt files and says if they are the same or different
  * @bug There are no known bugs
  */

#include <iostream>
#include <fstream>
#include <string>

void PrintProgramPurpose() {
  std::cout << "This program enumerate all the lines of an archive" << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 3) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << " <ficheroEntrada.txt> <ficheroSalida.txt>" << std::endl;
    return false;
  }
  return true;
}

void EnumerarLineasEnArchivo(const std::string& ficheroEntrada, const std::string& ficheroSalida) {
    std::ifstream archivoEntrada(ficheroEntrada);
    std::ofstream archivoSalida(ficheroSalida);

    if(!archivoEntrada) {
        std::cerr << "Error: No se pudo abrir el archivo de entrada." << std::endl;
        return;
    }

    if (!archivoSalida) {
        std::cerr << "Error: No se pudo abrir el archivo de salida" << std::endl;
        return;
    }

    std::string linea;
    int contador = 1;

    while (getline(archivoEntrada, linea)) {
            archivoSalida << contador << ": " << linea << std::endl;
            contador++;
    }


    archivoEntrada.close();
    archivoSalida.close();
} 

int main(int argc, char *argv[]) {
  PrintProgramPurpose();

  if (!CheckCorrectParameters(argc, argv, 3)) {
    return 1;
  }

  std::string archivoEntrada = argv[1];
  std::string archivoSalida = argv[2];

  EnumerarLineasEnArchivo(archivoEntrada, archivoSalida);


  return 0;
}