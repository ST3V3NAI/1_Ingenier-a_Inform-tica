/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file vowels-and-consonants.h
 * @author Steven
 * @date 2025-03-22
 * @brief Declaración de las funciones de vowels-and-consonats
 * @bug There are no known bugs
*/

#ifndef VOWELS_AND_CONSONANTS_H
#define VOWELS_AND_CONSONANTS_H

#include <iostream>
#include <fstream> // Para manejar ficheros
#include <string> // Para manejar strings

void PrintProgramPurpose();
bool CheckCorrectParameters(int argc, char *argv[], const int kCorrectNumber = 2);
int ContadorDeVocales(std::ifstream& archivo); 
int ContadorDeConsonantes(std::ifstream& archivo);

#endif