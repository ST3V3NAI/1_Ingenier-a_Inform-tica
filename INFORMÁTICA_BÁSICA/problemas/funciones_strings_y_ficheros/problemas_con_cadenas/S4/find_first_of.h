/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file find_first_of.h
 * @author Steven
 * @date 2024-12-29
 * @brief This is the definition of the functions we are going to use for find_first_program
 * @bug There are no known bugs
*/

#ifndef FIND_FIRST_OF
#define FIND_FIRST_OF

#include <iostream> // Para flujos de entrada y salida
#include <string>  // Para strings

void Usage(int argc, char *[]);
int FindFirstOf(const std::string& phrase, char character);

#endif // FIND_FIRST_OF