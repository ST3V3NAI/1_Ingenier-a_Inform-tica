//  Calcular la media de los elementos de la 
// diagonal secundaria de una matriz.

constexpr int N = 3;
#include <iostream>

int main() {
  int C[N][N] = {{ 2, 3, 4},
                 { 2, 9, 4},
                 { 3, 3, 4}};

  double suma = 0; 

  for(int i = 0; i < N; i++) {
    suma += C[i][N - (i + 1)];
  }

  float media_diagonal_secundaria = (suma / N); 

  std::cout << "La media de los elementos de la diagonal secundaria de una matriz: " << media_diagonal_secundaria << std::endl; 
}