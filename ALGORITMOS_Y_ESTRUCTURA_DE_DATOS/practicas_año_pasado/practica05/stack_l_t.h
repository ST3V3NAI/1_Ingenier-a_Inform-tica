// AUTOR: Víctor
// FECHA: 
// EMAIL: 
// VERSION: 2.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// TEMA: 5
// ESTILO: Google C++ Style Guide
// COMENTARIOS: 

#ifndef STACKL_H_
#define STACKL_H_

#include <iostream>
#include <iomanip>
#include <cassert>

#include "dll_t.h"
using namespace std;
// Clase para pilas mediante estructura dinámica
// esta es la clase que crea una pila llamando directamente a una lista enlazada
template<class T> class stack_l_t {
 public:	//metodos
  // constructor
  stack_l_t(void) : l_() {}

  // destructor
  ~stack_l_t(void) {}

  // operaciones
  void push(const T&);
  void pop(void);
  const T& top(void) const;
  bool empty(void) const;
  int sum_pair_(void) const;
  int mayor_el();
  int cont_pair();
  // E/S	
  std::ostream& write(std::ostream& os = std::cout) const;

private: //atributos
  dll_t<T> l_; // llama directamente a una lista enlazada
  int count(void) const;

};


// operaciones
// push añade el dato que quieras en la cima de la pila
template<class T> void stack_l_t<T>::push(const T& dato) {


  dll_node_t<T>* nodo = new dll_node_t<T>(dato); // creamos una nodo con el dato
  assert(nodo != NULL); // evidentemente no puede ser nulo
  l_.push_front(nodo); // y con un pushfont porque en verdad es un lista enñaada lo metemos
  std::cout << "\n----MODIFICACION :    El numero de elementos en la pila es: " << count() << std::endl; //-----------------
}

//pop elimina el valorde la cima de la pila
template<class T> void stack_l_t<T>::pop(void) {
  assert(!empty()); // la lista tiene que estar llkena
  delete l_.pop_front(); // literalmente hace un delete

  // MODIFICACION
  // std::cout << std::endl;
  // std::cout << "---------- Suma de elementos pares en la pila: " << sum_pair_() << std::endl;
  // std::cout << std::endl;
}

//top() es un const que lo que hace es devolver el valor que este en la cima de la pila
template<class T> const T& stack_l_t<T>::top(void) const {
  assert(!empty()); // li lista no puede estar vacía
  return l_.get_head()->get_data(); // basicamente como es una lista ssacamos el primer elemento y luego cogemos el data
}

// empty es un bool que devuelve 1 si esta empty
template<class T> bool stack_l_t<T>::empty(void) const {
  return l_.empty(); // pero literal recurre a la funcion emty que ya hie con las listas enlazadas
}

// E/S
// para escribir por el taclado y hacer couts de una pila
template<class T> std::ostream& stack_l_t<T>::write(std::ostream& os) const {
  dll_node_t<T>* aux = l_.get_head(); //lo que hacemos es apuntar con un aux a la parte mas alta de la pila
  while (aux != NULL) { // mientraas el puntero aux este apuntando corrrectamente lo que hare
    os << " │ " << std::setw(2) << aux->get_data() << "  │" << std::endl; //imprimimos el dato por pantalla
    // setw(2) solo permite mostrar 2 elementos , osea si tengo el 3, muestra 03
    aux = aux->get_next(); // acemos que apunte al siguiente para que asi recorramos la lista enlazada
  }
  os << " └─────┘" << std::endl; // el tope de abajo de la pila
  return os;
}

// ------------- MODIFICAIONES--------------------

//sumar los elementos pares de la pila
template<class T> int stack_l_t<T>::sum_pair_(void) const {
  
  int suma_pares = 0; // inicamos una suma a 0

  dll_node_t<T>* aux = l_.get_head(); // creamos un puntero que apunte al inicio de nuestra lista enlazada

  while (aux != NULL){ // misntras ese puntero apunte bn

    if (aux->get_data() % 2 == 0) { // si resulta que al dividir el dato entre 2 es par
      suma_pares += aux->get_data(); // sumamos el valor par a la suma variable
    }
    aux = aux->get_next(); // y avanzamos para asi recorrer la lista enlazada
    
  }
  return suma_pares; // la devolvemos
}

// contar los elementos pares de una pila
template<class T> int stack_l_t<T>::cont_pair(){
  int par = 0;
  while(!empty()){
    int numeros = top();
    if(numeros % 2 == 0){
      par++;
    }
    pop();
  };
  return par;
}

// ----------------------------------------------------------------------




//Modificacion privada de stak que cuenta los elementos de una pila y es llamado cada  vez que se hace un push
template<class T> int stack_l_t<T>::count(void) const {
  
  int elementos = 0;  // iniciamos el contador de los elementos de la pila a 0

  dll_node_t<T>* aux = l_.get_head(); // hacemos que un puntero auxiliar apunte al primer nodo de la lista enlazada, ( la pila )

  while (aux != NULL){  // mientras resulte que ese puntero apunta bien
    elementos++; // entonfes sumaremos uno a los elementos 
    aux = aux->get_next(); // y por ultimo hacemos que el puntero apunte a el nodo siguiente, osea el siguiente de la fila
    
  }
  return elementos;
}







// saber cual es el elemento mayor de la pila:

template<class T> int stack_l_t<T>::mayor_el(){
  int mayor = 0;
  while(!empty()){
    int numeros = top();
    if(numeros >> mayor){
      mayor = numeros;
    }
    pop();
  };
  
  return mayor;
}




#endif  // STACKL_H_
