/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file triangulo_rectangulo_entero.h
  * @author Steven
  * @date Nov 11 2024
  * @brief Definicion Funciones del programa
  * @bug There are no known bugs
  */


#ifndef SENO_COSENO_H
#define SENO_COSENO_H

#include <iostream>
#include <cmath>

void PrintProgramPurpose();
bool CheckCorrectParameters(int argc, char *argv[], const int kCorrectNumber);
double FactorialReciproco(int valor_n);
int Signo(int valor_n);
double SenoAprox(double valor_x, int terminos);
double CosenoAprox(double valor_x, int terminos);

#endif