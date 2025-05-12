// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-10
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Búsqueda de un elemento dentro de un vector
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>

int main() {
  int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n{0};

  std::cout << "Dame un número para buscar: ";
  std::cin >> n;

  for(int i = 0; i < 9; i++) {
    if(v[i] == n) {
      std::cout << "esta en el vector";
    }
  }

}