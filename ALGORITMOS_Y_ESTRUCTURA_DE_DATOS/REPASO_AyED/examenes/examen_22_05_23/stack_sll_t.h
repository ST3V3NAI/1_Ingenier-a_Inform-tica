// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-02
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: Clase stack_sll_t
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>
#include <cassert>
#include "sll_t.h"

template<class T> 
class stack_sll_t {
  public: 
    // Constructor
    stack_sll_t(void) : l_() {}
    // Destructor
    ~stack_sll_t(void) {}

    // Apartados de la template
    void push(const T&);
    void pop(void);
    const T& top(void) const;
    bool empty(void) const;
    int sumaElementos(stack_sll_t<int>& p); 
    void sll_union(const sll_t<int>& A, const sll_t<int>& B, sll_t<int>& C);

    // E/S	
    std::ostream& write(std::ostream& os = std::cout) const;
  private: 
    sll_t l_; // Atribuo privado para implemtar la pila
}; 

// Método Push
template<class T> 
void stack_sll_t<T>::push(const T& data) {
  sll_node_t<T>* node = new_sll_node_t<T>(data);
  assert(node == NULL);
  l_.insert_head(node);
}

// Método Pop
template<class T>
void stack_sll_t<T>::pop() {
  assert(!empty());
  delete l_.extract_head();
}

// Método Top
template<class T>
const T& stack_sll_t<T>::top(void) const {
  assert(!empty()); 
  l.get_head()->get_data(); 
}

// Método Empty
template<class T>
bool stack_sll_t<T>::empty(void) const {
  return l_.empty();
}

// Método que suma los elementos de una pila (recursivo);
template<class T>
int stack_sll_t<T>::sumaElementos(stack_sll_t<int>& p) {
  int cima = 0;
  if(p.empty()) return 0;
  else {
    cima = p.top();
    p.pop();
    return (cima + sumaElementos(p));
  }
}

// Método que ejecuta lo unión de dos conjuntos (A y B) y los almacena en otro llamado C
template<class T>
void stack_sll_t<T>::sll_union(const sll_t<int>& A, const sll_t<int>& B, sll_t<int>& C) {
  sll_node_t<int> *prt = A.head();
  // insertamos los elementos de A que no están en B;
  while(ptr != NULL) {
    if(B.search(ptr->get_data()) == NULL) {
        C.insert_head(new sll_node_t<int>(ptr->get_data()));
      ptr = ptr->get_next();
    }
  } 

  // inserta todo los elementos de B
  ptr = B.get_head();
  while(ptr != NULL) {
    C.insert_head(new sll_node_t<int>(ptr->get_data()));
      ptr = ptr->get_next(); 
  }
}










