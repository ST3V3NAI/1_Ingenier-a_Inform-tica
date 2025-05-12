// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-12
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Métodos sobre conjuntos
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>

typedef unsigned short conjunto_t;

// Función que elimina un elemento i del conjunto C
void remove(conjunto_t& C, unsigned i);

void remove(conjunto_t& C, unsigned i) {
  conjunto_t uno = 0x1;
  uno <<= i;
  C &= ~uno; 
}

// Desarrollar la función XOR
conjunto_t XOR(conjunto_t A, conjunto_t B);

conjunto_t XOR(conjunto_t A, conjunto_t B) {
  conjunto_t C;
  C = (A | B) & ~(A & B);
  return C;
}



