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
  if(argc != 1) {
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
 * @brief Función que realiza el factorial de un número
 * 
 * @return Resultado del factorial
 */
double ComputeInt::Factorial() const {
  double den_result{1.0};
  double num_result{1.0};

  if(num_ < 0 || den_ < 0) {
    std::cerr << "No se puede hacer el factorial de numeros negativos" << std::endl;
    return -1;
  }

  if(den_ == 0) {
    std::cerr << "Da error porque el numerador no puede estar dividido por 0 " << std::endl;
    return -1;
  }

  for(int i = 1; i <= num_; ++i) {
    num_result *= i;
  }

  for(int j = 1; j <= den_; ++j) {
    den_result *= j;
  }

  return (num_result / den_result);
}

/**
 * @brief Función que hace la suma de la serie del numerador y el denominador
 * 
 * @return el resultado del sumSerie
 */
double ComputeInt::SumSerie() const {
  double den_result{0-0};
  double num_result{0.0};

  if(num_ < 0 || den_ < 0) {
    std::cerr << "No se puede hacer el factorial de numeros negativos" << std::endl;
    return -1;
  }

  if(den_ == 0) {
    std::cerr << "Da error porque el numerador no puede estar dividido por 0 " << std::endl;
    return -1;
  }

  for(int i = 1; i <= num_; i++) {
    num_result += i;
  }

  for(int j = 1; j <= den_; j++) {
    den_result += j;
  }

  return (num_result / den_result);
}

/**
 * @brief Función que verifica que un numero sea primo o no
 * 
 * @param[in] number Número pasado por parametro, para comprobar su primalidad 
 * @return[out] true Si es primo 
 * @return[out] false Si no es primo
 */
bool ComputeInt::IsPrimeNumber(int number) {
  if(number <= 1) return false;
  for(int i = 2; i * i <= number; ++i) {
    if(number % i == 0) return false;
  }
  return true;
}


/**
 * @brief Función que comprueba si el numerador o el denominador es primo
 * 
 */
void ComputeInt::IsPrime() {
  if(IsPrimeNumber(num_)) {
    std::cout << "El numerador: " << num_ << " es primo. " << std::endl;
  } else {
    std::cout << "El numerador: " << num_ << " no es primo. " << std::endl;
  }

  if(IsPrimeNumber(den_)) {
    std::cout << "El denominador: " << den_ << " es primo. " << std::endl;
  } else {
    std::cout << "El denominador: " << den_ << " no es primo. " << std::endl; 
  }
}

void ComputeInt::AreRelativesPrimes(ComputeInt other) {
  if(std::gcd(static_cast<int>(den_), static_cast<int>(other.den_)) == 1) {
    std::cout << "Son primos relativos. " << std::endl; 
  } else {
    std::cout << "No son primos relativos. " << std::endl; 
  }
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





