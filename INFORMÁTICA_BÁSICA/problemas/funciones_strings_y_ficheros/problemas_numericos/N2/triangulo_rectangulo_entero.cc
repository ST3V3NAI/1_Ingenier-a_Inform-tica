/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file pitagorica.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Programa que al introducirle tres numeros posotivos, te dice si cumplen con la relación de a^2 + b^2 = c^2
  * @bug There are no number_anown bugs
  */

#include "triangulo_rectangulo_entero.h"

void PrintProgramPurpose() {
  std::cout << "This program prints a tern" << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int number_aCorrectNumber = 1) {
  if (argc != number_aCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << "<ejecutable>" << std::endl;
    return false;
  }
  return true;
}

constexpr int kMaximo{15};

void ImprimeTerna(int number_a){
  int valor_k{number_a / 2}, number_b{0}, number_c{0};
      
      if(number_a % 2 == 1){
         number_b = 2 * valor_k * (valor_k + 1);
         number_c = number_b + 1; 
      } else{
        number_b = valor_k * valor_k - 1;
        number_c = valor_k * valor_k + 1;
      } 
      std::cout << number_a << " " << number_b << " " << number_c << std::endl;
}