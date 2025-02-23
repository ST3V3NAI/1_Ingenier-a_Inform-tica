// Búsqueda de un elemento dentro de un vector y devolución del índice en
// caso de encontrarlo (variante de "Búsqueda secuencial de un elemento")

constexpr int N = 5;
#include <iostream>

int main() {
  int v[N] = {1, 2, 3, 4, 5}; 
  int numero{0};
  bool encontrado{false};

  std::cout << "Que número quieres encotrar en el vector? " << std::endl;
  std::cin >> numero; 

  for(int i = 0; i < N; i++) {
    if(v[i] == numero) {
      encontrado = true;
      std::cout << "Hemos encontrado el vector en la posición " << i << " del vector"; 
      return 0;
    } 
  }


  std::cout << "No hemos encontrado el numero" << std::endl; 
}
