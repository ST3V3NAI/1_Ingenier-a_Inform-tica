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

#include <string>

void PrintProgramPurpose();
bool CheckCorrectParameters(int argc, char *argv[], const int kCorrectNumber);
std::string Intervalo(int principio, int final, int diferencia);
double FahrenheitToCelcius(double fahrenheit);
double FahrenheitToAbsolute(double fahrenheit);

#endif