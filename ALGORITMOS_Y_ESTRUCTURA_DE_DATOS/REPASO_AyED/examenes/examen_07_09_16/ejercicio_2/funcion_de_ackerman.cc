// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-11
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Ackerman function
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>

int Ackerman(int m, int n);

int main() {
  int x{0}, y{0};

  std::cin >> x >> y;
  std::cout << Ackerman(y, x);
}

int Ackerman(int m, int n) {
  if(n == 0) return m + 1;
  else {
    if(n > 0) return Ackerman(m - 1, 1);
    else return Ackerman(m - 1, Ackerman(m, n + 1));
  }
}