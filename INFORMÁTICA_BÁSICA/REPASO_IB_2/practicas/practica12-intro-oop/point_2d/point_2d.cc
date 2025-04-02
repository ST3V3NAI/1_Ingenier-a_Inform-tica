/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file point_2d.cc
 * @author Steven
 * @date 2025-03-30
 * @brief Definición de la clase Point2d
 * @bug There are no known bugs
*/

#include "point_2d.h"

void Usage(int argc, char *argv[]) {
  if(argc != 3) {
    std::cerr << "The porgram has been executed with the incorrect parameters" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information" << std::endl; 
    exit(EXIT_SUCCESS); 
  }
  std::string parameter{argv[1]}; 
  if(parameter == "--help") {
    const std::string hHelpText = "This program no need any input to be executed";
    std::cout << hHelpText << std::endl; 
    exit(EXIT_SUCCESS);
  }
}

void Point2D::Move(double new_coordinate_x, double new_coordinate_y) const {
  std::cout << "Tu vector inicial se ha movido a la posición: ( " << new_coordinate_x << ", " << new_coordinate_y << " )" << std::endl;   
}

void Point2D::MiddlePoint(double new_coordinate_x, double new_coordinate_y) const {
  std::cout << "El punto medio entre (" << coordinate_x_ << ", " << coordinate_y_ << " ) y (" << new_coordinate_x << ", " << new_coordinate_y << ") es: "; 
  std::cout << "( " << ((coordinate_x_ + new_coordinate_x) / 2) << ", " << ((coordinate_y_ + new_coordinate_y) / 2) << " )" << std::endl; 
}




