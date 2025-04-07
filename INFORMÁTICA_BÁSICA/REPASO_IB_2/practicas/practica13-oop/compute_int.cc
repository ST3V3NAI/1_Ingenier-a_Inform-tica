/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file compute_int.cc
 * @author Steven
 * @date 2025-04-07
 * @brief Implementación de la función Usage y la Clase ComputeInt
 * @bug There are no known bugs
 */

#include "compute_int.h"

void Usage(int argc, char* argv[]) {
  if(argc != 3) {
    std::cerr << "This program has been execute with wrong parameters" << std::endl;
    std::cout << "Try to type: " << argv[0] << "--help for more information about the problem" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "This program just need to follow this structure: <./executable> <num> <den>, to work correctly";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

/**
 * @brief Setter del denominador
 * 
 * @param [in] denominator Denominador de la fracción
 * @return Valor del denominador
 */
double ComputeInt::setDenominator(double denominator) {
  den_ = denominator;
  return den_;
}

/**
 * @brief Setter del nuemrador
 * 
 * @param[in] numerator Numerador de la fracción
 * @return Valor de numerador
 */
double ComputeInt::setNumerator(double numerator) {
  num_ = numerator;
  return num_;
}

/**
 * @brief Getter del deniminador
 * 
 * @return Valor del denominador
 */
double ComputeInt::getDenominator() const {
  return den_;
}

/**
 * @brief Getter del numerador
 * 
 * @return Valor del numerador
 */
double ComputeInt::getNumerator() const {
  return num_;
}

double ComputeInt::Value() const {
  return (num_ / den_);
}

/**
 * @brief Función Recursiva que realiza el factorial del un número
 * 
 * @param[in] number Numero al que le realizamos el factorial 
 * @return Resultado del factorial
 */
double ComputeInt::Factorial() const {
  double value = Value();
  double result{1.0};

  for(int i = 0; i < value; ++i) {
    if(value == 1.0) {
      return 1;
    } else {
      result *= value; 
    }
  }
  return value; 
}

/**
 * @brief Sobrecarga del operador << 
 * 
 * @param[in] os Flujo de Salida 
 * @param[in] other Objeto de la clase
 * @return Retornamos os
 */
std::ostream& operator<<(std::ostream& os, const ComputeInt& other) {
  os << other.num_ << " / " << other.den_;
  return os;
}

/**
 * @brief Sobrecarga del operador >>
 * 
 * @param[in] is Flujo de entrada
 * @param[in] other Objeto de la clase
 * @return Retornamos is
 */
std::istream& operator>>(std::istream& is, ComputeInt& other) {
  is >> other.num_;
  return is;

  is >> other.den_;
  return is; 
}





