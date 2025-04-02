/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file fechas.h
 * @author Steven
 * @date 2025-03-30
 * @brief Declaración de fechas
 * @bug There are no known bugs
*/

#ifndef FECHAS_H
#define FECHAS_H

#include <iostream>

class Fecha {
  public: 
    // Constructor Parametrizado
    Fecha(int d, int m, int a) : mes_{m}, año_{a}, dia_{d} {}
    // Destructor
    ~Fecha() {}

    void ShowDates() const {
      std::cout << dia_ << "/" << mes_ << "/" << año_ << std::endl; 
    }

    bool BisiestoONo(int a);



  private: 
    int mes_, año_, dia_; 
}; 



#endif // FECHAS_H