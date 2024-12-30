/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file coeficiente_binomial_main.cc
 * @author Steven
 * @date 2024-12-30
 * @brief La función main del programa coeficiente_binomial
 * @bug There are no known bugs
*/

#include "coeficiente_binomial.h"

int main(int argc, char* argv[]){
  Usage(argc, argv);

  int number_n = std::atoi(argv[1]);
  int number_k = std::atoi(argv[2]);

  std::cout << CalculoCoeficienteBinomial(number_n, number_k);

  return 0;
}