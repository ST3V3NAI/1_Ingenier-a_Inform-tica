// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-04
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Coeficiente Binomial Recursivo
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>

unsigned int BinomialCoefficient(unsigned int n, unsigned int k) {
  if(k == 0 || k == n) return 1;
  else return BinomialCoefficient(n - 1, k - 1) + BinomialCoefficient(n - 1, k);
} 

int main() {
  int k{1}, n{10};

  std::cout << BinomialCoefficient(n, k);

  return 0;
}