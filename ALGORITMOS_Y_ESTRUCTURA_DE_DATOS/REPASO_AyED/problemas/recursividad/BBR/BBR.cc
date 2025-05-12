// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-04
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Búsqueda Binaria Recursiva
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>

bool busquedaBinariaRecursiva(int v[], int i, int d, int x) {
  if (i > d) return -1;
  int c = (i + d) / 2;
  if (v[c] == x) return c;
  if (x < v[c])  return busquedaBinariaRecursiva(v, i, c - 1, x);
  if (v[c] < x)  return busquedaBinariaRecursiva(v, c + 1, d, x); 
}