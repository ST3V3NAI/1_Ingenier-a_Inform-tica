/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2024-2025
*
* @file toroide.cc
* @author Abolaji Ibidokun Steven alu0101619613@ull.edu.es
* @date 13-11-24
* @brief This is a program that
* @bug There are no known bugs
* @see
*/

#include <iostream>
#include "toroide.h"


/// @brief Function that prints the purpose of the program
void PrintProgramPurpose() {
   std::cout << "This program calculates the area of a circle, for the given radius. Afer that it`s calculates the volume of the cylinder" << std::endl << std::endl;
}

/** @brief Function that revise if the number of params given are correct
 * @param argc 
 * @param argv 
 * @param kCorrectNumber 
 * @return true or false
**/
bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 3) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << "<radius1> <radius2>" << std::endl;
    return false;
  }
  return true;
}

/** 
* @brief Function that calculates the length of the radius
* @param kPi constant variable as the number pi
* @param radius input given by the user
* @return the length of the circunference
**/
double Length(double radius) {
  double length = (2 * M_PI) * radius;
  return length;
}

/**
* @brief Function that calculates the area of the radius
* @param kPi constant variable as the number pi
* @param radius input given by the user
* @return the area of the circunference
*/
double Area(double radius) {
  double area = M_PI * (radius * radius);
  return area;
}

/**
*@brief Function that calculates the volume of a toroid
* @param radius_1 first radius given by the user
* @param radius_2 second radius given by the user
* @return the volume of the toroid
*/

double Volume(double radius_1, double radius_2) {
    if (radius_1 > radius_2) {
    double result = Length(radius_1) * Area(radius_2);
    return result;
    } else {
    double result = Length(radius_2) * Area(radius_1);
    return result;
   }
}
