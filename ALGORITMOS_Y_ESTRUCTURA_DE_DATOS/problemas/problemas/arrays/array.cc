// Dado un arreglo de N (const) núm enteros
// a) Con tal que son pares
// b) Determinar la suma de los elementos del arreglo que esten en las posiciones impares

#include <iostream>
constexpr unsigned int N = 5; 

int main() {
  int A[N] = {3,2,1,6,5}; 
  int numero_pares{0}, suma_pos_imp{0};

  for(int i = 0; i <= (N-1); i++) {
    if(A[i] % 2 == 0) {
      numero_pares++;
    } if (i % 2 != 0) {
      suma_pos_imp += A[i];
    }
  }

  std::cout << "La cantidad de numeros pares es: " << numero_pares << std::endl;
  std::cout << "La suma de las posiciones impares es: " << suma_pos_imp << std::endl; 

  return 0; 

}