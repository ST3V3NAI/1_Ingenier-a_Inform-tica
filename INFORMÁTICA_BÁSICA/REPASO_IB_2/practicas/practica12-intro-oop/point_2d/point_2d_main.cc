/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file point_2d_main.cc
 * @author Steven
 * @date 2025-03-30
 * @brief Programa cliente de Point2D
 * @bug There are no known bugs
*/

#include "point_2d.h"

int main(int argc, char *argv[]) {
  Usage(argc, argv); 
  
  double coordinate_x = std::atoi(argv[1]);
  double coordinate_y = std::atoi(argv[2]);
  Point2D obj1(coordinate_x, coordinate_y); 

  obj1.Show(); 
  obj1.Move(5.0, 8.0); 
  obj1.MiddlePoint(5.0, 8.0);

  return 0; 
}