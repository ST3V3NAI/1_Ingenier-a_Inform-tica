// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-12
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Métodos de examen de listas enlazadas
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

  ~sll_t(void);

  void destroy(sll_node_t<T>* n);

  void writeReverseStack(std::ostream& os); 

  // E/S
  std::ostream& write(std::ostream& = std::cout) const;

 private:
 // Atributos
  sll_node_t<T>* head_;  // Puntero que apunta a cabeza
};

// Destructor iterativo.
template<class T>
sll_t<T>::~sll_t(void) {
  while(!empty()) {
    sll_node_t<T>* aux = head_;
    head_ = head_->get_next();
    delete aux;
  }
}


// Destructor recursivo
template<class T>
sll_t<T>::~sll_t(void) {
  destroy(head_);
}

template<class T>
void sll_t<T>::destroy(sll_node_t<T>* n) {
  if(n != NULL) {
    destroy(n->get_next());
    delete n; 
  }
};

// Elementos de la lista que sean pares en orden inverso
template<class T>
void writeReverseStack(std::ostream& os) {
  stack_l_t<T> stack; 
  sll_node_t<T>* aux = head_; 

  while(aux != NULL) {
    if(aux -> get_data() % 2 == 0) 
        stack.push(get_head());
      head_ = head->get_next();
  }

  while(!stack.empty()) {
    os << stack.top();
    stack.pop()
  }
}
