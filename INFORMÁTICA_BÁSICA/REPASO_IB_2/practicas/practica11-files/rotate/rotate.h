/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file rotate.h
 * @author Steven
 * @date 2025-03-23
 * @brief Declaración de rotate_vocwels
 * @bug There are no known bugs
*/

#ifndef ROTATE_H
#define ROTATE_H

#include <iostream>
#include <fstream> // Para manejar ficheros de texto
#include <string> //  Para string

void PrintProgramPurpose();
bool CheckCorrectParameters(int argc, char *argv[], const int kCorrectNumber = 2);
char RotateLowerCaseVowels(char character); 
std::string transformarTexto(const std::string& texto); 
void ProcesarArchivo(std::ifstream& archivoEntrada, std::ofstream& archivoSalida); 




#endif