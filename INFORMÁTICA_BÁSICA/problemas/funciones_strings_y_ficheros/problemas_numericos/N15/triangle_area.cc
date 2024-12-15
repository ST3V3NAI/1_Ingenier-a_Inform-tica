/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file equilateral.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Programa que al el valor minimo, maximo y su diferencia te va transformando los grados
  * @bug There are no known bugs
  */

#include "triangle_area.h"
#include <string>
#include <iostream>
#include <cmath>

void PrintProgramPurpose() {
   std::cout << "This program calculates the area of a circle, for the given radius. Afer that it`s calculates the volume of the cylinder" << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 2) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << "<lado> " << std::endl;
    return false;
  }
  return true;
}

double TriangleArea(int lado){
    double area = (sqrt(3) * pow(lado,2) / 4);
    return area;
}