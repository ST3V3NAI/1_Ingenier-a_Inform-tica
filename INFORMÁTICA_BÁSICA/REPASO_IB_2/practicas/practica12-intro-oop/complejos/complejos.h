/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file complejos.h
 * @author Steven
 * @date 2025-04-06
 * @brief Declaración de la clase Complejo y función Usage
 * @bug There are no known bugs
 */

#ifndef COMPLEJOS_H // Si está definido en un fichero
#define COMPLEJOS_H // Definelo

#include <cmath> // para operaciones matemáticas complicadas
#include <iostream> // para flujos de entrada y salida

void Usage(int argc, char* argv[]);

class Complejo {
  public:
    // Constructor parametrizado
    Complejo(double r, double i) : real_{r}, imaginary_{i} {}
    // Destructor 
    ~Complejo() {} 
    // Setters
    double setImaginary(double r); 
    double setReal(double i);

    // Getters
    double getImaginary() const { return imaginary_; }
    double getReal() const { return real_; }


    // Sobrecarga de los operadores de extracción e inserción
    friend std::ostream& operator<<(std::ostream& os,const Complejo& other); 
    friend std::istream& operator>>(std::istream& is, Complejo& other);

    // Sobrecarga de los operadores '+' y '-'
    Complejo operator+(const Complejo& other) const;
    Complejo operator-(const Complejo& other) const; 

  private: 
  // Atributos
    double real_, imaginary_; 
}; 


#endif // COMPLEJOS_H