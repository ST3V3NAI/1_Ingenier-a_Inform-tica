// AUTOR: Stevim Abolaji Ibidokun
// FECHA: 14/03/25
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 3.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 4
// ESTILO: Google C++ Style Guide
// COMENTARIOS: 

#ifndef SLL_NODET_H_
#define SLL_NODET_H_

#include <iostream>
#include "sll_t.h"

// Clase para nodos de listas enlazadas
template <class T> class sll_node_t {
 public:
  // constructores
  sll_node_t(void) : data_(), next_(NULL) {}  // constructor por defecto
  sll_node_t(const T& data) : data_(data), next_(NULL) {} // constructor

  // destructor
  ~sll_node_t(void) {};

  // getters & setters
  sll_node_t<T>* get_next(void) const { return next_; }
  void set_next(sll_node_t<T>* next) { next_ = next; }

  const T& get_data(void) const { return data_; }
  void set_data(const T& data) { data_ = data; }

  // E/S
  std::ostream& write(std::ostream& = std::cout) const; 

 private:
  T data_;
  sll_node_t<T>* next_;
};


// E/S
template <class T> std::ostream& sll_node_t<T>::write(std::ostream& os) const  {
  os << data_;
  return os;
}

template <class T> T sll_t<T>::remove_last(void) {
  assert(!empty());
  sll_node_t<T>* aux = get_head();
  sll_node_t<T>* prev = NULL;
  while(aux->get_next() != NULL) {
    // Recorrer hasta que aux apunte a último
      prev = aux;
      aux = aux->get_next();
  }
}

template <class T> void sll_t<T>::swap12(void) {
  assert(!empty());
  sll_node<T>* aux = get_head(); 
  assert(get_head()->get_next() != NULL);

  push_front(erase_after(get_head()));
}

template <class T> void sll_t<T> ::duplicate(void) {
  sll_node<T>* aux = get_head();
  while(aux != NULL) {
    insert_after(aux, new sll_node_t<T>(aux -> get_data()));
    aux = aux->get_next()->get_next(); // Adelantar aux dos nodos
  }
}

#endif  // SLL_NODET_H_
