// AUTOR: Stevim Abolaji Ibidokun
// FECHA: 24/03/25
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 3.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 4
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
  T val_;       // Valor del polinomio
  int inx_;     // Valor del indice
};

// Constructor por defecto
template<class T> pair_t<T>::pair_t() : val_(), inx_(-1) {}
// Constructor de parametros
template<class T> pair_t<T>::pair_t(T val, int inx) : val_(val), inx_(inx) {}
// Destructor
template<class T> pair_t<T>::~pair_t() {}
// Setters del valor y el indice
template<class T> void pair_t<T>::set(T val, int inx) {
  val_ = val;
  inx_ = inx;
}
// Getter de indice
template<class T> int pair_t<T>::get_inx() const {
  return inx_;
}
// Getter del valor
template<class T> T pair_t<T>::get_val() const {
  return val_;
}

// Método de lectura por pantalla
template<class T> std::istream& pair_t<T>::read(std::istream& is) {
  return is >> inx_ >> val_;
}

// Método de escritura por pantalla
template<class T> std::ostream& pair_t<T>::write(std::ostream& os) const {
  return os << "(" << inx_ << ":" << val_ << ")";
}

// Sobrecraga del operador de << para que se más comodo el cout
template<class T> std::ostream& operator<<(std::ostream& os,
					   const pair_t<T>& p) {
  p.write(os); // llama directamente a la función write
  return os;
}

#endif  // PAIRT_H_
