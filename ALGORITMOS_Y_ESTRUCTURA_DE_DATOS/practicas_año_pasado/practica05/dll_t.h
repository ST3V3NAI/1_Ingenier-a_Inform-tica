// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 2.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// TEMA: 4
// ESTILO: Google C++ Style Guide
// COMENTARIOS: 

#ifndef DLLT_H_
#define DLLT_H_

#include <cassert> // esto es para hacer un asserrt
#include <iostream>

#include "dll_node_t.h" // necesitamos de la clase definida

// Clase para almacenar una lista doblemente enlazada
template <class T> class dll_t {
 public: // MEtodos
  // constructor
  dll_t(void) : head_(NULL), tail_(NULL), sz_(0) {}

  // destructor
  ~dll_t(void); 

  // getters
  dll_node_t<T>* get_tail(void) const { return tail_; }
  dll_node_t<T>* get_head(void) const { return head_; }
  int get_size(void) const { return sz_; }

  bool empty(void) const;

  // operaciones
  void push_back(dll_node_t<T>*);
  void push_front(dll_node_t<T>*);

  dll_node_t<T>* pop_back(void);
  dll_node_t<T>* pop_front(void);

  dll_node_t<T>* erase(dll_node_t<T>*);

  // E/S
  std::ostream& write(std::ostream& = std::cout) const;

 private: // atributos
  dll_node_t<T>* head_;
  dll_node_t<T>* tail_;
  int            sz_;
};


// destructor
template <class T> dll_t<T>::~dll_t(void) {
  while (head_ != NULL) {  // mientras estes apuntando bn
    dll_node_t<T>* aux = head_; // almacena un puntero que apunta al nodo acrual
    head_ = head_->get_next(); // hacemos que pase al siguiente
    delete aux; // borramos el puntero
  }
  sz_ = 0; // fijamos un size a 0
  tail_ = NULL; // hacemos q la cola sea null
}

// Comprobar si lista vacía
template <class T> bool dll_t<T>::empty(void) const { // es una funcion que dice 
  if (head_ == NULL) { // mientras estes dentro de la lista
    assert(tail_ == NULL); //la cola no puede ser nola
    assert(sz_ == 0); // y el tamaño dela cola no puede ser 0
    return true; // devuelve si es verdad cunando resulte que ahí NO HAY NADA 
  } else
    return false; // si no hay nada pues obviamente es falso osea NO ES EMPTI
}

// operaciones
// esta funcion toma un nodo y lo mete al principio de la lista
template <class T> void dll_t<T>::push_front(dll_node_t<T>* nodo) {
  assert(nodo != NULL); // el nodo que quieres meter no puede ser nulo

  if (empty()) { // si esta vacia
    head_ = nodo; // entonces cuando vayas a meter un nuevo nodo
    tail_ = head_; // solo habra un nuevo nodo
  } else { // si lista es normal
    head_->set_prev(nodo); // entonces hacermos que head
    nodo->set_next(head_); //  ahcemos que nodo apuente al siguiente de head
    head_ = nodo; //y el actual head es el nuevo nodo, 
  }
  sz_++; // y claro, el tamaño de la lista ha crecido
}

// inserta el nodo que le has pasasdo , y lo mete al final de la lista
template <class T> void dll_t<T>::push_back(dll_node_t<T>* nodo) {
  assert(nodo != NULL); // esta claro que el nodo no puede ser null

  if (empty()) { // si esta vacio pasa como antes
    head_ = nodo; // que la lista solo tendria un nodo, entonces head y cola es igual
    tail_ = head_;
  } else { // cuando nuestra cola es normal , entonces
    tail_->set_next(nodo); // hacemos que la cola haga un espacio
    nodo->set_prev(tail_); // hacemos que tail se mueva pa atras
    tail_ = nodo; // ahora el nodo es la tail
  }
  sz_++; // nuestra funcion ha aumentado un tamaño
}

// esta  funcion saca el nodo de la parte trasera de la lista
template <class T> dll_node_t<T>* dll_t<T>::pop_back(void) {
  assert(!empty());

  dll_node_t<T>* aux = tail_; // hacems que el aux nuevo apuente a el ultimo
  tail_ = tail_->get_prev(); // y que liego a partir de hora la cola es el prev
  if (tail_ != NULL) // la cola no puede ser null
    tail_->set_next(NULL); // hacemos que el siguiente de tail sea vacio, osea se borra 
  else // si no 
    head_ = NULL; // pues otra opcion es hacer que head sea nulo, no tiene sentido pero bueno
  sz_--; // entonces  disminuyo el tamaño de la lista 
  aux->set_next(NULL); // hacemos que el siguiente de auz sea nulo
  aux->set_prev(NULL); // y hacemos que el anterior tmb
  return aux; // devolvemos aux ya que ahora esta vacio
}

//esta funcion saca el primer noodo
template <class T> dll_node_t<T>* dll_t<T>::pop_front(void) {
  assert(!empty());

  dll_node_t<T>* aux = head_; // esto saca 
  head_ = head_->get_next(); //hacemos que el head apunte al segundo
  if (head_ != NULL) // si la cabeza es no nula
    head_->set_prev(NULL); // hacemos que el anterior a la cabeza sea nulo
  else
    tail_ = NULL; // si no pies la cola es nula
  sz_--;  // el tamaño de la lista tiene que ser uno menos
  aux->set_next(NULL);  // hacemos que el anterior y el posterior sean nulos 
  aux->set_prev(NULL);
  return aux; // y ya podemos devolver aux
}
// elimina un elemento nodo específico pasao, y devulve su puntro
template <class T> dll_node_t<T>* dll_t<T>::erase(dll_node_t<T>* nodo) {
  assert(nodo != NULL);

  if (nodo->get_prev() != NULL) // si el anterior del nodo no es nulo enronces
    nodo->get_prev()->set_next(nodo->get_next()); // hacemos que el siguiente al anterior es el siguiente a lnodo.
    // osea hacemos quel a lista se lo salte
  else
    head_ = nodo->get_next(); // si no pues hacemos que el head desaparece y pase al siguiente 
  if (nodo->get_next() != NULL) // si el nodo siguiente a ese es nulo, osea es e lultimo
    nodo->get_next()->set_prev(nodo->get_prev()); // entonces hacemos que el nodo final haga  que paunte al anterior 
  else // sino 
    tail_ = nodo->get_prev(); // pues entoncees simplemente hacemos que la ola apunte al anterior del nodo
  sz_--; // ahora hacemos que el tamaño sea uno menos para que cumpla pq se ha borrado uno
  nodo->set_prev(NULL); // aislamos el nodo y hacemos que el prv y el nex sean nulos 
  nodo->set_next(NULL);
  return nodo; // y devolvemos ese nodo que en verdad es un puntero
}

// E/S
// esto lo que hace es imprimir la lista 
template <class T> std::ostream& dll_t<T>::write(std::ostream& os) const {
  dll_node_t<T>* aux = head_; //acemos un aux que apunte a cabeza

  while (aux != NULL) { // ahora mientras aux no sean nulo, osea que exista
    aux->write(os); // vamos a imprimirlo por pantalla
    aux = aux->get_next(); // y vamos a recorrer la lista
  }
  return os;
}

#endif  // DLLT_H_
