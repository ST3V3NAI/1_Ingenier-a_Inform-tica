/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file equilateral.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Programa que al el valor minimo, maximo y su diferencia te va transformando los grados
  * @bug There are no known bugs
  */

#include "complex_number.h"

/**
 * @brief Function that explains the purpose of the program 
 * 
 */
void PrintProgramPurpose() {
   std::cout << "This program does a amount a complex operations with two complex numbers defined" << std::endl << std::endl;
}

/**
 * @brief Function that checks if  the parameters given are the correct ones
 * @param[in] argc integer that indicates the number of arguments passed to the program through the comand line
 * @param[in] argv an array of pointers of characters, every element of an array points to a chain of one the arguments passed to the program
 * @param[in] kCorrectNumber Correct number of the arguments of the program
 * @return true 
 * @return false 
 */

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 1) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0]  << std::endl;
    return false;
  }
  return true;
}

/**
 * @brief Constructor of the class
 * @param[in] real Real part
 * @param imaginary Imaginary part
 */

ComplexNumber::ComplexNumber(double real, double imaginary) : 
                             real_{real}, imaginary_{imaginary} {}

/** 
 * @brief Sign change operator
 * @return Complex number with the sign changed
 */
ComplexNumber ComplexNumber::operator-() const {
  return ComplexNumber{-real_, -imaginary_};
}

/** 
 * @brief Calculation of the conjugate of the complex number
 * @return Conjugate of the complex number
 */
ComplexNumber ComplexNumber::Conjugate() const {
  return ComplexNumber{real_, -imaginary_};
}

/**
 * @brief Calculation of the reverse of the complex number
 * @return ComplexNumber 
 */
ComplexNumber ComplexNumber::Reverse() const {
  double square_modulus{real_ * real_ + imaginary_ * imaginary_};
  return Conjugate() / square_modulus;
}

/**
 * @brief Sum operator of the complex number
 * @param[in] c1 Left sumand
 * @param[in] c2 Right sumand
 * @return Result of the sum
 */
ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2) {
    return ComplexNumber{c1.real() + c2.real(), c1.imaginary() + c2.imaginary()};
}

/**
 * @brief Substract Operator of the complex number
 * @param c1 Minuend
 * @param c2 Sustrahen
 * @return ComplexNumber 
 */
ComplexNumber operator-(const ComplexNumber& c1, const ComplexNumber& c2) {
    return c1 + (-c2);
}

/** 
 * @brief Multiplication Operator of a complex number multiplied with a scalar
 * @param[in] complex Complex Factor
 * @param[in] scalar Scalar Factor
 * @return Result of the rest
 */
ComplexNumber operator*(const ComplexNumber& complex, const double scalar) {
  return ComplexNumber(complex.real() * scalar, complex.imaginary() * scalar);
}

/**
 * @brief Operator of multiplication of complex numbers
 * @param[in] c1 Left factor
 * @param[in] c2 Right Factor
 * @return Multiplication result
 */

ComplexNumber operator*(const ComplexNumber& c1, const ComplexNumber& c2) {
  return ComplexNumber(c1.real() * c2.real() - c1.imaginary() * c2.imaginary(),
                       c1.real() * c2.imaginary() + c2.real() * c1.imaginary());
}

/**
 * @brief Operator of division of a complex number with a scalar
 * @param[in] complex Dividend of the complex number
 * @param[in] scalar Divisor of the scalar
 * @return Quotient of the division
 */
ComplexNumber operator/(const ComplexNumber& complex, const double scalar) {
  return complex * (1.0 / scalar);
}

/**
 * @brief Operator of the division of the complex numbers
 * @param[in] c1 Dividend
 * @param[in] c2 Divisor
 * @return Quotient of the division
 */

ComplexNumber operator/(const ComplexNumber& c1, const ComplexNumber& c2) {
  return c1 * c2.Reverse();
}



/**
 * @brief Insertion Operator of the output stream for the complex numbers
 * @param[out] out Output Stream
 * @param[in] c Complex number
 * @return Reference of the Output Stream
 */
std::ostream& operator<<(std::ostream& out, const ComplexNumber& c) {
  out << '(' << c.real() << ", " << c.imaginary() << ')';
  return out;
}









