/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file complejos.cc
 * @author Steven
 * @date 2025-04-06
 * @brief Definición de la clase Complejos y función Usage
 * @bug There are no known bugs
 */

#include "complejos.h"

/**
 * @brief Esta función se encarga de ver si el programa funciona con los párametros correctos
 * 
 * @param[in] argc Número de cadenas pasadas por el usuario
 * @param[in] argv Matriz de chars argumentos
 */
void Usage(int argc, char* argv[]) {
  if(argc != 5) {
    std::cerr << "This program has been executed with an incorrect number of parameters\n";
    std::cout << "Try to type: " << argv[0] << " --help" << std::endl; 
    exit(EXIT_SUCCESS);
  } 
  std::string parameter{argv[1]};
  if(parameter == "--help") {
    const std::string hHelpText = "This program need to follow this structure: <first_complex_number(r,i)> <second_complex_number(r,i)";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);  
  }
}

/**
 * @brief Setter del valor real del número complejos 
 * 
 * @param[in] r Número Real
 * @return Valor de número real
 */
double Complejo::setReal(double r) {
  real_ = r;
  return real_;
}

/**
 * @brief Setter del valor imaginario
 * 
 * @param[in] i Número Imaginario
 * @return Valor del número imaginario
 */
double Complejo::setImaginary(double i) {
  imaginary_ = i;
  return imaginary_; 
}

/**
 * @brief Sobrecarga del operador de extracción
 * 
 * @param[in] os 
 * @param[in] other Otro objeto de la clase 
 * @return 
 */
std::ostream& operator<<(std::ostream& os, const Complejo& other) {
  os << "(" << other.real_ << ", " << other.imaginary_ << ") " << std::endl;
  return os; 
}

/**
 * @brief Sobrecarga del operador de inserción
 * 
 * @param[in] is 
 * @param[in] other Otro objeto de la clase 
 * @return  
 */
std::istream& operator>>(std::istream& is, Complejo& other) {
  std::cout << "Parte Real? ";
  is >> other.real_;

  std::cout << "Parte Imaginaria? ";
  is >> other.imaginary_; 

  return is; 
}

/**
 * @brief Sobrecarga del operador '+' 
 * 
 * @param[in] other Otro Objeto de la clase 
 * @return Suma de los números racionales 
 */
Complejo Complejo::operator+(const Complejo& other) const {
  return Complejo(real_ + other.real_, imaginary_ + other.imaginary_);
}

/**
 * @brief Sobrecarga del operador '-' 
 * 
 * @param[in] other Otro Objeto de la clase
 * @return Resta de los números racionales
 */
Complejo Complejo::operator-(const Complejo& other) const {
  return Complejo(real_ - other.real_, imaginary_ - other.imaginary_);
}




