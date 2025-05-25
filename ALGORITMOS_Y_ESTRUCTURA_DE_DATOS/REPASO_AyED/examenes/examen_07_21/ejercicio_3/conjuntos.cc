// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-13
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Métodos de conjutnos de examenes
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>
#include "block_t.hpp"

typedef unsigned int conjunto_t;

class bitset_c {
  private:
    block_t block; // Siendo block_t la respuesta al ejercicio (a)
  public: 
    bitset_c(): block_(0) {};
    void insert(const char); // Ejercicio (b)
};

void insert(const char c) {
  assert((47 < c && c < 58) || (64 < c && c < 71));
  block_t uno = 0x1, 
  block_ |= (uno << (c - (c < 58? 48 : 55)));

}