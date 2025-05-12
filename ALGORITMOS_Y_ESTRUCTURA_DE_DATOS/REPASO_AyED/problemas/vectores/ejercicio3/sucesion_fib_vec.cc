// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-10
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Sucesión de fibonacci en un vector
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

constexpr int N = 10; 

#include <iostream>

int main() {
  int term_1{0}, term_2{1}, next_term{0}; 
  int v[N];

  if(N <= 0) {
    std::cout << "El tamaño del vector debe de ser mayor que 0\n"; 
    return 1;
  }
  
  v[0] = 0;
  v[1] = 1; 

  std::cout << "[ ";
  for(int i = 2; i < N; i++) {
    v[i] = v[i - 1] + v[i - 2];
  }
  for(int i{0}; i < N; i++) {
    std::cout << v[i];
    if (i < N - 1) {
      std::cout << ", "; 
    }
  }
  std::cout << " ]\n"; 

  return 0;
}