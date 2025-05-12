// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-04
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Ordenación Rápida 
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>
#include <cmath>
#include <algorithm>

int partir(int *v, int ini, int fin) {
  int i = ini + 1, d = fin, p = v[ini];
  while(i <= d) {
    while(i <= d && v[i] <= p) ++i;
    while(i <= d && p <= v[d]) --d;
    if(i < d) std::swap(v[i++], v[d--]);
  }
  std::swap(v[ini], v[d]);
  return d; 
}