// AUTOR: 
// FECHA: 
// EMAIL: 
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

// Clase TAD cola implementada con una lista, coca-COLA
template <class T> class queue_l_t {
 private: // atributos 
  dll_t<T>    l_; // la clase queue esta compuesta de una lista y hereda los publicos

 public: // metodos
  // constructor
  queue_l_t(void) : l_() {} // el constructo lo ponemos literalmente aqui por que es pequeñito

  // destructor
  ~queue_l_t(void) {} 

  // operaciones
  bool empty(void) const;
  int size(void) const;
  void push(const T& dato);
  void pop(void);
  const T& front(void) const;
  const T& back(void) const;

  // E/S
  std::ostream& write(std::ostream& os = std::cout) const;
};


// operaciones
// dicec si la lsita esta vacia
template<class T> bool queue_l_t<T>::empty(void) const {
  return l_.empty(); // lo hace devolviendo la funcion que ya esta declarada en dll_t
}

//getters
template<class T> int queue_l_t<T>::size(void) const {
  return l_.get_size();	
}

//esta funcion inserta un elemento al final de la cola, por que todo lo que entra se pone al final
template<class T> void queue_l_t<T>::push(const T& dato) {
  dll_node_t<T>* node = new dll_node_t<T>(dato); // lo que hace es crear un nodo que tenga un nuevo dato
  assert(node != NULL); // Mientras este existiendo
  l_.push_front(node); // esto hace meter el dato en la pila
  // lo pone push fron osea que este elemento es el ultimo elemento a la cola
}
// esta funcion elimina el primero de la cola
template<class T> void queue_l_t<T>::pop(void) {
  assert(!empty()); // no puede estar vacio
  delete l_.pop_back(); // entonces se hace un doleete de el ulrimo de llegar a la fila
  // Recuerda que el ultimo elemento de la fula es el primer elemento de la cola
}

// esta función saca el valor del primer elemento de la cola
template<class T> const T& queue_l_t<T>::front(void) const {
  assert(!empty());
  return (l_.get_tail()->get_data()); // el primer elemeno de la cola sera el ultimo de la lista en lacada
}

//ESta funcion saca el valor del ultimo elemento de la cola
template<class T> const T& queue_l_t<T>::back(void) const {
  assert(!empty());
  return (l_.get_head()->get_data()); // va a decolver el elemento head de la lista enlazada, osea el ultimo de la cola
}

 // E/S
 // para escribir por pantalla la cola
template<class T> std::ostream& queue_l_t<T>::write(std::ostream& os) const {
  dll_node_t<T>* aux = l_.get_head(); // primero hacemos un aux que apunte al primer elemento de la lista pero es el ulrimo elemento de la cola
  while (aux != NULL) { // mientras eses elemento exista
    os << aux->get_data() << " "; // imprimimos el dato que contiene
    aux = aux->get_next(); // y recorremos la lista
  }
  os << std::endl;
  return os;
}

// esta es la sobrecarcar del operador de salida
template<class T> std::ostream& operator<<(std::ostream& os,
					   const queue_l_t<T>& q) {
  q.write(os); //simplemete llama a la funcion white
  return os;
}


#endif  // QUEUE_H_
