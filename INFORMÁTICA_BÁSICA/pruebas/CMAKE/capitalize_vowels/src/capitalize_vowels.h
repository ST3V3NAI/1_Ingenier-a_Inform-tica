/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file capitalize_vowels.h
  * @author Steven
  * @date Nov 11 2024
  * @brief Definicion Funciones del programa
  * @bug There are no known bugs
  */


#ifndef CAPITALIZE_VOWELS_H
#define CAPITALIZE_VOWELS_H

#include <string>

void PrintProgramPurpose();
bool CheckCorrectParameters(int argc, char *argv[], const int kCorrectNumber);
void CapitalizeVowels(std::string& frase);
#endif