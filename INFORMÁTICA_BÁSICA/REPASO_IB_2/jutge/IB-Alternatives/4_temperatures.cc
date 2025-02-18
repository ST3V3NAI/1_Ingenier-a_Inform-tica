/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 4_temperatures.cc
 * @author Steven
 * @date 2025-02-15
 * @brief This program that reads an integer number that represents 
 * a temperature given in degree Celsius, and that tells if the weather 
 * is hot, if it’s cold, or if it’s ok. Suppose that it’s hot if the 
 * temperature is higher than 30 degrees, that it’s cold if the temperature
 *  is lower than 10 degrees, and that it’s ok otherwise. Moreover, warn if 
 * with the given temperature water would boil, or if water would freeze. 
 * Assume that water boils at 100 or more degrees, and that water freezes at 
 * 0 or less degrees.
 * @bug There are no known bugs
*/

#include <iostream> // Para flujos de entrada

int main() {
  int temperatura{0};

  std::cin >> temperatura; 

  if(temperatura > 30) {
    std::cout << "it's hot" << std::endl;
    if(temperatura >= 100) {
    std::cout << "water would boil" << std::endl;
    }
  } else if(temperatura >= 10 && temperatura <= 30) {
      std::cout << "it's ok" << std::endl;
  } else if (temperatura < 10) {
    std::cout << "it's cold" << std::endl;
    if(temperatura < 0) {
      std::cout << "water would freeze" << std::endl;
    }
  }

  return 0; 
}
