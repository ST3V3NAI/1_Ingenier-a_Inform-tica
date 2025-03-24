/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file vowels-and-consonants.cc
 * @author Steven
 * @date 2025-03-22
 * @brief Definción de las funciones de vowels_and_consonants
 * @bug There are no known bugs
 */

#include "vowels_and_consonants.h"

/**
 * @brief Esta función se encarga de imprimir el funcionamiento del programa
 * 
 */
void PrintProgramPurpose() {
  std::cout << "Este programa imprime por pantalla la palabra con más vocales y la palabra con más consonantes." << std::endl << std::endl; 
}

/**
 * @brief Función que se encarga de ver si los parametros del programa son correctos
 * 
 * @param argc número de strings para programar
 * @param argv array de punteros de strings
 * @param kCorrectNumber Constante de parametros
 * @return true 
 * @return false 
 */
bool CheckCorrectParameters(int argc, char *argv[], const int kCorrectNumber) {
  if(argc != kCorrectNumber) {
    std::cerr << "El programa ha sido ejecutado con un número incorrecto de parámetros\n";
    std::cout << "Siga la siguiente estructura: <ejecutable> <fichero>" << std::endl;
    return false; 
  }
  return true; 
}

int ContadorDeVocales(std::ifstream& archivo) {
  std::string linea; 
  int contador_vocales = 0;
  while(getline(archivo, linea)) {
    for(char& letra : linea) {
      if(letra == 'a' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'e' ||
         letra == 'A' || letra == 'I' || letra == 'O' || letra == 'U' || letra == 'E' ) {
          contador_vocales++;
        } 
      }
    }
  return contador_vocales; 
}

int ContadorDeConsonantes(std::ifstream& archivo) {
  std::string linea; 
  int contador_consonantes = 0;
  while(getline(archivo, linea)) {
    for(char& letra : linea) {
      if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) { // Solo letras
        if (!(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
              letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')) {
            contador_consonantes++;
          }
        }
      }
    }
  return contador_consonantes;
}
