// Calcular la magintud de v, dados dos coordenadas

#include <iostream>
#include <cmath>
constexpr unsigned int N = 5; 

int main() {
  int A[N] = {3, 2, 1, 6, 5}; 
  float norma{0};

  for(int i = 0; i < N; i++) {
    norma += pow(A[i],2);
  }

  norma = sqrt(norma);
  std::cout << "La norma total es: " << norma; 

  return 0; 
}