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

#include "seno_coseno.h"

void PrintProgramPurpose() {
  std::cout << "This program writes the difference between the absulte value of the exact value and the approximated function, due a number of terms and the point of evaluation" << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int number_aCorrectNumber = 3) {
  if (argc != number_aCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << " <valor_x> " " <terminos> " << std::endl;
    return false;
  }
  return true;
}

double FactorialReciproco(int valor_n) {
    int producto{1};
    for (int i{2}; i <= valor_n; i++) {
      producto *= i;
    }
    return 1.0 / producto;
}

int Signo(int valor_n) {
    return (valor_n % 2 == 0) ? 1 : -1;
}

double SenoAprox(double valor_x, int terminos) {
    double sumatorio{0.0};
    for (int i{0}; i < terminos; ++i) {
        sumatorio += Signo(i) * std::pow(valor_x, 2 * i + 1) 
        * FactorialReciproco(2 * i + 1);
    }
    return sumatorio;
}

double CosenoAprox(double valor_x, int terminos) {
    double sumatorio{0.0};
    for (int i{0}; i < terminos; ++i) {
        sumatorio += Signo(i) * std::pow(valor_x, 2 * i) 
        * FactorialReciproco(2 * i);
    }
    return sumatorio; 
}