/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file compute_int.h
 * @author Steven
 * @date 2025-04-07
 * @brief Declaración de la Clase ComputeInt y la función Usage
 * @bug There are no known bugs
*/

#ifndef COMPUTE_INT_H  // Si no esta definido compute_int.h
#define COMPUTE_INT_H  // Define compute_int.h

#include <iostream> // Para flujos de entrada y salida
#include <cmath> // Para calculos matemáticos complicados
#include <numeric> // Para std::gcd

void Usage(int argc, char* argv[]); // Función que controla el correcto uso de los parametros de entrada del programa

class ComputeInt {
  public: 
    // Constructor parametrizado
    ComputeInt(const double &numerator = 1.0, const double &denominator = 1.0) : num_{numerator}, den_{denominator} {}
    // Destructor
    ~ComputeInt() {}

    // Getter y Setters
    double setDenominator(double denominator);
    double setNumerator(double numerator);

    double getDenominator() const;
    double getNumerator() const; 

    // Métodos de la clase
    double Value() const;
    double Factorial() const;
    double SumSerie() const;
    bool IsPrimeNumber(int number);
    void IsPrime();
    void AreRelativesPrimes(ComputeInt other);


    // Sobrecarga del operador de inserción y extraccion
    friend std::ostream& operator<<(std::ostream& os, const ComputeInt& other);
    friend std::istream& operator>>(std::istream& is, ComputeInt& other); 
    
  private:
    // Atributos de la Clase ComputeInt
    double num_;
    double den_;
};






#endif // COMPUTE_INT_H