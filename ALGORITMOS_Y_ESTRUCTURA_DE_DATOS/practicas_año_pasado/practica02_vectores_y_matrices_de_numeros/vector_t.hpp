// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 2
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html
           https://geosoft.no/development/cppstyle.html

#pragma once

#include <iostream>
#include <cassert>

using namespace std;

template<class T>
class vector_t
{
public:
// Constructor por defecto de la clase vector_t
  vector_t(const int = 0);
// Destructor de la clase vector_t 
  ~vector_t();
// Método para la longitud del vector
  void resize(const int);
  
  // getters
  T get_val(const int) const;
  int get_size(void) const;
  
  // setters
  void set_val(const int, const T);
  
  // getters-setters
  T& at(const int);
  T& operator[](const int);
  
  // getters constantes
  const T& at(const int) const;
  const T& operator[](const int) const;

  // Métodos de escritura y lectura de la clase
  void write(ostream& = cout) const;
  void read(istream& = cin);

private:
    // Atributos de la clase 
  T *v_;
  int sz_;
  
  // Método que contruye 
  void build(void);
  // Método que destruye
  void destroy(void);
};



// Constructor de la clase vector_t
template<class T> vector_t<T>::vector_t(const int n) { 
  sz_ = n;  // Asigna el tamaño del vector
  build();  // Llama a la función build() para inicializar la memoria
}

// Destructor de la clase vector_t
template<class T> vector_t<T>::~vector_t() {
  destroy();  // Llama a destroy() para liberar la memoria asignada
}

// Función privada para reservar memoria para el vector
template<class T> void vector_t<T>::build() {
  v_ = NULL;  // Inicializa el puntero a NULL
  if (sz_ != 0) {  
    v_ = new T[sz_];  // Reserva memoria dinámica para el vector
    assert(v_ != NULL);  // Verifica que la memoria fue asignada correctamente
  }
}

// Función privada para liberar la memoria del vector
template<class T> void vector_t<T>::destroy() {
  if (v_ != NULL) {  
    delete[] v_;  // Libera la memoria asignada
    v_ = NULL;  // Evita que el puntero quede colgando
  }
  sz_ = 0;  // Reinicia el tamaño del vector
}

// Función para redimensionar el vector
template<class T> void vector_t<T>::resize(const int n) {
  destroy();  // Libera la memoria anterior
  sz_ = n;  // Asigna el nuevo tamaño
  build();  // Reserva nueva memoria
}

// Devuelve el valor del vector en la posición i
template<class T> inline T vector_t<T>::get_val(const int i) const {
  assert(i >= 0 && i < get_size());  // Verifica que el índice sea válido
  return v_[i];  // Retorna el valor almacenado en la posición i
}

// Retorna el tamaño del vector
template<class T> inline int vector_t<T>::get_size() const {
  return sz_;
}

// Asigna un valor en la posición i del vector
template<class T> void vector_t<T>::set_val(const int i, const T d) {
  assert(i >= 0 && i < get_size());  // Verifica que el índice sea válido
  v_[i] = d;  // Asigna el valor d en la posición i
}

// Devuelve una referencia al elemento en la posición i (versión modificable)
template<class T> T& vector_t<T>::at(const int i) {
  assert(i >= 0 && i < get_size());  // Verifica que el índice sea válido
  return v_[i];  // Retorna una referencia al elemento en la posición i
}

// Sobrecarga del operador [] para acceder a elementos del vector
template<class T> T& vector_t<T>::operator[](const int i) {
  return at(i);  // Llama a la función at() para obtener el elemento
}

// Devuelve una referencia constante al elemento en la posición i (versión solo lectura)
template<class T> const T& vector_t<T>::at(const int i) const {
  assert(i >= 0 && i < get_size());  // Verifica que el índice sea válido
  return v_[i];  // Retorna una referencia constante al elemento en la posición i
}

// Sobrecarga del operador [] para acceder a elementos del vector (versión constante)
template<class T> const T& vector_t<T>::operator[](const int i) const {
  return at(i);  // Llama a la función at() para obtener el elemento
}

// Escribe el contenido del vector en un flujo de salida
template<class T> void vector_t<T>::write(ostream& os) const { 
  os << get_size() << ":\t";  // Muestra el tamaño del vector
  for (int i = 0; i < get_size(); i++)
    os << at(i) << "\t";  // Imprime cada elemento del vector
  os << endl;
}

// Lee el contenido del vector desde un flujo de entrada
template<class T> void vector_t<T>::read(istream& is) {
  is >> sz_;  // Lee el tamaño del vector
  resize(sz_);  // Redimensiona el vector con el nuevo tamaño
  for (int i = 0; i < sz_; ++i)
    is >> at(i);  // Lee los valores del vector
}

// FASE II: Cálculo del producto escalar entre dos vectores
template<class T> T scal_prod(const vector_t<T>& v, const vector_t<T>& w) {
  double producto_escalar{0.0};  // Inicializa el resultado del producto escalar
  for(int i = 0; i < v.get_size(); i++) {
    producto_escalar = producto_escalar + v[i] * w[i];  // Suma los productos de los elementos correspondientes
  }
  return producto_escalar;  // Retorna el resultado
}

// Especialización de la función de producto escalar para racionales
double scal_prod(const vector_t<rational_t>& v, const vector_t<rational_t>& w) {
  double producto_escalar{0.0};  // Inicializa el resultado del producto escalar
  for(int i = 0; i < v.get_size(); i++) {
    rational_t total{0,1};  // Inicializa una variable de tipo rational_t
    total = v[i] * w[i];  // Multiplica los elementos correspondientes
    producto_escalar = producto_escalar + total.value();  // Suma el valor convertido a double
  }
  return producto_escalar;  // Retorna el resultado
}