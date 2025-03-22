/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file generate_vector.h
 * @author Steven
 * @date 2025-03-20
 * @brief Declaración de GenerateVector
 * @bug There are no known bugs
*/

#ifndef GENERATE_VECTOR_H
#define GENERATE_VECTOR_H

#include <iostream>
#include <vector>
#include <cstdlib> // Para rand
#include <ctime> // para rand
#include <limits> // Para infnito

std::vector<double> GenerateVector(const int size, const double lower, const double upper);
double ReduceSum(std::vector<double> v);
void CalculateMaxMinProm(std::vector<double> v);

#endif // GENERATE_VECTOR_H