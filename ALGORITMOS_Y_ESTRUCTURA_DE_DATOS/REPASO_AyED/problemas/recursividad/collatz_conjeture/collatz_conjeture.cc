// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-03
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Conjetura de collatz
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>
#include <cmath>

unsigned collatzSequence(const unsigned int number) {
  if(number == 1) return 1;
  return (number % 2 == 0)? 1 + collatzSequence(number / 2) : 1 + collatzSequence(3 * number + 1);
}

int main() {
  int number{0};

  std::cout << "Introduzcame un número: ";
  std::cin >> number; 

  std::cout << "Longitud de secuencia de collatz: " << collatzSequence(number) << std::endl; 
}