/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file base_main.cc
 * @author Steven
 * @date 2025-01-02
 * @brief Descripción del programa
 * @bug There are no known bugs
 */

#include "base.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv); 

  int numero = std::atoi(argv[1]);
  int base = std::atoi(argv[2]);

  std::vector<int> restos = conversiónDeBase(numero, base);
  mostrarVector(restos);


 
  return 0;
}