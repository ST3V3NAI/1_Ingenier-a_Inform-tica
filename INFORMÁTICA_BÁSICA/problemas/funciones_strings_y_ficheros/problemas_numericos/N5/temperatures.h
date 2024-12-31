/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file temperatures.h
  * @author Steven
  * @date Nov 1 2024
  * @brief Definicion Funciones del programa
  * @bug There are no known bugs
  */


#ifndef TEMPERATURES_H
#define TEMPERATURES_H

#include <iostream>
#include <iomanip>

void Usage(int argc, char* argv[]);
double FahrenheitToCelsius(double temperature);
double FahrenheitToAbsolute(double temperature);
void PrintTableOfTemperatures(int min_temp, int max_temp, int difference);

#endif