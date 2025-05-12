// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-04
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Busqueda recursiva de elementos de un vector
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html


#include <iostream>
#include <cmath>
#include <algorithm>

int maximumElemOfAnVector(const int *V, const unsigned int n) {
  return (n == 1)? V[0] : std::max(V[n-1], maximumElemOfAnVector(V, n - 1));
}

int main() {
  int n = 10; 
  int *V = new int[n];

  for(int i = 0; i < n; ++i) {
    V[i] = i + 1;
  }
 
  std::cout << maximumElemOfAnVector(V, n) << std::endl;
  delete[] V; 

}