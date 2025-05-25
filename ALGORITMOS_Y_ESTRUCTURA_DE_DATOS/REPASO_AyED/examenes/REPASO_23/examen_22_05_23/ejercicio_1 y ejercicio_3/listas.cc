// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-13
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Métodos de la clase stack_sll_t
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include "sll_t.hpp"
#include "sll_node_t.hpp"

#include <cstddef> 

template<class T>
class stack_sll_t {
  public: 
    void push(const T& dato); 
    void pop(void);
    const T& top(void) const; 
    bool empty(void) const; 
  private: 
    sll_t<T> l_; 
}; 

template<class T> void stack_sll_t<T>::push(const T& dato) {
  sll_node_t<T>* nodo = new sll_node_t<T>(dato);
  assert(nodo != NULL);
  l_.insert_head(nodo);
}

template<class T>
void stack_sll_t<T>::pop(void) {
  assert(!empty())
  delete l_.extract_head();
}

template<class T>
const T& stack_sll_t<T>::top(void) const {
  assert(!empty());
  return l_.get_head()->get_data();
}

template<class T>
bool stack_sll_t<T>::empty(void) const {
  return l_.empty();
}

// Ejercicio 3
void sll_union(const sll_t<int>& A, const sll_t<int>& B, sll_t<int>& C) {
  sll_node_t<int> *ptr = A.get_head();
  while(ptr != NULL) 
    if(B.search(ptr->get_data() == NULL))
      C.insert_head(new sll_node_t<int>(ptr->get_data()));
    ptr = ptr->get_next();

  // Inserta todos los elemento de B
  ptr = B.get_head();
  while(ptr != NULL)
      C.insert_head(new sll_node_t<int>(ptr->get_data()));
    ptr = ptr->get_next();
}


