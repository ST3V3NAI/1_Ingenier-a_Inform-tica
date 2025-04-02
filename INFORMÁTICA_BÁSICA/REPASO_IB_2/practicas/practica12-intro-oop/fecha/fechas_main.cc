/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file fechas_main.cc
 * @author Steven
 * @date 2025-03-30
 * @brief Programa cliente
 * @bug There are no known bugs
*/

#include "fechas.h"

int main() {
  Fecha obj1{30, 3, 2025}; 

  obj1.ShowDates(); 
  if(obj1.BisiestoONo(2025) == 0) {
    std::cout << "No es bisiesto el año" << std::endl; 
  } else {
    std::cout << "Es bisiesto el año" << std::endl; 
  }
}