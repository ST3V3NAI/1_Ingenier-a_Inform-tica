// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 2
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

// pauta de estilo [92]: comentarios multilínea usando solo "//"

#pragma once

#include <iostream>
#include <cassert>
#include <cmath>

// pauta de estilo [5]
# define EPSILON 1e-6

using namespace std;

class rational_t {
  // pautas de estilos [44] y [73]: primero "public" y después "private"
public:
  // Constructor de la clase rational_t
  rational_t(const int = 0, const int = 1);
  // Destrutcor de la clase rational_t
  ~rational_t() {}
  
  // pauta de estilo [71]: indentación a 2 espacios
  
  // getters
  int get_num() const;
  int get_den() const;
  
  // setters
  void set_num(const int);
  void set_den(const int);

  // Método para obtener el valor decimal
  double value(void) const;
  // Método para obtener el opuesto
  rational_t opposite(void) const;
  // Método para obtener el reciproco
  rational_t reciprocal(void) const;

  // Métodos de comparacion de numeros racionales
  bool is_equal(const rational_t&, const double precision = EPSILON) const;
  bool is_greater(const rational_t&, const double precision = EPSILON) const;
  bool is_less(const rational_t&, const double precision = EPSILON) const;


  // Métodos de suma, resta, multiplicación y división de numeros racionales
  rational_t add(const rational_t&) const;
  rational_t substract(const rational_t&) const;
  rational_t multiply(const rational_t&) const;
  rational_t divide(const rational_t&) const;

  // Métodos de escritura y de lectura
  void write(ostream& os = cout) const;
  void read(istream& is = cin);
  
private:
  // pauta de estilo [11]: nombre de los atributos seguido de "_"
  // Atributos de la clase rational
  int num_, den_;
};


// sobrecarga de los operadores de E/S
ostream& operator<<(ostream& os, const rational_t&);
istream& operator>>(istream& is, rational_t&);

// FASE I: operadores
rational_t operator+(const rational_t&, const rational_t&);
rational_t operator-(const rational_t&, const rational_t&);
rational_t operator*(const rational_t&, const rational_t&);
rational_t operator/(const rational_t&, const rational_t&);
