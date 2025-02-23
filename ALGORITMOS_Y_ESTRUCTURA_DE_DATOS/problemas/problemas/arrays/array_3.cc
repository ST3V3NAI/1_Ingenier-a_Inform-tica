// Recorrido un vector en orden inverso (del último al primer elemento) e
// impresión sus elementos (variante de "Recorrido de un vector (1)")

#include <iostream>
constexpr int N = 5;

int main() {
  int v[N] = {3, 2, 1, 6, 5}; 

  std::cout << "[ ";
  for(int i = (N-1); i >= 0; i--) {
    std::cout << v[i];
    if(i > 0) { // Si no es el ultimo número
      std::cout << ", "; 
    }
  }
  std::cout << " ]\n";
}