/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file primes.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Programa que al introducirle un entero, te lo descompone en factores primos
  * @bug There are no known bugs
  */

#include "primes.h"
#include <iostream>


void PrintProgramPurpose() {
  std::cout << "This program gives you the primes of a certain number" << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 2) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << " <number> " << std::endl;
    return false;
  }
  return true;
}

void Primes(int numero) {
    if (numero <= 1) {
        std::cout << "No tiene factores primos." << std::endl;
        return;
    }

    std::cout << "Factores primos de " << numero << " son: ";

    while (numero % 2 == 0) {
        std::cout << 2 << " ";
        numero /= 2;
    }

  
    for (int i = 3; i <= std::sqrt(numero); i += 2) {
    
        while (numero % i == 0) {
            std::cout << i << " ";
            numero /= i;
        }
    }

    if (numero > 1) {
        std::cout << numero;
    }

    std::cout << std::endl;
}
