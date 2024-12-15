/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file binary_to_decimal.h
  * @author Steven
  * @date Nov 1 2024
  * @brief Definicion Funciones del programa
  * @bug There are no known bugs
  */


#ifndef BINARY_TO_DECIMAL_H
#define BINARY_TO_DECIMAL_H

#include <iostream>
#include <cmath>

void PrintProgramPurpose();
bool CheckCorrectParameters(int argc, char *argv[], const int kCorrectNumber);
void BinaryToDecimal(const std::string& binario);

#endif