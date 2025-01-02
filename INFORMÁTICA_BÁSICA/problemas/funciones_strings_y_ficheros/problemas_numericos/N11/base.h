/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file base.h
 * @author Steven
 * @date 2025-01-02
 * @brief Programa.h es donde declaramos las funciones de nuestro programa base.cc
 * @bug There are no known bugs
*/

#ifndef BASE_H
#define BASE_H

#include <iostream>
#include <algorithm>
#include <vector>

void Usage(int argc, char* argv[]);
std::vector<int> conversiónDeBase(int numero, int base);
void mostrarVector(const std::vector<int>& v);




#endif