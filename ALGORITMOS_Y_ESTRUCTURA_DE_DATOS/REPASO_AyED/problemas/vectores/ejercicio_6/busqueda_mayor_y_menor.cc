// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-10
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Busqueda del mayor y menor elemento
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>

constexpr int N = 10;

int main() {
  int v[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int max = 999, min = -999;

  for(int i = 0; i < N; i++) {
    if(max > v[i]) {
      max = v[i];
    }
  }

  for(int j = 0; j < N; j++) {
    if(min < v[j]) {
      min = v[j];
    }
  }

  std::cout << "El maximo es este: " << min << std::endl;
  std::cout << "El minimo es este: " << max << std::endl;
}