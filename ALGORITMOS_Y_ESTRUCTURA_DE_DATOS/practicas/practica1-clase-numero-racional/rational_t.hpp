// AUTOR: Steven Abolaji Ibidokun 
// FECHA: 10/02/25
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

// pauta de estilo [92]: comentarios multilínea usando solo "//"

#pragma once // Evita que el archivo se incluya varias veces en el proyecto

#include <iostream> // Para flujos de entrada y salida 
#include <cassert> // Similar a una función booleana, para verificar condiciones en tiempo de ejecuciób
#include <cmath> // Para funciones matematica

// pauta de estilo [5]
# define EPSILON 1e-6 // Constante Epsilon 

// Espacio de nombre std
using namespace std;

// Clase racional_t
class rational_t
{
  // pautas de estilos [44] y [73]: primero "public" y después "private"
public:
  // Constructor de la clase rational
  rational_t(const int = 0, const int = 1);
  // Destructor de la clase rational
  ~rational_t() {}
  
  // pauta de estilo [71]: indentación a 2 espacios
  // getters
  int get_num() const;
  int get_den() const;
  
  // setters
  void set_num(const int);
  void set_den(const int);


  // Métodos de la clase
  double value(void) const;


  // FASE II
  // Métodos de comparación
  bool is_equal(const rational_t&, const double precision = EPSILON) const;
  bool is_greater(const rational_t&, const double precision = EPSILON) const;
  bool is_less(const rational_t&, const double precision = EPSILON) const;
  
  // FASE III
  // Métodos de operaciones aritméticas
  rational_t add(const rational_t&);
  rational_t substract(const rational_t&);
  rational_t multiply(const rational_t&);
  rational_t divide(const rational_t&);

  // Métodos de escritura y lectura por pantalla de numeros racionales
  void write(ostream& = cout) const;
  void read(istream& = cin);
  
private:
  // pauta de estilo [11]: nombre de los atributos seguido de "_"
  // Atributos de la clase rational
  int num_, den_;
};
