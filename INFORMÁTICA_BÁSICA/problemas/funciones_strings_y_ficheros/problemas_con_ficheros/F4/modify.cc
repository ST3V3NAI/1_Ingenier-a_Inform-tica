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
  std::cout << "This program take for parameters a file.txt another file and a word and erase it from the first file and put it in the other." << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 4) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << " <ficheroEntrada.txt> <ficheroSalida.txt> <palabra>" << std::endl;
    return false;
  }
  return true;
}

void EliminarPalabraFichero(const std::string& palabra, const std::string& ficheroEntrada, const std::string& ficheroSalida) {
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

    std::string frase;
    while(getline(archivoEntrada, frase)) {
        size_t pos = 0;
        while ((pos = frase.find(palabra,pos)) != std::string::npos){
            frase.erase(pos, palabra.length());
        }

        archivoSalida << frase << std::endl;
    }

    archivoEntrada.close();
    archivoSalida.close();
} 



int main(int argc, char *argv[]) {
  PrintProgramPurpose();

  if (!CheckCorrectParameters(argc, argv, 4)) {
    return 1;
  }

  std::string archivoEntrada = argv[1];
  std::string archivoSalida = argv[2];
  std::string palabra = argv[3];

  EliminarPalabraFichero(palabra, archivoEntrada, archivoSalida);

  return 0;
}
