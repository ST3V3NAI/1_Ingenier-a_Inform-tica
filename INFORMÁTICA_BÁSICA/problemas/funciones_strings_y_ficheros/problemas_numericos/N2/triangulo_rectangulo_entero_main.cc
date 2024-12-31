/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file traingulo_rectangulo_entero_main.cc
  * @author Steven
  * @date Nov 11 2024
  * @brief Implementación de funciones coger las 3 numeros y ver si tienes semejanza piatgorica
  * @bug There are no known bugs
  */

#include "triangulo_rectangulo_entero.h"
#include <iostream>

int main (int argc, char *argv[]) {
  PrintProgramPurpose();

  if(!CheckCorrectParameters(argc, argv, 1)){
    return 1;
  } else {

    constexpr int kMaximo{15};
    
    for(int i{3}; i <= kMaximo; i++) {
       ImprimeTerna(i);
    }
      return 0;
  }

}