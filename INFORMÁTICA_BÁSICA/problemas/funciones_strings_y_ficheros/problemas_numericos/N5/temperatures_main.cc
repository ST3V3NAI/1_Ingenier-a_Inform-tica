/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file temperatures_main.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Implementación de funciones pa transformar los grados
  * @bug There are no known bugs
  */

#include "temperatures.h"
#include <string>
#include <iostream>

int main (int argc, char *argv[]) {
  PrintProgramPurpose();

  if(!CheckCorrectParameters(argc, argv, 4)){
    return 1;
  }

  int principio{} = std::atoi(argv[1]);
  int final{} = std::atoi(argv[2]);
  int diferencia{} = std::atoi(argv{3})
  
  , final{}, diferencia{};

  std::cin >> principio >> final >> diferencia;

  Intervalo(principio, final, diferencia);

  std::cout << "Celsius\n" << FahrenheitToCelcius(principio);

  std::cout << "Absolute" << FahrenheitToAbsolute(principio);

  return 0;
}