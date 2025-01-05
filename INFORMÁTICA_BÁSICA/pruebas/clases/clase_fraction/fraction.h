/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file fraction.h
 * @author Steven
 * @date 2025-01-05
 * @brief Definicion de la Clase del programa
 * @bug There are no known bugs
*/


#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

/* Function that explains the purpose of the program */
void Usage(int argc, char *argv[]);

/* Class Fraction */
class Fraction {
  public:
    Fraction(int numerator = 0, int denominator = 1);
    int getNumerator() const { return numerator_; }
    int getDenominator() const { return denominator_; }
    Fraction operator-() const;

    friend Fraction operator+(const Fraction& f1, const Fraction& f2);
    friend Fraction operator-(const Fraction& f1, const Fraction& f2);
    friend Fraction operator*(const Fraction& f1, const Fraction& f2);
    friend Fraction operator/(const Fraction& f1, const Fraction& f2);
    friend bool operator==(const Fraction& f1, const Fraction& f2);
    friend std::ostream& operator<<(std::ostream& out, const Fraction& f);

  private:
    int numerator_, denominator_;
};


#endif // FRACTION_H