// AUTOR: Steven Abolaji Ibidokun 
// FECHA: 19/02/25
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html
// COMPILACIÓN: g++ -g rational_t.cpp main_rational_t.cpp -o main_rational_t

// pauta de estilo [92]: comentarios multilínea usando solo "//"

#include <iostream>
#include <cmath>

// pauta de estilo [41]: ficheros de cabecera agrupados y separados
#include "rational_t.hpp"

using namespace std;

int main()
{
// rational_t a(1, 2), b(3), c;
    rational_t a(8,7), b(35,7), c; 

  // El programa muestra los valores inicialidos y el de c = 0
  cout << "a.value()= " << a.value() << endl;
  cout << "b.value()= " << b.value() << endl;
  cout << "c.value()= " << c.value() << endl;

  // Escribe por pantalla el valor del resultado de la fracción a y b
  cout << "a: ";
  a.write();
  cout << "b: ";
  b.write();

  // Solicita por pantalla el valor que quieres que tenga c, preguntando num y den
  c.read();
  cout << "c: ";
  c.write();

  // FASE II
  // Se declaran los objetos x = 1/3 e y = 2/3 y se muestra su valor por pantalla
  // A continuación se hacen diferentes comparaciones
  rational_t x(1, 3), y(2, 3); 
  x.write(); 
  y.write();
  cout << "x == y? " << (x.is_equal(y) ? "true" : "false") << endl;
  cout << "x < y? " << (x.is_less(y) ? "true" : "false") << endl;
  cout << "x > y? " << (x.is_greater(y) ? "true" : "false") << endl;

  // FASE III
  // Suma los valores de a y b
  cout << "a + b: ";
  a.add(b).write();
  
  // Resta los valore de a y b
  cout << "b - a: ";
  b.substract(a).write();

  // Multiplica los valores de a y b 
  cout << "a * b: ";
  a.multiply(b).write();
  
  // Divide los valore de a y b
  cout << "a / b: ";
  a.divide(b).write();

  // Modificación
  cout << "La suma total es: "; 
  a.suma_par(b); 

   return 0;
}

  