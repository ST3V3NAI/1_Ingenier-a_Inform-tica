/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file toroide_main.cc
  * @author Abolaji Ibidokun Steven
  * @date Nov 11 2024
  * @brief Implementación de funciones pa transformar los grados
  * @bug There are no known bugs
  */

#include "toroide.h"

/**
* @brief Main function of the program
* @param radius_1 first radius given by the user
* @param radius_2 second radius given by the user
* @return the volume of the toroid
*/
int main (int argc, char *argv[]) {
  PrintProgramPurpose();

  if(!CheckCorrectParameters(argc, argv, 3)){
    return 1;
  }

  double radius_1 = std::atoi(argv[1]); 
  double radius_2 = std::atoi(argv[2]);

  std::cout << Volume(radius_1, radius_2) << std::endl;

  return 0;
}