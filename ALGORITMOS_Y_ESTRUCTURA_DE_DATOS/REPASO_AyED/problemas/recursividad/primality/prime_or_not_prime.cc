// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-03
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Función recursiva que verifica, si un número es primo o no
// primo(n, divisor)
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>

bool isPrime(const unsigned int number, const unsigned int divisor = 2) {
  if(number == divisor) return true;
  if(number % divisor) return false;
  return (isPrime(number, divisor + 1));
}

int main() {
  int number{0};

  std::cin >> number; 
  std::cout << "El número " << number;
  if(isPrime(number)) {
    std::cout << " es primo" << std::endl;
  } else {
    std::cout << " no es primo" << std::endl;
  }
}