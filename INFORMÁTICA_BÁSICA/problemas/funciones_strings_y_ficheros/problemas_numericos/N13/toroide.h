/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file toroide.h
  * @author Abolaji Ibidokun Steven alu0101619613@ull.edu.es
  * @date Nov 11 2024
  * @brief Definicion de las funciones del programa
  * @bug There are no known bugs
  */


#ifndef TOROIDE_H
#define TOROIDE_H

#include <cmath>
#include <iostream>

void PrintProgramPurpose();
bool CheckCorrectParameters(int argc, char *argv[], const int kCorrectNumber);
double Length(double radius);
double Area(double radius);
double Volume(double radius_1, double radius_2);

#endif