// AUTOR: Stevim Abolaji Ibidokun
// FECHA: 14/03/25
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 3.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 4
// ESTILO: Google C++ Style Guide
// COMENTARIOS: 
// COMPILACIÓN: g++ -g main_sll.cc -o main_sll
// EJECUCIÓN: ./main_sll

#include <iostream>

#include "sll_t.h"

#define N_CHARS 26

using namespace std;

int main(void)
{
  sll_t<char> lista;

  // Inserción de N_CHARS elementos ('a', 'b, 'c' ...) a la lista por el frente
  for (int i = 0; i < N_CHARS; i++)
    lista.push_front(new sll_node_t<char>('a' + i));

  // Impresión de la lista elemento a elemento
  lista.write(cout);
  cout << endl;

  // Extracción de elemento 1 por el frente
  sll_node_t<char>* nodo = lista.pop_front();
  char dato = nodo->get_data();
  delete nodo;

  // Impresión del elemento 1 extraído
  cout << "Dato 1: " << dato << endl;

  // Extracción de elemento 2 por el frente
  nodo = lista.pop_front();
  dato = nodo->get_data();
  delete nodo;

  // Impresión del elemento 2 extraído
  cout << "Dato 2: " << dato << endl;

  // Extracción de elemento 3 por el frente
  nodo = lista.pop_front();
  dato = nodo->get_data();
  delete nodo;

  // Impresión del elemento 3 extraído
  cout << "Dato 3: " << dato << endl;

  // Impresión de la lista elemento a elemento
  lista.write(cout);
  cout << endl;

  // Búsqueda e impresión del elemento 4 con valor 'n'
  nodo = lista.search('n');
  dato = nodo->get_data();
  cout << "Dato 4: " << dato << endl; 

  // Extracción del elemento siguiente al de valor 'n' localizado anteriormente
  nodo = lista.erase_after(nodo);
  delete nodo;
  cout << "Se ha extraído la letra 'm'" << endl;

  // Impresión de la lista elemento a elemento
  lista.write(cout);
  cout << endl;	

  // Intercambio del primero con el segundo
  lista.swap12();
  cout<< "Se ha intercambiado primero ysegundo de la lista" << endl;
  lista.write(cout);
  cout << endl; 

  lista.duplicate();

  cout << "Se han duplciado los elementos de la lista" << endl; 
  lista.write(cout);
  cout << endl;

  lista.duplicate_elements();
  cout << "Se ha duplicado los elementos de la lista" << endl; 
  lista.write(cout);
  cout << endl; 

  lista.deleting_even_pos_elements();
  cout << "Se han eliminado los elementos pares de la lista" << endl;
  lista.write(cout);
  cout << endl;


  lista.deleting_odd_pos_elements();
  cout << "Se han eliminado y transladado los nodos impares" << std::endl;
  lista.write(cout);
  return 0;
}
