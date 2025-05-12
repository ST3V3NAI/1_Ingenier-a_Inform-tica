// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-04
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Ejercicio 4
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>

bool is_palindrome(const vector_t<char>&s, const int i, const int d) {
  if(i >= d) return true;
  return (s[i] == s[d] && is_palindrome(s, i + 1, d - 1));
}