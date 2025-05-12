// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-04-21
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: Método reverse que modifica sus elementos para que estén en
// orden inverso. 
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html


// AUTOR: Stevim Abolaji Ibidokun
// FECHA: 07/04/25
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 2.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 5
// ESTILO: Google C++ Style Guide
// COMENTARIOS: Clase TAD cola implementada con una lista

#ifndef QUEUE_H_
#define QUEUE_H_

#include <iostream>
#include <cassert>

#include "dll_t.h"

// Clase TAD cola implementada con una lista
template <class T> class queue_l_t {
 private:
  dll_t<T>    l_;

 public:
  // constructor
  queue_l_t(void) : l_() {}

  // destructor
  ~queue_l_t(void) {}

  // operaciones
  bool empty(void) const;
  int size(void) const;
  void push(const T& dato);
  void pop(void);
  const T& front(void) const;
  const T& back(void) const;
  void queue_l_t<T>::reverse();

  // E/S
  std::ostream& write(std::ostream& os = std::cout) const;
};

void queue_l_t<T>::reverse() {
  assert(!empty()); // Comprobamos que no esté vacía
  stack_l_t<T> aux; 

  while(!empty()) {
    aux.push(front());
    pop();
  }

  while(!aux.empty()) {
    push(aux.top());
    aux.pop();
  }
}




#endif  // QUEUE_H_
