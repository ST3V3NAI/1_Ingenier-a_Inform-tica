// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-11
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Función recursiva de Ackermann
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>

// Considérese la función de Ackermann. Implementar un algoritmo
// recursivo que calcule el valor de la función para cualquier par de términos.
int Ackerman(int x, int y);

int main() {
  int x, y;

  std::cin >> x >> y;
  std::cout << Ackerman(x, y);
}

int Ackerman(int x, int y) {
  if(x == 0) return y + 1;
  else {
    if(y == 0) return Ackerman(x - 1, y);
    else return Ackerman(x - 1, Ackerman(x -1 , y - 1));
  }
}