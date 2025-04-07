// AUTOR: Stevim Abolaji Ibidokun
// FECHA: 07/04/25
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 2.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// TEMA: 4
// ESTILO: Google C++ Style Guide
// COMENTARIOS: 

#ifndef DLLT_H_
#define DLLT_H_

#include <cassert>
#include <iostream>

#include "dll_node_t.h"

// Clase para almacenar una lista doblemente enlazada
template <class T> class dll_t {
 public:
  // constructor por defecto
  dll_t(void) : head_(NULL), tail_(NULL), sz_(0) {}

  // destructor
  ~dll_t(void); 

  // getters
  dll_node_t<T>* get_tail(void) const { return tail_; }
  dll_node_t<T>* get_head(void) const { return head_; }
  int get_size(void) const { return sz_; }


  // Método para comprobar si la pila está vacía
  bool empty(void) const;

  // operaciones
  // Método para insertar detras de la lista
  void push_back(dll_node_t<T>*);
  // Método para insertar por delante de la lista
  void push_front(dll_node_t<T>*);

  // Método para eliminar por detras de la lista
  dll_node_t<T>* pop_back(void);
  // Método para eliminar por delante de la lista
  dll_node_t<T>* pop_front(void);

  // Método que elimina un nodo de la lista
  dll_node_t<T>* erase(dll_node_t<T>*);

  // E/S
  // Sobrecarga del operador de escritura por pantalla
  std::ostream& write(std::ostream& = std::cout) const;

 private:
 // Atributos de la classe 
  dll_node_t<T>* head_; // Cabeza de la lista (Primer elemento)
  dll_node_t<T>* tail_; // Cola de la lista (Último elemento)
  int            sz_;  // Tamaño de la lista
};


// destructor
template <class T> dll_t<T>::~dll_t(void) {
  while (head_ != NULL) {           // Mientras que head_ no sea NULL
    dll_node_t<T>* aux = head_;     // Apuntamos con un nodo auxuliar a head_
    head_ = head_->get_next();      // Adelantamos head_ al siguiente nodo
    delete aux;                     // Borramos auxiliar
  }
  sz_ = 0;                          // Inicializamos sz_ = 0
  tail_ = NULL;                     // Y que tail sea NULL
}

// Comprobar si lista vacía
template <class T> bool dll_t<T>::empty(void) const {
  if (head_ == NULL) {              // Mientras que head no sea NULL
    assert(tail_ == NULL);          // Compramos si tail_ es NULL
    assert(sz_ == 0);               // Y que sz_ sea 0
    return true;                    // Si se cumple, retornamos verdadero
  } else
    return false;                   // En caso contrario, retornamos falso
}

// operaciones
// Método para insertar elementos por delante
template <class T> void dll_t<T>::push_front(dll_node_t<T>* nodo) {
  assert(nodo != NULL);           // Mientras que nodo a insertar no sea NULL

  if (empty()) {                  // Si la lista esta vacía
    head_ = nodo;                 // Inicializamos la cabeza con el dato del nodo
    tail_ = head_;                // Y que tail_ sea igual a la cabeza
  } else {
    head_->set_prev(nodo);        // En caso contrario, hacemos que head_ apunte al anterior del head_
    nodo->set_next(head_);        // Y que nodo apunte al siguiente de head_
    head_ = nodo;                 // head_ = nodo
  }
  sz_++;                          // Aumentamos el tamaño de la lista
}

// Método para insertar elementos por detras
template <class T> void dll_t<T>::push_back(dll_node_t<T>* nodo) {
  assert(nodo != NULL);           // Mientras que el nodo a insertar no sea NULL

  if (empty()) {                  // Si la lista está vacía
    head_ = nodo;                 // Inicializamos la cabeza con el dato del nodo
    tail_ = head_;                // Y que tail_ sea igual a la cabeza
  } else {                        // En caso de que la lista no esté vacía
    tail_->set_next(nodo);        // tail_ obtiene el valor del siguiente de nodo
    nodo->set_prev(tail_);        // nodo obitiene el valor anterior a tail_ 
    tail_ = nodo;                 // tail_ = nodo
  }
  sz_++;                          // Aumentamos el tamaño de la lista
}

// Método para eliminar elementos por detrás
template <class T> dll_node_t<T>* dll_t<T>::pop_back(void) {
  assert(!empty());               // Comprobamos que la lista no esté vacía

  dll_node_t<T>* aux = tail_;     // Inicializamos un auxiliar del tipo de la clase con la cola
  tail_ = tail_->get_prev();      // Hacemos que tail_ actualice su valor con su anterior nodo
  if (tail_ != NULL)              // En caso de que no sea nulo el TAIL
    tail_->set_next(NULL);        // Hacemos que su siguiente nodo sea NULL
  else                            // En caso contrario
    head_ = NULL;                 // La cabeza apunta a NULL
  sz_--;                          // Y vamos decrementando la lista
  aux->set_next(NULL);            // El auxiliar hacemos que su tail_ apunte a NULL
  aux->set_prev(NULL);            // Y que anterior también
  return aux;                     // Retornamos auxiliar
}

// Método para eliminar elementos por delante
template <class T> dll_node_t<T>* dll_t<T>::pop_front(void) {
  assert(!empty());               // Comprobamos que la lista no esté vacía

  dll_node_t<T>* aux = head_;     // Creamos un axuiliar que se quede con el valor de la cabeza
  head_ = head_->get_next();      // Y actualizamos head_ con el siguiente valor
  if (head_ != NULL)              // En caso de que head_ sea distinto de NULL
    head_->set_prev(NULL);        // Hacemos que el valor anterior a head_ cambie
  else
    tail_ = NULL;                 // Si head_ es NULL, tail_ también lo será
  sz_--;                          // Disminuimos el tamaño de la lista
  aux->set_next(NULL);            // Hacemos que el valor siguiente de auxiliar sea NULL
  aux->set_prev(NULL);            // Hacemos que que valor anterior a auxiliar sea NULL
  return aux;                     // Retornamos el auxiliar
}

// Método para eliminar un nodo en espeecífico
template <class T> dll_node_t<T>* dll_t<T>::erase(dll_node_t<T>* nodo) {
  assert(nodo != NULL);           // Mientras que el nodo no sea NULL

  if (nodo->get_prev() != NULL)   // Si el anterior nodo no es NULL
    nodo->get_prev()->set_next(nodo->get_next());  // El anterior apunta al siguiente
  else
    head_ = nodo->get_next();     // Si no hay anterior, es el primer, se actualiza head_
  if (nodo->get_next() != NULL)   // Si el siguiente nodo no es el último
    nodo->get_next()->set_prev(nodo->get_prev());  // El siguiente al nodo, actulizamos el head_ con su anteriro
  else
    tail_ = nodo->get_prev();     // En caso de que no sea el único nodo, tail_ lo ubicamos en el siguiente al nodo
  sz_--;                          // Disminuimos el tamaño de la cola
  nodo->set_prev(NULL);           // Nuestro nodo_ lo ponemos por delante y por detras a NULL, para retornarlo
  nodo->set_next(NULL);
  return nodo;
}

// E/S
// Sobrecarga del operador ostream (escritura) para imprimir lista por pantalla
template <class T> std::ostream& dll_t<T>::write(std::ostream& os) const {
  dll_node_t<T>* aux = head_;     // Creaumos un puntero auxiliar que apunte al primer nodo (head_)

  while (aux != NULL) {           // Mientras que el puntero auxiliar no sea nulo
    aux->write(os);               // Escribimos el contenido en el flujo de salida
    aux = aux->get_next();        // Avanzamos al siguiente
  }
  return os;                     // Retornamos el flujo de salida
} 

#endif  // DLLT_H_
