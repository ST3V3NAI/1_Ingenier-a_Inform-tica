/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file complejos_main.cc
 * @author Steven
 * @date 2025-04-06
 * @brief Programa cliente de la clase Complejos
 * @bug There are no known bugs
 */

#include "complejos.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  double real_1 = std::atoi(argv[1]);
  double imaginary_1 = std::atoi(argv[2]);

  double real_2 = std::atoi(argv[3]);
  double imaginary_2 = std::atoi(argv[4]); 


  Complejo complex1{real_1, imaginary_1};
  Complejo complex2{real_2, imaginary_2}; 

  std::cout << "Suma: " << complex1 + complex2;
  std::cout << "Resta: " << complex1 - complex2; 

}