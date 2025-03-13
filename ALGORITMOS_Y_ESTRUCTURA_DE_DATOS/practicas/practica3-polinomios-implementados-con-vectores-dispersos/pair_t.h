// AUTOR: Stevim Abolaji Ibidokun
// FECHA: 10/03/25
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 3.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 3
// ESTILO: Google C++ Style Guide
// COMENTARIOS:
// 

#ifndef PAIRT_H_
#define PAIRT_H_

#include <iostream>


template<class T> class pair_t {
 public:
  // constructores
  pair_t(void); 
  pair_t(T, int);

  // destructor
  ~pair_t(void);

  // getters & setters
  T get_val(void) const;
  int get_inx(void) const;
  void set(T, int);

  // E/S
  std::istream& read(std::istream& is = std::cin);
  std::ostream& write(std::ostream& os = std::cout) const;

 private:
 // Atributos de la clase pair_t
  T val_; // valor en esa posicion
  int inx_; // indice que va realiciona con X
};

// Constructor por defecto
template<class T> pair_t<T>::pair_t() : val_(), inx_(-1) {}
// Constructor normal
template<class T> pair_t<T>::pair_t(T val, int inx) : val_(val), inx_(inx) {}
// Destructor
template<class T> pair_t<T>::~pair_t() {}
// setter que actualiza los valores anterior por unos nuevos
template<class T> void pair_t<T>::set(T val, int inx) {
  val_ = val;
  inx_ = inx;
}

// Pide el tamaño del vector
template<class T> int pair_t<T>::get_inx() const {
  return inx_;
}

// Pide el valor en esa posicion
template<class T> T pair_t<T>::get_val() const {
  return val_;
}

// Lee el tamaño y el valor
template<class T> std::istream& pair_t<T>::read(std::istream& is) {
  return is >> inx_ >> val_;
}

// escribe por pantalla las variables
template<class T> std::ostream& pair_t<T>::write(std::ostream& os) const {
  return os << "(" << inx_ << ":" << val_ << ")";
}

// se puede hacer una sobrecarga para que sea más comodo
template<class T> std::ostream& operator<<(std::ostream& os,
					   const pair_t<T>& p) {
  p.write(os);
  return os;
}

#endif  // PAIRT_H_
