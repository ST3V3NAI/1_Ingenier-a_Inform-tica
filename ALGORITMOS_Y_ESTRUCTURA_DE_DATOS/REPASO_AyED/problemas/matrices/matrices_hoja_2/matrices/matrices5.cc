//  Mostrar los elementos y la sumatoria de la submatriz triangular
// superior de una matriz, sin incluir la diagonal principal.

constexpr int N = 3;
#include <iostream>

int main() {
  int C[N][N] = {
      { 2, 3, 4},
      { 2, 9, 4},
      { 3, 3, 4}
  };

  int suma = 0;

  std::cout << "Elementos de la submatriz triangular superior: " << std::endl;
  for (int i = 0; i < N; i++) {
    for (int j = i; j < N; j++) {
      if(i < j) {
      std::cout << C[i][j] << " ";
      suma += C[i][j];
      } 
    }
  }
  std::cout << std::endl; 
  std::cout << "La suma es: " << suma; 
}