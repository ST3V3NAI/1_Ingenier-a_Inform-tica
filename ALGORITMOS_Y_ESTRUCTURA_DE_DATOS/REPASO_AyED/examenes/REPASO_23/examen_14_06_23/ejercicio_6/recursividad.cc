// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-13
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: Ejercicios de recursividad
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>

int Ackerman(int x, int y) {
  if(x == 0) return y + 1;
  return (y == 0)? Ackerman(x- 1, 1) : Ackerman(x - 1, Ackerman(x, y- 1));
}