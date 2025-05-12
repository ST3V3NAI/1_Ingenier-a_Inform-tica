// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-10
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Recorrido inverso de un vector
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>
#include <vector>

int main() {
  std::vector<int> v = {1, 2, 3, 4, 5};

  for(int i = v.size() - 1; i >= 0; i--) {
    std::cout << v[i] << std::endl;
  }


}