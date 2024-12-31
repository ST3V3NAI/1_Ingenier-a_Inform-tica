/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file sentinel.h
 * @author Steven
 * @date 2024-12-31
 * @brief Programa.h en donde de declaran las funciones a usar en sentinel
 * @bug There are no known bugs
 */


#ifndef SENTINEL_H
#define SENTINEL_H

#include <iostream>
#include <string>

void Usage(int argc, char *[]);
bool estaOrdenada(const std::string& cadena);
std::string combinarCadenasOrdenadas(const std::string& cadena1, const std::string& cadena2);

#endif // SENTINEL_H