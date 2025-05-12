// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-11
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Métodos de listas de examen
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>
#include <cmath>


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

  std::ostream& write(std::ostream& os);

  std::ostream& write(sll_node_t<int>* node, ostream& os) const;

  ostream& write(sll_node_t<int>* node, ostream& os) const;

  int cuenta(double val, double eps) const;
  int cuenta_cero_TIND(double eps) const;

  // E/S
  std::ostream& write(std::ostream& = std::cout) const;

 private:
 // Atributos
  sll_node_t<T>* head_;  // Puntero que apunta a cabeza
};

template<>
std::ostream& sll_t<int>::write(std::ostream& os) const {
  write(head_, os);
}

template<>
std::ostream& sll_t<int>::write(sll_node_t<int>* node, std::ostream& os) const {
  if(node != NULL) {
    write(node->get_next(), os);
    os << node->get_data() << std::endl;
  }
}

template <>
std::ostream& sll_t<int>::write(sll_node_t<int>* node, std::ostream& os) const
{ if(node != NULL){
  os << node->get_data() << std::endl; write(node->get_next(), os);
  }
}

template <>
int sll_t<double>::cuenta(double val, double eps) const {
  sll_node_t<double>* aux = head_;
  int counter = 0;

  while(aux != NULL) {
    const double lval = aux->get_data();
    if(fabs(lval - val) < eps)
      counter++;
    aux = aux->get_next();
  }
  return counter;
}


