// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-10
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Identificando elementos de un vector
// multiplos de 3
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>
#include <vector>

int main() {
  std::vector<int> v = {1, 3, 2, 6};
  std::vector<int> v_de_3;
  int multiplos_de_tres = 0;

  for(int i = 0; i < v.size(); i++) {
    if(v[i] % 3 == 0) {
      multiplos_de_tres++;
      v_de_3.emplace_back(v[i]);
    }
  }

  std::cout << "Los múltiplos de tres del vector son: " << multiplos_de_tres << std::endl;
  std::cout << "Los elementos son: ";
  for(int j = 0; j < v_de_3.size(); j++) {
    std::cout << v_de_3[j] << " ";
  }
}