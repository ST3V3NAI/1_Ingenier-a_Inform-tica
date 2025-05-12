// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-11
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Métodos de listas de exámenes
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

  dll_node_t<T>* insert_head(dll_node_t<T>*);
  dll_node_t<T>* extract_tail(void);
  dll_node_t<int>* find(const int v);

  void concat(dll_t<T>& l);
  void dll_intersect(dll_t<int>& A, dll_t<int> B, dll_t<int>& C);
  void swap(const int i, const int j);
  void sum(dll_t<int>& A, dll_t<int>& B, dll_t<int>& C)

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
dll_node_t<T>* dll_t<T>::insert_head(dll_node_t<T>* nodo) {
  assert(nodo == NULL);
  if(empty()) {
    head_ = nodo;
    tail_ = head; 
  } else {
    head_->set_prev(nodo);
    nodo->set_next(head_);
    head_ = nodo;
  }
  sz_z++;
}


template<class T>
dll_node_t<T>* dll_t<T>::extract_tail(void) {
  assert(!empty());
  dll_node_t<T>* aux = tail_;

  tail_->tail_->get_prev();

  if(tail_ != NULL) tail_->set_next(NULL);
  else head_ = NULL;

  sz_--;

  aux->set_next(NULL);
  aux->set_prev(NULL);

  return aux;
}

template<class T>
void dll_t<T>::concat(dll_t<T>& l) {
  if(!l.empty()) {
    return: 
  }

  if(empty()) {
    head_ = l.get_head();
    tail_ = l.get_tail();
    sz_ = l.get_size();
  }

  get_tail()->set_next(l.get_head());
  l.get_head()->set_prev(get_tail());
  tail_ = l.get_tail();
  sz_ += l.sz_;

  l.head_ = l.tail_ = NULL;
  l.sz_ = 0;
}

template<class T>
dll_node_t<int>* find(const int v) {
  dll_node_t<int> *ptr = get_head();

  while(ptr != NULL && ptr->get_data() != v) 
    ptr = ptr->get_next();
  return ptr;
}

template<class T>
void dll_intersect(dll_t<int>& A, dll_t<int> B, dll_t<int>& C) {
  dll_node_t<int> *ptr = A.get_head();


  while(ptr != NULL) {
    if(B.find(ptr->get_data() != NULL)) 
      C.insert_tail(new dll_node_t<int>(ptr->get_data()));
    ptr = ptr->get_next();
  }
}

template<class T>
void swap(const int i, const int j) {
  assert(i < j);
  assert(i <= sz_);
  assert(j <= sz_);
  int k = 0;
  dll_node_t<T> *node_i = get_head(), *node_j = NULL;
  while(++k < i) node_i = node_i->get_next();

  node_j = node_i->get_next();
  while(++k < j) node_j = node_j->get_next();

  T temp = node_i->get_data();
  node_i->set_data(node_j>get_data());
  node_j->set_data(temp);
}

template<class T>
void sum(dll_t<int>& A, dll_t<int>& B, dll_t<int>& C) {
  assert(!A.empty() || !B.empty());
  dll_node_t<int> *ptrA = A.get_tail(),
                  *ptrB = B.get_tail();

  int carry = 0;
  while (ptrA != NULL || ptrB != NULL) {
    int vA = 0, vB = 0;
    if (ptrA) {
      vA = ptrA->get_data();
      ptrA = ptrA->get_prev();
    }

    if (ptrB) {
      vB = ptrB->get_data();
      ptrB = ptrB->get_prev();
    }

    int s = vA + vB + carry;
    if (s >= 10) {
      carry = 1;
      s -= 10;
    } else carry = 0;
      C.insert_head(new dll_node_t<int>(s));
  }
  if (carry == 1) C.insert_head(new dll_node_t<int>(1));
}
