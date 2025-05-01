// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-04-21
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: Método recursivo que devuelve el determinante de una matriz por co
// factores
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html


#pragma once

#include <iostream> // Para flujos de entrada y salida
#include <cassert>  // Para comprobar funciones en tiempo de ejecución

#include "vector_t.hpp"

using namespace std;

template<class T> class matrix_t {
public:
  // Constructor de la clase matrix_t
  matrix_t(const int = 0, const int = 0);
  // Destructor de la clase matrix_t
  ~matrix_t();
  
  void resize(const int, const int);
  
  // getters
  int get_m(void) const;
  int get_n(void) const;
  
  // getters-setters
  T& at(const int, const int);
  T& operator()(const int, const int);
  
  // getters constantes
  const T& at(const int, const int) const;
  const T& operator()(const int, const int) const;
  
  // operaciones y operadores para la multiplicacion matricial
  void multiply(const matrix_t<T>&, const matrix_t<T>&);

  double determinante(void) const;
  double signo(int i, int j) const;
  void menor(const int row, const int col, matrix_t &M) const; 

  // Metodo que suma las filas
  void suma_filas_de_una_matriz(vector_t<int>& l);

  // Método de escritura y de lectura
  void write(ostream& = cout) const;
  void read(istream& = cin);

private:
// Atributos de clase matrix_t
  int m_, n_; // m_ filas y n_ columnconst matrix_t<T>& Aas
  vector_t<T> v_;
  
  int pos(const int, const int) const;
};

double matrix_t<T>::determinante(void) const
{ assert(m_ == n_);
  if (m_ == 1)
    return at(1, 1);
  double suma{0};
  for (int i{1}; i <= m_; i++)
  { matrix_t M_aux;
    menor(i, 1, M_aux);
    suma += at(i, 1) * signo(i, 1) * M_aux.determinante();
  }
  return suma;
}

// Devuelve (-1)^(i + j)
double matrix_t<T>::signo(int i, int j) const
{ return (i + j) % 2 == 0 ? 1 : -1;
}

// Construye una nueva matriz M resultante de eliminar la fila r y la primera columna
void matrix_t<T>::menor(const int row, const int col, matrix_t &M) const
{ assert(m_ == n_);
  M.resize(m_ - 1, n_ - 1);
  int inc_r{0};
  for (int i{1}; i <= M.get_m(); i++)
  { if (i == row) inc_r = 1;
    int inc_c{0};
    for (int j{1}; j <= M.get_n(); j++)
      M(i, j) = at(i + inc_r, j + inc_c);
  }
}

