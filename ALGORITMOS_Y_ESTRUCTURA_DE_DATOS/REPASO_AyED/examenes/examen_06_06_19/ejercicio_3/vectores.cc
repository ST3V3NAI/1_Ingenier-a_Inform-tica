// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-12
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Metodos de examen de vectores
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>

// Busqueda binaria
int bsearch(const int* v, int i, int d, int x); 

int bsearch(const int* v, int i, int d, int x) {
  int c = -1;
  if(i <= d) {
    c = (i + d) / 2; 
    if(v[c] != x) {
      if(x < v[c]) int c1 = bsearch(v, i , c- 1, x);
      else          int c2 = bsearch(v, c + 1, d, x);
    }
  }
  return c; 
}