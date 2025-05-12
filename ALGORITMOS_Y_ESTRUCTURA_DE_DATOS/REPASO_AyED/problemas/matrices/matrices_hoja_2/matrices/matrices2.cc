// Calcular la sumatoria de los elementos de la diagonal 
// principal de una matriz

constexpr int N = 3;
#include <iostream>

int main() {
  // Arreglo de arreglos de enteros
  int C[N][N] = {{ 2, 3, 4},
                 { 2, 3, 4},
                 { 2, 3, 4}};

  int suma_diagonal_principal = 0; 

  for(int i = 0; i < N; i++) {
    suma_diagonal_principal += C[i][i];
  }

  std::cout << "Suma de los elementos de la diagonal principal: " << suma_diagonal_principal << std::endl;
  return 0; 
  
}