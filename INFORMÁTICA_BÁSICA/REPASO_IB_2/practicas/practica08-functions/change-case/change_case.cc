/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file change-case.cc
 * @author Steven
 * @date 2025-03-15
 * @brief Implementación de la función change-case
 * @bug There are no known bugs
*/

#include "change_case.h"

/**
 * @brief Función que cambia de un palabra sus mayúscula y minúsulas
 * 
 * @param word 
 * @return std::string 
 */
void ChangeCase(std::string &word) {
  for(char &i : word) {
    if(i = std::isupper(i)){
      i = std::tolower(i);
    } else {
      i = std::toupper(i);
    }
  }
}