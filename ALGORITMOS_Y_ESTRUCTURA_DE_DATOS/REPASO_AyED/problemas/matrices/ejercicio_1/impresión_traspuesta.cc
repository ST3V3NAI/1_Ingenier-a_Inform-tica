// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-10
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Impresión de traspuesta
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>

int main() {
  int M[3][3] = {{1, 2, 3},
                 {1, 2, 3}, 
                 {1, 2, 3}};

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) 
      std::cout << M[j][i] << " ";
    std::cout << std::endl;
  }
}