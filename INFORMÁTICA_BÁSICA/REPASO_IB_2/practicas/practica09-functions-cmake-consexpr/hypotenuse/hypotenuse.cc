/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file hypotenuse.cc
 * @author Steven
 * @date 2025-03-20
 * @brief Definición de hypotenuse.cc
 * @bug There are no known bugs
*/

#include "hypotenuse.h"

/**
 * @brief Función que calcula la hipotenusa
 * 
 * @param cathethus_1 
 * @param cathethus_2 
 * @return double 
 */
double Hypotenuse(double cathethus_1, double cathethus_2) {
  return (sqrt(pow(cathethus_1, 2) + pow(cathethus_2, 2)));
}