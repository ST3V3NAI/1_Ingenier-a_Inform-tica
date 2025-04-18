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

#include <iostream>
#include <cassert>

#include "vector_t.hpp"

using namespace std;

template<class T>
class matrix_t
{
public:
  matrix_t(const int = 0, const int = 0);
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
  
  // operaciones y operadores
  void multiply(const matrix_t<T>&, const matrix_t<T>&);

  void write(ostream& = cout) const;
  void read(istream& = cin);

private:
  int m_, n_; // m_ filas y n_ columnas
  vector_t<T> v_;
  
  int pos(const int, const int) const;
};



template<class T>
matrix_t<T>::matrix_t(const int m, const int n) { 
  m_ = m;
  n_ = n;
  v_.resize(m_ * n_);
}



template<class T>
matrix_t<T>::~matrix_t() {}



template<class T>
void matrix_t<T>::resize(const int m, const int n) {
  assert(m > 0 && n > 0);
  m_ = m;
  n_ = n;
  v_.resize(m_ * n_);
}



template<class T>
inline int matrix_t<T>::get_m() const {
  return m_;
}



template<class T>
inline int matrix_t<T>::get_n() const {
  return n_;
}



template<class T>
T& matrix_t<T>::at(const int i, const int j) {
  assert(i > 0 && i <= get_m());
  assert(j > 0 && j <= get_n());
  return v_[pos(i, j)];
}



template<class T>
T& matrix_t<T>::operator()(const int i, const int j) {
  return at(i, j);
}



template<class T>
const T& matrix_t<T>::at(const int i, const int j) const {
  assert(i > 0 && i <= get_m());
  assert(j > 0 && j <= get_n());
  return v_[pos(i, j)];
}



template<class T>
const T& matrix_t<T>::operator()(const int i, const int j) const {
  return at(i, j);
}



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



template<class T>
void matrix_t<T>::read(istream& is) {
  is >> m_ >> n_;
  resize(m_, n_);
  for (int i = 1; i <= get_m(); ++i)
    for (int j = 1; j <= get_n(); ++j)
      is >> at(i, j);
}


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
  for (int k{1}; k <= A.get_m(); ++k){
    // Recorrido de las filas de B (Lectura de los valores de cada columna de 
    // B[X][0], B[X][1], ...., B[X][m])
    for (int i{1}; i <= B.get_n(); ++i) {
      // Recorrido de las columas de A (Primer paso a realizar, lectura de las
      // columnas de A:  A[0][X], A[1][X], ...., A[X][n])
      for (int j{1}; j <= A.get_n(); ++j) {
        producto = A(k, j) * B(i, j);       
      }
      at(k, j) = producto;
    }
  }
}

// Ver si una matriz es simetrica
// bool is_symmetric(void) {

// bool is_sym = true; 
// for(int i = 1; (is_sym && i < N); i++) {
//  for(int j = 0; (is_sym && j < N); j++){
//     if(C[i][j] != C[j][i]) {
//       return false; 
//     }
//  }
//  return true;
// }
//}

// Suma elementos diagonal principal 
// template<class T>
// void matrix_t<T>::sum_of_principle_diagonal(const matrix_t<T>& A) {
// int suma_diagonal_principal = 0; 

// for(int i = 0; i < N; i++) {
//   suma_diagonal_principal += C[i][i];
// }
//}

// Media diagonal secundaria
//double media_diagonal_secundaria{0};
//for(int i = 0; i < N; i++) {
//  media_diagonal_secundaria += C[i][N - 1 - i];
//}

//media_diagonal_secundaria = (media_diagonal_secundaria / N);

// subamatriz triangular inferior y suma 
//   int suma = 0;
//  std::cout << "Elementos de la submatriz triangular inferior: " << std::endl;
//  for (int i = 0; i < N; i++) {
//    for (int j = 0; j <= i; j++) {
//    for (int j = i j <= N; j++) para la traingula superior
//      if(i < j) { para la trianuglar superior
//      if(i > j) {
//      std::cout << C[i][j] << " ";
//      suma += C[i][j];
//      } 
//    }
//  }
//  std::cout << std::endl; 
//  std::cout << "La suma es: " << suma; 
//}