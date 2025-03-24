/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file vowels_and_consonants_main.cc
 * @author Steven
 * @date 2025-03-22
 * @brief Programa cliente de vowels and consonants
 * @bug There are no known bugs
*/

#include "vowels_and_consonants.h"

int main(int argc, char *argv[]) {
  if(!CheckCorrectParameters(argc, argv, 2)) {
    return 1; 
  }

  std::ifstream archivo(argv[1]);

  if(!archivo.is_open()) {
    std::cerr << "Error al abrir el fichero" << std::endl;
    return 1;
  }

  PrintProgramPurpose(); 

  int vocales = ContadorDeVocales(archivo);

  archivo.clear();
  archivo.open(0, std::ios_base::in);

  int consonantes = ContadorDeConsonantes(archivo);

  archivo.close();

  std::cout << "Consonantes: " << consonantes << std::endl; 
  std::cout << "Vocales: " << vocales << std::endl;

  return 0; 
}