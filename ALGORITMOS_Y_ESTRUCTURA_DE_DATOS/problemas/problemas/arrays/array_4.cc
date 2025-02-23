// Almacenamiento en un vector de los n primeros términos de la Sucesión
// de Fibonacci (variante de "Recorrido de un vector (1)")

#include <iostream>

constexpr int N = 10; 

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