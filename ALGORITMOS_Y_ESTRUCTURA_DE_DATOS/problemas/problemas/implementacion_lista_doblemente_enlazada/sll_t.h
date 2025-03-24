// AUTOR: Stevim Abolaji Ibidokun
// FECHA: 14/03/25
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 3.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 4
// ESTILO: Google C++ Style Guide
// COMENTARIOS: 

#ifndef SLLT_H_
#define SLLT_H_

#include <iostream>
#include <cassert>

#include "sll_node_t.h"

// Clase para almacenar una lista simplemente enlazada
template <class T> class sll_t {
 public:
  // constructor
  sll_t(void) : head_(NULL) {}

  // destructor
  ~sll_t(void);

  // getters
  sll_node_t<T>* get_head(void) const { return head_; };
  
  bool empty(void) const;

  // operaciones
  void push_front(sll_node_t<T>*);
  sll_node_t<T>* pop_front(void);

  void insert_after(sll_node_t<T>*, sll_node_t<T>*);
  sll_node_t<T>* erase_after(sll_node_t<T>*);

  sll_node_t<T>* search(const T&) const;
  void swap12(void);
  void duplicate(void);
  void insert_node_after_other(sll_node_t<T>* ref_node, sll_node_t<T>* aux); 
  void swap_last_and_second_last(void);
  void duplicate_elements(void); 
  void deleting_odd_pos_elements(void);
  void deleting_even_pos_elements(void);

  // E/S
  std::ostream& write(std::ostream& = std::cout) const;

 private:
  sll_node_t<T>* head_;
  T remove_last(void);
};

// destructor
template <class T> sll_t<T>::~sll_t(void) {
  while (!empty()) {
    sll_node_t<T>* aux = head_;
    head_ = head_->get_next();
    delete aux;
  }
}

// Comprobar si lista vacía
template <class T> bool sll_t<T>::empty(void) const {
  return head_ == NULL;
}

// operaciones
template <class T> void sll_t<T>::push_front(sll_node_t<T>* n) {
  assert(n != NULL);

  n->set_next(head_);
  head_ = n;
}

template <class T> sll_node_t<T>* sll_t<T>::pop_front(void) { 
  assert(!empty());
  sll_node_t<T>* aux = head_;
  head_ = head_->get_next();
  aux->set_next(NULL);

  return aux;
}

template <class T> void sll_t<T>::insert_after(sll_node_t<T>* prev,
					       sll_node_t<T>* n) {
  assert(prev != NULL && n != NULL);

  n->set_next(prev->get_next());
  prev->set_next(n);
}

template <class T> sll_node_t<T>* sll_t<T>::erase_after(sll_node_t<T>* prev) { 
  assert(!empty());
  assert(prev != NULL);
  sll_node_t<T>* aux = prev->get_next();
  
  assert(aux != NULL);
  prev->set_next(aux->get_next());
  aux->set_next(NULL);

  return aux;
}

template <class T> sll_node_t<T>* sll_t<T>::search(const T& d) const {
  sll_node_t<T>* aux = head_;
  while ((aux != NULL) && (aux->get_data() != d))
    aux = aux->get_next();
    
  return aux;
}

// E/S
template <class T> std::ostream& sll_t<T>::write(std::ostream& os) const {
  sll_node_t<T>* aux = head_;

  while (aux != NULL) {
    aux->write(os);
    aux = aux->get_next();
  }
  return os;
}

template <class T> 
void sll_t<T>::swap_last_and_second_last(void) {
  assert(!empty());
  assert(head->get_next() != NULL && tail->get_next() == NULL)
  push_back(erase(get_tail()->get_prev())); 
}

template <class T>
void sll_t<T>::duplicate_elements(void) {
  sll_node_t<T>* aux = get_head();
  while(aux != NULL) {
    insert_after(aux, new sll_node_t<T>(aux -> get_data()));
    aux = aux->get_next() -> get_next(); // Adelantar aux dos nodos
  }
}



template <class T>
void sll_t<T>::deleting_odd_pos_elements(void) {
  sll_node_t<T>* aux = get_head();
  while (aux != NULL && aux->get_next() != NULL) {
    delete erase_after(aux); // Borrar el siguiente a aux y liberarlo 
    aux = aux->get_next(); // Solo adelantar aux un nodo, par ya borrado
  }
}

template <class T>
void sll_t<T>::deleting_even_pos_elements(void) {
  sll_t<T> odds_list;
  sll_node_t<T>* aux = get_head();
  if(!empty()) {
    odds_list.push_front(pop_front());
    aux = get_head();
  }
  while(aux != NULL && aux->get_next() != NULL) 
  {
    odds_list.pop_front(erase_after(aux));
    aux = aux->get_next(); // Solo adelantar aux un nodo, impar ya movido
  }
  return odds_list; // Retorna lista de impares
}


#endif  // SLLT_H_
