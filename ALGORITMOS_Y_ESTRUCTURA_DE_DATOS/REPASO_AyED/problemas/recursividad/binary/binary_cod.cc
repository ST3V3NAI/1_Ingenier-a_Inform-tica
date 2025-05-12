// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-03
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Calculo de codificación binaria recursiva
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html


#include <iostream>

unsigned int binaryCodification(const unsigned int number) {
  return (number > 1)? binaryCodification(number / 2) * 10 + (number % 2) : number; 
}

int main() {
  int number{0};

  std::cout << "Introduzca un número: ";
  std::cin >> number; 

  std::cout << "Su número codificado es: " << binaryCodification(number) << std::endl; 

  return 0;
}