/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file complex_number.h
  * @author Steven
  * @date Nov 28 2024
  * @brief Definicion de la Clase del programa
  * @bug There are no known bugs
  */

#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H

#include <string>
#include <iostream>
#include <iomanip>

void PrintProgramPurpose();
bool CheckCorrectParameters(int argc, char *argv[], const int kCorrectNumber);

/** The complex number class */
class ComplexNumber {
    public:
      ComplexNumber(double real = 0.0, double imaginary = 0.0);
      double real() const { return real_; }
      double imaginary() const { return imaginary_; }
      ComplexNumber operator~() const;
      ComplexNumber Conjugate() const;
      ComplexNumber Reverse() const;
    

    private:
     double real_;
     double imaginary_;
};

ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2);
ComplexNumber operator-(const ComplexNumber& c1, const ComplexNumber& c2);
ComplexNumber operator*(const ComplexNumber& complex, const double scalar);
ComplexNumber operator*(const ComplexNumber& c1, const ComplexNumber c2);
ComplexNumber operator/(const ComplexNumber& complex, const double scalar);
ComplexNumber operator/(const ComplexNumber& c1, const ComplexNumber& c2);
std::ostream& operator<<(std::ostream& out, const ComplexNumber& c);

#endif