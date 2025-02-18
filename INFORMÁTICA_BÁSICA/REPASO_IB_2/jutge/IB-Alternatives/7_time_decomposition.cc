/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 7_time_decomposition.cc
 * @author Steven
 * @date 2025-02-15
 * @brief Write a program that, given a number 
 * of seconds n, prints the number of hours, minutes and seconds represented by n.
 * @bug There are no known bugs
*/

#include <iostream>

int main() {
  int amount_of_seconds{0}, hours{0}, minutes{0}, seconds{0};

  std::cin >> amount_of_seconds;
 
  hours = (amount_of_seconds / 3600); // Calcula horas dividiendo entre 3600 (3600s = 1h)
  minutes = (amount_of_seconds % 3600) / 60; // Calcula minutos con el residuo de horas, luego divide entre 60
  seconds = ((amount_of_seconds % 3600) % 60); // Obtiene los segundos restantes después de horas y minutos

  std::cout << hours << " " << minutes << " " << seconds << std::endl; 

  return 0;
}