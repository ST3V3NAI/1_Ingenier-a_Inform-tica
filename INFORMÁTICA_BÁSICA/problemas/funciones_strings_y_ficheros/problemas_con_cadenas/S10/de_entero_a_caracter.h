/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file power.h
  * @author Steven
  * @date Nov 1 2024
  * @brief Definicion Funciones del programa
  * @bug There are no known bugs
  */


#ifndef DE_ENTERO_A_CARACTER_H
#define DE_ENTERO_A_CARACTER_H

#include <iostream>
#include <vector>
#include <string>

void PrintProgramPurpose();
bool CheckCorrectParameters(int argc, char *argv[], const int kCorrectNumber);
std::string DeIntaChar(const std::vector<int>& numeros);

#endif