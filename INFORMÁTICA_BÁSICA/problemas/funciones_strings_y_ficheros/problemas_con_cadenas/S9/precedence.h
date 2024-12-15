/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file precedence.h
  * @author Steven
  * @date Nov 1 2024
  * @brief Funciones del programa
  * @bug There are no known bugs
  */


#ifndef PRECEDENCE_H
#define PRECEDENCE_H

#include <string>

void PrintProgramPurpose();
bool CheckCorrectParameters(int argc, char *argv[], const int kCorrectNumber);
void Precedence(std::string& palabra, std::string& palabra2);

#endif