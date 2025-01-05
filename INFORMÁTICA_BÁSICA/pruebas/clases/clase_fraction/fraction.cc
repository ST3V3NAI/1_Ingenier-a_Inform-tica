/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file fraction.cc
 * @author Steven
 * @date 2025-01-05
 * @brief Programa que realiza operaciones con fracciones
 * @bug There are no known bugs
*/

#include "fraction.h"

/**
 * @brief Function that explains the purpose of the program 
 * 
 */
void Usage(int argc, char *argv[]) {
  if (argc != 1) {
    std::cout << argv[0] << " Usage: " << argv[0] << " <(Fraction1)> <(Fraction2)>" << std::endl;
    std::cout << "It will return the fraction in the form of <Numerator>/<Denominator>" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
    if (parameter == "--help") {
      const std::string hHelpText = "This program will return the fraction in the form of <Numerator>/<Denominator>";
      std::cout << hHelpText << std::endl;
      exit(EXIT_SUCCESS);
    }
}

/* Constructor of the class Fraction */
Fraction::Fraction(int numerator, int denominator) : numerator_{numerator}, denominator_{denominator} {}

/* Sign change operator */
Fraction Fraction::operator-() const {
  return Fraction{-numerator_, denominator_};
}

/* Operator of the sum of the fractions */
Fraction operator+(const Fraction& f1, const Fraction& f2) {
  return Fraction{f1.getNumerator() * f2.getDenominator() + f2.getNumerator() * f1.getDenominator(),
                  f1.getDenominator() * f2.getDenominator()};
}

/* Operator of the subtraction of the fractions */
Fraction operator-(const Fraction& f1, const Fraction& f2) {
  return f1 + -f2;
}

/* Operator of the multiplication of the fractions */
Fraction operator*(const Fraction& f1, const Fraction& f2) {
  return Fraction{f1.getNumerator() * f2.getNumerator(), f1.getDenominator() * f2.getDenominator()};
}


/* Operator of the division of the fractions */
Fraction operator/(const Fraction& f1, const Fraction& f2) {
  return Fraction{f1.getNumerator() * f2.getDenominator(), f1.getDenominator() * f2.getNumerator()};
}

/* Operator of the comparison of the fractions */
bool operator==(const Fraction& f1, const Fraction& f2) {
  return f1.getNumerator() / f1.getDenominator() == f2.getNumerator() / f2.getDenominator();
}

/* Operator of the output of the fractions */
std::ostream& operator<<(std::ostream& out, const Fraction& f) {
  out << f.getNumerator() << '/' << f.getDenominator();
  return out;
}



