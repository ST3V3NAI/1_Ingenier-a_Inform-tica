/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file compare.cc
  * @author Steven
  * @date Oct 31 2024
  * @brief This program compares two txt files and says if they are the same or different
  * @bug There are no known bugs
  */

#include <iostream>
#include <fstream>
#include <string>

void PrintProgramPurpose() {
  std::cout << "This program compares two txt files and says if they are the same or different." << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 3) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << " <fichero1.txt> <fichero2.txt>" << std::endl;
    return false;
  }
  return true;
}

bool compararArchivos(const std::string& archivo1, const std::string& archivo2) {
    std::ifstream file1(archivo1);
    std::ifstream file2(archivo2);

    if (!file1.is_open() || !file2.is_open()) {
        std::cerr << "Error al abrir uno o ambos archivos." << std::endl;
        return false;
    }

    std::string linea1, linea2;
    // Comparamos línea por línea
    while (std::getline(file1, linea1) && std::getline(file2, linea2)) {
        if (linea1 != linea2) {
            return false;  // Si una línea es diferente, los archivos no son iguales
        }
    }

    // Verificamos si ambos archivos llegaron al final
    if ((file1.eof() && !file2.eof()) || (!file1.eof() && file2.eof())) {
        return false;  // Si uno tiene líneas extra, no son iguales
    }

    return true;  // Si todas las líneas coinciden y tienen la misma longitud, son iguales
}

int main(int argc, char *argv[]) {
  PrintProgramPurpose();

  if (!CheckCorrectParameters(argc, argv)) {
    return 1;
  }

  std::string archivo1 = argv[1];
  std::string archivo2 = argv[2];

  if (compararArchivos(archivo1, archivo2)) {
    std::cout << "Los archivos son iguales." << std::endl;
  } else {
    std::cout << "Los archivos son diferentes." << std::endl;
  }

  return 0;
}
