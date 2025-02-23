// Contabilización de las ocurrencias de los elemento dentro de un vector
// que sean mayores o iguales que otro valor dado (variante de
// "Contabilización de las ocurrencias de un elemento dentro de un vector")

constexpr int N = 5; 
#include <iostream>

int main() {
  int v[N] = {1, 2, 3, 4, 5}; 
  int contador = 0; 
  int number{0};

  std::cout << "Digame un numero: ";
  std::cin >> number;

  for(int i = 0; i < N; i++) {
    if(v[i] >= number) {
      contador++;
    }
  }

  std::cout << "Hay " << contador << " numeros mayores o iguales que (" << number << ") en el vector";
}
