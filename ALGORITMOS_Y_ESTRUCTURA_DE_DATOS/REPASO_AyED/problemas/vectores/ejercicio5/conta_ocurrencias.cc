// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-10
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Contabilización de ocurrencia de elemento
// de un vector que se mayor o igual a un valor dado
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>

constexpr int N = 10;

int main() {
  int v[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int counter{0}, num{0};

  std::cout << "Digame un num: ";
  std::cin >> num;

  for(int i = 0; i < N; i++) {
    if(v[i] >= num) {
      counter++;
    }
  }

  std::cout << "Ocurrencias: " << counter;
}