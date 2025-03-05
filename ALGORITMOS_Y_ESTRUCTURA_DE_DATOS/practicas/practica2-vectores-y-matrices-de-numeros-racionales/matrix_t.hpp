// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 2
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


// Constructor de la clase matrix_t, inicializa la matriz con m filas y n columnas
template<class T> 
matrix_t<T>::matrix_t(const int m, const int n) { 
  m_ = m;
  n_ = n;
  v_.resize(m_ * n_);
}


// Destructor de la clase matrix_t
template<class T> 
matrix_t<T>::~matrix_t() {}

// Método para redimensionar la matriz
template<class T> 
void matrix_t<T>::resize(const int m, const int n) {
  assert(m > 0 && n > 0);
  m_ = m;
  n_ = n;
  v_.resize(m_ * n_);
}


// Método para obtener el número de filas
template<class T> 
inline int matrix_t<T>::get_m() const {
  return m_;
}


// Método para obtener el número de columnas
template<class T> 
inline int matrix_t<T>::get_n() const {
  return n_;
}


// Método para acceder a un elemento de la matriz con verificación de límites
template<class T> 
T& matrix_t<T>::at(const int i, const int j) {
  assert(i > 0 && i <= get_m());
  assert(j > 0 && j <= get_n());
  return v_[pos(i, j)];
}


// Sobrecarga del operador () para acceder a elementos como matriz(i, j)
template<class T> 
T& matrix_t<T>::operator()(const int i, const int j) {
  return at(i, j);
}


// Método para acceder a un elemento de la matriz (versión constante)
template<class T> 
const T& matrix_t<T>::at(const int i, const int j) const {
  assert(i > 0 && i <= get_m());
  assert(j > 0 && j <= get_n());
  return v_[pos(i, j)];
}


// Sobrecarga del operador () para acceso constante
template<class T> 
const T& matrix_t<T>::operator()(const int i, const int j) const {
  return at(i, j);
}


// Método para escribir la matriz en un flujo de salida
template<class T> 
void matrix_t<T>::write(ostream& os) const { 
  os << get_m() << "x" << get_n() << endl;
  for (int i = 1; i <= get_m(); ++i) {
    for (int j = 1; j <= get_n(); ++j)
      os << at(i, j) << "\t";
    os << endl;
  }
  os << endl;
}


// Método para leer una matriz desde un flujo de entrada
template<class T> 
void matrix_t<T>::read(istream& is) {
  is >> m_ >> n_;
  resize(m_, n_);
  for (int i = 1; i <= get_m(); ++i)
    for (int j = 1; j <= get_n(); ++j)
      is >> at(i, j);
}

// Método privado para calcular la posición en el vector a partir de (i, j)
template<class T> 
inline int matrix_t<T>::pos(const int i, const int j) const {
  assert(i > 0 && i <= get_m());
  assert(j > 0 && j <= get_n());
  return (i - 1) * get_n() + (j - 1);
}



// FASE III: producto matricial
template<class T>
void matrix_t<T>::multiply(const matrix_t<T>& A, const matrix_t<T>& B) {
  assert(A.get_m() == B.get_n());
  resize(A.get_m(), B.get_n());
  // Recorrido de las filas de A (Último paso a realizar, cambio de número de
  // fila: A[X][0], A[X][1], ...., A[X][m])
  for (int i{1}; i <= A.get_m(); ++i){
    // Recorrido de las filas de B (Lectura de los valores de cada columna de 
    // B[X][0], B[X][1], ...., B[X][m])
    for (int j{1}; j <= B.get_n(); ++j) {
      T multiply{0};
      // Recorrido de las columas de A (Primer paso a realizar, lectura de las
      // columnas de A:  A[0][X], A[1][X], ...., A[X][n])
      for (int k{1}; k <= A.get_n(); ++k) {
        multiply += A(i, k) * B(k, j);       
      }
      at(i, j) = multiply;
    }
  }
}



// Método que almacena en un vector la suma de las filas de una matriz
template<class T>
void matrix_t<T>::suma_filas_de_una_matriz(vector_t<int>& l) {
 T suma_de_filas = 0; // Inicializamos la suma de filas
 l.resize(get_m());  // Le ponemos longitud al vector
 for(int i = 1; i <= get_m(); i++) // Recorremos la matriz tanto las filas como las columas
   for(int j = 1; j <= get_n();j++) {
     l[i - 1] = l[i - 1] + at(i ,j); // Almacenamos la suma
   }
}