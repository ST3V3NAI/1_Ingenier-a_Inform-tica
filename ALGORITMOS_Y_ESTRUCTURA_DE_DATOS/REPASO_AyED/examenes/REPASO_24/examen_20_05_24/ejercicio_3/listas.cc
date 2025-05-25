// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-13
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Métodos de exámenes de listas
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html


#include "sll_node_t.h"

using namespace std;

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

  writeReverse(ostream& os);
  write1(sll_node_t<T>* node, ostream& os);
  writeDirect(ostream& os);
  write2(sll_node_t<T>* node, ostream& os);
  writeReverseStack(ostream& os);

  // E/S
  std::ostream& write(std::ostream& = std::cout) const;

 private:
 // Atributos
  sll_node_t<T>* head_;  // Puntero que apunta a cabeza
};

template<class T>
void writeReverse(ostream& os) 
{ write(head_, os);
}

template<class T>
void write1(sll_node_t<T>* node, ostream& os) 
{ if(node != NULL)
  { write1(node->get_data(), os);
    os << node->get_data();   
  }
}

template<class T>
void writeDirect(ostream& os) 
{ write2(head_, os);
}

template<class T>
void write2(sll_node_t<T>* node, ostream& os) const 
{ if(node != NULL)
  { os << node->get_data();
    write2(node->get_next(), os);
  }
}

template<clas T>
void writeReverseStack(ostream& os)
{ stack<T> stack;
  sll_node_t<T> aux = head_;

  while(aux != NULL)
  { stack.push(aux->get_data()); 
    aux = aux->get_next();
  }

  while(!stack.emtpy()) 
  { os << stack.top();
    stack.top();
  }
};

