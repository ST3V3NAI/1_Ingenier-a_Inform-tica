// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-12
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓB: Métodos de examen de listas
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

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

template<class T>
void dll_t<T>::insert_tail(dll_node_t<T>* nodo) 
{ assert(nodo != NULL);
  if(empty()) {
    head_ = nodo;
    tail_ = head_; 
  } else {
    tail->set_next(nodo_);
    nodo->set_prev(tail_); 
    tail_ = nodo;
  }
  sz_++;
}


template <class T>
void dll_t<T>::remove(dll_node_t<T>* n)
{ assert(n != NULL);
    if (n->get_prev() != NULL)
      n->get_prev()->set_next(n->get_next()); // (1)
    else { head_ = n->get_next();
      head_->set_prev(NULL);
    }

  if (n->get_next() != NULL)
    n->get_next()->set_prev(n->get_prev()); // (1)
  else { tail_ = n->get_prev();
    tail_->set_next(NULL);
  }

  delete n; // (2)
  sz--;
}
