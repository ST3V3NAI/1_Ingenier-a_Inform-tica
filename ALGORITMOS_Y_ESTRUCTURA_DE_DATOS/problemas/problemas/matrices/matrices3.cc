//  Calcular la media de los elementos de la 
// diagonal secundaria de una matriz.

constexpr int N = 3;
#include <iostream>

int main() {
  int C[N][N] = {{ 2, 3, 4},
                 { 2, 9, 4},
                 { 3, 3, 4}};

  double media_diagonal_secundaria{0};

  for(int i = 0; i < N; i++) {
    media_diagonal_secundaria += C[i][N - 1 - i];
  }

  media_diagonal_secundaria = (media_diagonal_secundaria / N);

  std::cout << "La media de los elementos de la diagonal secundaria de una matriz: " << media_diagonal_secundaria << std::endl; 
}