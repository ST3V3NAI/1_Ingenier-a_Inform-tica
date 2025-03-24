/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file rotate_main.cc
 * @author Steven
 * @date 2025-03-23
 * @brief Programa cliente de Rotate
 * @bug There are no known bugs
*/

#include "rotate.h"
#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
  if(!CheckCorrectParameters(argc, argv, 2)) {
    return 1;
  }

  std::ifstream archivoEntrada(argv[1]); 

  if(!archivoEntrada.is_open()) {
    std::cerr << "Error al abrir el fichero: " << argv[1] << std::endl;
    return 1;
  }

  PrintProgramPurpose();

  std::ofstream archivoSalida("Texto_transformado.txt"); 

  if(!archivoSalida.is_open()) {
    std::cerr << "Error al crear el archivo de salida." << std::endl;
    return 1;
  }

  ProcesarArchivo(archivoEntrada, archivoSalida); 

  archivoEntrada.close();
  archivoSalida.close();

  std::cout << "Proceso completado. Resultado guardado en Texto_transformado.txt" << std::endl;

  return 0; 
}