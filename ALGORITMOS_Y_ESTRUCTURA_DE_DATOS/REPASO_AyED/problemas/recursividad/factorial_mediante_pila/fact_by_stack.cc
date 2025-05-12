// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-04
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Factorial Recursivo con Pila
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>
using namespace std;

unsigned factorial(unsigned n) {
  unsigned resultado, siguiente;
  if (n == 0) resultado = 1;
  else { 
    cout << "push " << n << endl;
    siguiente = factorial(n - 1);
    cout << "pop " << siguiente << endl;
    cout << "pop " << n << endl;
    resultado = n * siguiente;
  }
  cout << "push " << resultado << endl;
  return resultado;
}

unsigned factorial(unsigned n) {
  stack_t<unsigned> pila;
  unsigned resultado;
  while (n > 0)
    pila.push(n--);
  pila.push(1);  // factorial(0)
  while (!pila.empty()) {
    resultado = pila.top(); pila.pop();  // siguiente  
    if (!pila.empty()) {
      n = pila.top(); pila.pop();
      pila.push(n * resultado);
  } }
  return resultado;
}