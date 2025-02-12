/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 7_P70955_how_many_seconds_are_they?.cc
 * @author Steven
 * @date 2025-02-10
 * @brief This program converts to seconds a given 
 * amount of years, days, hours, minutes and seconds.
 * @bug There are no known bugs
 */

#include <iostream>

int main() {
  int years{0}, days{0}, hours{0}, minutes{0}, seconds{0};

  std::cin >> years >> days >> hours >> minutes >> seconds;


  seconds = (31536000 * years) + (86400 * days) + (3600 * hours) + (60 * minutes) + (seconds);

  std::cout << seconds << std::endl;

  return 0;
}