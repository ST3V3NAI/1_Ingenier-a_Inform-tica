// AUTOR: Stevim Abolaji Ibidokun
// FECHA: 10/03/25
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 3.1
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 3
// ESTILO: Google C++ Style Guide
// COMENTARIOS:
// 

#ifndef VECTORT_H_
#define VECTORT_H_

#include <iostream>
#include <cassert>

template<class T> class vector_t {
 public:
  // constructores
  vector_t(const int = 0);
  vector_t(const vector_t&); // constructor de copia

  // operador de asignación
  vector_t<T>& operator=(const vector_t<T>&);

  // destructor
  ~vector_t();
  
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

  // Redimensionado
  void resize(const int);
  
  // E/S
  void read(std::istream& = std::cin);
  void write(std::ostream& = std::cout) const;

 private:
 // Atributos
  T *v_;
  int sz_;
  
  // Métodos de creación y destrucción
  void build(void);
  void destroy(void);
};


template<class T> vector_t<T>::vector_t(const int n) : v_(NULL), sz_(n) {
  build();
}

// constructor de copia
template<class T> vector_t<T>::vector_t(const vector_t<T>& w)
    : v_(NULL), sz_(0) {
  *this = w; // se invoca directamente al operator=
}

// operador de asignación
template<class T> vector_t<T>& vector_t<T>::operator=(const vector_t<T>& w) {
  resize(w.get_size());
  for (int i = 0; i < get_size(); i++)
    at(i) = w.at(i);
  
  return *this;
}

// Destructor de la clase vector_t
template<class T> vector_t<T>::~vector_t() {
  destroy();
}

// Método que inicializa el vector dinámico
template<class T> void vector_t<T>::build() {
  v_ = NULL;
  if (sz_ != 0) {
    v_ = new T[sz_];
    assert(v_ != NULL);
  }
}

// Método que libera memoria del vector
template<class T> void vector_t<T>::destroy() {
  if (v_ != NULL) {
    delete[] v_;
    v_ = NULL;
  }
  sz_ = 0;
}

// Método para cambiar el tamaño del vector
template<class T> void vector_t<T>::resize(const int n) {
  destroy(); // Liberamos memoria
  sz_ = n; // Establecemos el nuevo tamaño
  build(); // Volvemos a reservar memoria
}

// Método para obtener el valor de la posición i
template<class T> inline T vector_t<T>::get_val(const int i) const {
  assert(i >= 0 && i < get_size()); // Verifica que 'i' esté dentro de lso limites
  return v_[i]; // Retorna el valor de la posicón 'i'
}

// Método que devuelve el tamaño del vector
template<class T> inline int vector_t<T>::get_size() const {
  return sz_;
}

// Método para establecer un valor de una posición 'i'
template<class T> void vector_t<T>::set_val(const int i, const T d) {
  assert(i >= 0 && i < get_size()); // Verifca que i sea un indice valido
  v_[i] = d; // Asigna el valor 'd' en la posición 'i'
}

// Método 'at()' para acceder a un elemento con verificación de limites'
template<class T> T& vector_t<T>::at(const int i) {
  assert(i >= 0 && i < get_size());
  return v_[i]; // devuelve una referencia al elemento en 'i'
}

// Sobrecraga del operador `[]` para acceder a los elemntos
template<class T> T& vector_t<T>::operator[](const int i) {
  return at(i); // Llama a 'at(i)' para validar los índices
}

// Método constante de 'at(i)'
template<class T> const T& vector_t<T>::at(const int i) const {
  assert(i >= 0 && i < get_size());
  return v_[i];
}

// Sobrecarga del operador '[]' para acceso solo de lectura
template<class T> const T& vector_t<T>::operator[](const int i) const {
  return at(i);
}

// Método para leer un istream
template<class T> void vector_t<T>::read(std::istream& is) {
  is >> sz_;
  resize(sz_);
  for (int i = 0; i < sz_; i++)
    is >> at(i);
}

// Método para escribir en un ostream
template<class T> void vector_t<T>::write(std::ostream& os) const {
  os << get_size() << ": [ ";
  for (int i = 0; i < get_size(); i++)
    os << at(i) << (i != get_size() - 1 ? "\t" : "");
  os << " ]" << std::endl;
}

// Sobrecraga del operador '<<' para leer los objetos
template<class T> std::istream& operator>>(std::istream& is, vector_t<T>& v) {
  v.read(is);
  return is;
}

// Sobrecraga del operador '<<' para escribir los objetos
template<class T> std::ostream& operator<<(std::ostream& os,
					   const vector_t<T>& v) {
  v.write(os);
  return os;
}

#endif  // VECTORT_H_
