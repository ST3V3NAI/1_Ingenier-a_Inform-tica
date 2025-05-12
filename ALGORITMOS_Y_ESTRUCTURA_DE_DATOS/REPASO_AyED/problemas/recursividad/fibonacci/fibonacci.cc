// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-04
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Sucesión de Fibonacci Recursiva
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>

// int sucesionDeFibonacci(const unsigned int n) {
// return (n > 1)? sucesionDeFibonacci(n - 1) + sucesionDeFibonacci(n - 2) : 1;
// }

unsigned sucesionDeFibonacci(const unsigned int n) {
  unsigned anterior1 = 1, anterior2 = 1, actual = 1;
  for(unsigned i = 2; i <= n; ++i) {
    actual = anterior1 + anterior2;
    anterior1 = anterior2;
    anterior2 = actual;
  }
  return actual;
}

int main() {
  int n{0};

  std::cin >> n; 
  std::cout << sucesionDeFibonacci(n); 
}