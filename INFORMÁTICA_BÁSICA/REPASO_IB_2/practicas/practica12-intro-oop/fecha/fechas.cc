/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file fechas.cc
 * @author Steven
 * @date 2025-03-30
 * @brief Definición de la Clase
 * @bug There are no known bugs
 */

#include "fechas.h"

bool Fecha::BisiestoONo(int a) {
  return((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)); 
}