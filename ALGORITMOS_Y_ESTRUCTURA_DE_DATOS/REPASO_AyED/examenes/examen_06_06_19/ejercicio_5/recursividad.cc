// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-12
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Ejercicios de recurisvidad de examenes
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>

int mcd(int x, int y);

int mcd(int x, int y) {
  return (y > 0)? mcd(y, x % y) : x; 
}

