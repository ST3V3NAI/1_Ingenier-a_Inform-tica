/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file part_of.h
  * @author Steven
  * @date Nov 6 2024
  * @brief  Implementación de funciones del programa 
  * @bug There are no known bugs
  */

#ifndef PART_OF_H
#define PART_OF_H

#include <string>

void PrintProgramPurpose();
bool CheckCorrectParameters(int argc, char *argv[], const int kCorrectNumber = 3);
void PartOf(std::string& frase, std::string palabra);

#endif