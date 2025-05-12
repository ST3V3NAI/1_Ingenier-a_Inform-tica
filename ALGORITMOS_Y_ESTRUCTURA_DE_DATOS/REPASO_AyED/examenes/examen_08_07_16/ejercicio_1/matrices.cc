// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-11
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Métodos de matrices
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>
#include "vector_t.h"

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

  // Apratados del examen
  T scalprod(const vector_t<T>&, int);
  int num_perpednicular(const vector_t<T>& v, double eps = 0.0); 
  int num_perpendicular(const vector_t<double>& v, double eps);
  double distancia_l1(double* p, int row);
  double distancia_l2(double* p, int row);
  int punto_menor_distancia_l1(double* p);

  // Método de escritura y de lectura
  void write(ostream& = cout) const;
  void read(istream& = cin);

private:
// Atributos de clase matrix_t
  int m_, n_; // m_ filas y n_ columnconst matrix_t<T>& Aas
  vector_t<T> v_;
  
  int pos(const int, const int) const;
};

template<class T>
T scalprod(const vector_t<T>&, int) {
  T sp = 0;

  for(int j = 0; j < n_; j++) 
    sp += get(row, j + i) * v.get_v(j);
  return sp;
}

template<class T>
int num_perpednicular(const vector_t<T>& v, double eps = 0.0) {
  int num = 0;

  for(int i = 1; i <= m_; i++) 
    if(scalprod(v_, i) == 0) 
      num++;
  return num;
}

template<class T>
int num_perpendicular(const vector_t<double>& v, double eps) {
  int num = 0;

  for(int i = 1; i <= m; i++) 
    if(scalprod(v_, i) < eps) 
      num++;
    return num;
}

template<class T>
double distancia_l1(double* p, int row) {
  T sp = 0;

  for(int j = 0; j < n_; j++)
    sp +=  fabs(row, j + 1) - p[j];
  return sp;
}

template<class T>
double distancia_l2(double* p, int row) {
  T sp = 0;

  for(int j = 0; j < n_; j++) 
    sp += (get(row, j + 1) - p[j] * get(row, j + 1) - p[i]);
  return sqrt(sp);
}

template<class T>
int punto_menor_distancia_l1(double* p) {
  int fila = 1;
  double menor = distancia_l1(p, 1);

  for(int i = 2; i <= m_; i++) 
    if(ditancia_l2(p, i) < menor) {
      menor = distancia_l2(p, i);
      fila = i;
    }
    return fila;
}

