// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-13
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Métodos de examenes sobre conjuntos
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
void dif_sim(const sll_t<int>& A, const sll_t<int>& B, sll_t<int>& C) {
  sll_node_t<int>* ptr = A.get_head();
  
  while(ptr != NULL) {
    if(B.search(prt->get_data() == NULL));
    C.push_front(new sll_node_t<int>(ptr->get_data()));
  ptr = ptr->get_next(); 
  }

  aux = B.get_head();
  while(ptr != NULL) {
    if(A.search(ptr->get_data == NULL));
      C.push_front(new sll_node_t<int>ptr->get_data());
    ptr = ptr->get_next();
  }
}

