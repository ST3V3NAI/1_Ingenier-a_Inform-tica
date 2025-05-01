// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-04-27
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº:  Desarrollar el destructor de la lista sll_t de forma recursiva 
// implementando un método privado void sll_t<T>::destroy_(sll_node_t<T>*) que será llamado por el destructor:
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

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

  void destroy_(sll_node_t<T>* p); 
  void reverse(sll_node_t<T> *p);

  // E/S
  std::ostream& write(std::ostream& = std::cout) const;

 private:
 // Atributos
  sll_node_t<T>* head_;  // Puntero que apunta a cabeza
};

// Destructor
template<class t>
void ::destroy_(sll_node_t<T>* p) {
  if(p != NULL) {
    destroy(p->get_next());
    delete p;
    p = NULL;
  }
}

template<clas T>
void ::reverse(sll_node_t<T> *p) {
  assert(p != NULL);
  if(p->get_next() == NULL) head_ = p;
  else {
    revese(p->get_next()); 
    p->get_next()->set_next(p);
    p->set_next(NULL);
  }
}
;
