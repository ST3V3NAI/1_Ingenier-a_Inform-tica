// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 2.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 5
// ESTILO: Google C++ Style Guide
// COMENTARIOS: Clase RPN (Reverse Polish Notation)
// cmando para compilar


//g++ -o programa main_rpn_t.cc dll_node_t.h dll_t.h stack_l_t.h queue_l_t.h rpn_t.h
// ./programa < data_rpn_t_3.txt 


#ifndef RPNT_H_
#define RPNT_H_

#include <iostream>
#include <cctype>
#include <cmath>
//#include <cstdlib>

#include "queue_l_t.h"

// Clase RPN (Reverse Polish Notation)
// RPN es vasicamente pone en vez de 2+3, poner 2 3+
template <class T> class rpn_t {
 public: // metodos
  // constructor
 rpn_t(void) : stack_() {}

  // destructor
  ~rpn_t() {}

  // operaciones
  const int evaluate(queue_l_t<char>&);

 private: //atributos
  T stack_;
  void operate_(const char operador);
  void suma();

};


// operaciones
//esta funcion escrive por pantalla la oeracion polaca
//recive una cola de caraccteres
template<class T> const int rpn_t<T>::evaluate(queue_l_t<char>& q) { 
  while (!q.empty()) 	{ // cuando esa cula no sea vacia
    char c = q.front(); // el primer caracter de la cola, será c
    
    q.pop(); // y lo quitamos
    std::cout << "Sacamos de la cola un carácter: " << c; // mostramos por pantalla cpmp lo hemos sacado

    if (isdigit(c)) { // si el c es un digito ( recurre directamente a la funcion is digit)
      // recuersa que isdigit es una funcion de la biblioteca de cctype
      int i = c - '0'; // enetonces haemos que se convierta en un entero de esta forma
      // poner código
      stack_.push(i);         //meter i en pila (stack_)
      std::cout << " (es un dígito) " << std::endl // podemo afirmar que es un dígito
		  << "   Lo metemos en la pila..." << std::endl; // lo metemos en la pila
    } else { // si no es un digito
      std::cout << " (es un operador)" << std::endl; // entonces está claro que es un operador
      // poner código
      operate_(c);
    }
  }
  // poner código
  // stack_.write();      //mostrar pila por consola
  return stack_.top();

}

// esta es la funcion que nos clcula la operacion polaca siu
template<class T> void rpn_t<T>::operate_(const char c) { // necesitamos un caracter
  //assert(c == '+' || c == '-' || c == '*' || c == '/'); // tenemos que comprobar que es un operador válido
  int operando1; // creamos dos variables que calcularemos
  int operando2;

  // poner código
  
  if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^' || c== '<'){ //si es uno de estos operadores entonces
    operando1 = stack_.top();           //cogiendo de la pila
    stack_.pop();                       //elimando de la pila
    std::cout << "   Sacamos de la pila un operando: " << operando1 << std::endl;
    operando2 = stack_.top();           //cogiendo de la pila
    stack_.pop();                       // lo eliminamos de la pila
    std::cout << "   Sacamos de la pila otro operando: " << operando2 << std::endl;
 
  } else if (c == 'r' || c == 'c' || c == 'l' ){ // si es uno de estos solo es necesario un elemento
    operando1 = stack_.top();           //cogiendo de la pila
    stack_.pop();                       //elimando de la pila
    std::cout << "   Sacamos de la pila un operando: " << operando1 << std::endl;
  } else { // si no es un caracter reconocido
  std::cout << "No se reconoce ese operando";
  exit(EXIT_SUCCESS); //si no es pues chao
  }

  // ahora creamos un switch, que hará algo segun el caracter que nos detecte
  switch (c) { // cojemos c y vemos que hay
    case '+':
    stack_.push(operando2+operando1); // en el caso de que sea +, 
    // la funcion push lo que hace es añadir un elemento en el tope de la pila (stack)
      break;
    
    case '-':
    stack_.push(operando2-operando1);
      break;

    case '*':
    stack_.push(operando2*operando1);
      break;

    case '/':

      if (operando2 > operando1){
        stack_.push(operando2/operando1);  // el numero mayor arriba 
      } else {
        stack_.push(operando1/operando2);  // el numero mayor arriba, so no daria 0 todo el rato
      }
      break;

    case '^': // elevado a 
    stack_.push(pow(operando2,operando1));
      break;

    case 'r':
    stack_.push(sqrt(operando1));
      break;

    case 'c':
    stack_.push(pow(operando1,2));
      break;

    case 'l':
    stack_.push(log2(operando1));
      break;

    case '<':
      if( operando1 << operando2){
        stack_.push(operando1);
      }

      if( operando1 >> operando2){
        stack_.push(operando2);
      }

      break;
    

    
  }

  // poner código
  std::cout << "   Metemos en la pila el resultado: " << stack_.top() << std::endl;
}



#endif  // RPNT_H_

