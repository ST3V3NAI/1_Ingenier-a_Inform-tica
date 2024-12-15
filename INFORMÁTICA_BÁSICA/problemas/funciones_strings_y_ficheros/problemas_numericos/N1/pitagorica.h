/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file acronym.h
  * @author Steven
  * @date Nov 1 2024
  * @brief Definicion Funciones del programa
  * @bug There are no known bugs
  */


#ifndef PITAGORICA_H
#define PITAGORICA_H

#include <string>

void PrintProgramPurpose();
bool CheckCorrectParameters(int argc, char *argv[], const int kCorrectNumber);
void Pitagorica(int number_a, int number_b, int number_c);

#endif