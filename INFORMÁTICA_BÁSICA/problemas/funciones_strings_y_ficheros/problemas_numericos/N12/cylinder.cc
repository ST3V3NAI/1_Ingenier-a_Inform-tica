/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file cylinder.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Programa que al el valor minimo, maximo y su diferencia te va transformando los grados
  * @bug There are no known bugs
  */

#include "cylinder.h"
#include <string>
#include <iostream>


void PrintProgramPurpose() {
   std::cout << "This program calculates the area of a circle, for the given radius. Afer that it`s calculates the volume of the cylinder" << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 3) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << " <radius> <height>" << std::endl;
    return false;
  }
  return true;
}

double CircleArea(int radius){
  double area =  (radius * radius) * M_PI;
  return area; 
}


double CircleVolume(int radius, int height){
    double volume = CircleArea(radius) * height;
    return volume;
}






