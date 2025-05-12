// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-12
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Ejercicios de exmane de listas
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>


#include "sll_node_t.h"

// Clase para almacenar una lista simplemente enlazada
// Las listas enlazadas es lineal de nodos enazados en secuencia
// Cada nodo almacena un tipo T
template <class T> class sll_t {
 public: // Métodos
  // constructor
  sll_t(void) : head_(NULL) {} // Inicializamos el primer nodo a NULL (osea esta vacía)

  // destructor
  ~sll_t(void);

  // getters
  sll_node_t<T>* get_head(void) const { return head_; };
  
  // Método que verifica si el nodo está vacío o no
  bool empty(void) const;

  // operaciones
  void push_front(sll_node_t<T>*);
  sll_node_t<T>* pop_front(void);

  void insert_after(sll_node_t<T>*, sll_node_t<T>*);
  sll_node_t<T>* erase_after(sll_node_t<T>*);

  sll_node_t<T>* search(const T&) const;

  // E/S
  std::ostream& write(std::ostream& = std::cout) const;

 private:
 // Atributos
  sll_node_t<T>* head_;  // Puntero que apunta a cabeza
};

template<class T>
void writeReverse(std::ostream& os) {
  write1(head_, os);
}

template<class T>
void write1(sll_node_t* node, std::ostream& os) {
  if(node != NULL) {
    write1(node->get_next(), os);
    os << node->get_data();
  }
};

template<class T>
void sll_t<T>::insert_head(sll_node_t<T>* n) 
{
  n->set_next(head_);
  head_ = n;
}

template<class T>
void sll_t<T>::insert_tail(sll_node_t<T>* n) {
  if(empty()) insert_head(n);
  else 
  { sll_node_t<T> *aux = head_;
    while(aux->get_next() != NULL)
      aux = aux->get_next();
    insert_after(aux, n);
  }
}

template<class T>
sll_node_t<int>* sll_t::find(const int v) {
  sll_node_t<int> *ptr = head();
  while(ptr != NULL && ptr->get_data() != v)
    ptr = ptr->get_next();
  return ptr; 
}

template<class T>
void sll_intersect(sll_t<int>& A, sll_t<int>& B, sll_t<int>& C) {
  sll_l_node_t<T>* ptr = A.get_head();
  while(ptr != NULL && ptr) 
  { if(B.find(ptr->get_data() != NULL)) 
    C.insert_tail(new sll_node_t<int>(ptr->get_data()));
  ptr = ptr->get_next()
  }
}

void sll_union(sll_t<int>& A, sll_t<int>& B, sll_t<int>& C)
{ dll_node_t<int> *ptr = A.head();
// inserta los elementos de A que no están en B
    while (ptr != NULL)
    { if (B.find(ptr->get_data()) == NULL)
      C.insert_tail(new dll_node_t<int>(ptr->get_data()));
    ptr = ptr->get_next();
    }
// inserta todos los elementos de B
    ptr = B.get_head();
    while (ptr != NULL)
    { C.insert_tail(new dll_node_t<int>(ptr->get_data()));
      ptr = ptr->get_next();
    }
}
