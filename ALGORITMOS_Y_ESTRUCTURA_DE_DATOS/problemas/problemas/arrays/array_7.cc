// Búsqueda del menor/mayor elemento de un vector y la posición donde se
// encuentra la última ocurrencia del menor/mayor, inicializando valores al
// primer elemento del vector (variante de "Búsqueda del menor/mayor
// elemento")

constexpr int N = 6; 

#include <iostream>
#include <cmath>

int main() {
  int v[N] = {1, 2, 3, 4, 5, 1};
  int contador_menor{0}, contador_mayor{0};
  int posMinimo{0}, posMaximo{0};
  float menor = INFINITY;
  float mayor = -INFINITY;

  for(size_t i = 0; i < N; i++) {
    if(v[i] > mayor) {
      mayor = v[i];
      posMaximo = i; 
    } else if (v[i] == mayor) {
      posMaximo = i; 
    }
    if(v[i] < menor) {
      menor = v[i];
      posMinimo = i;
    } else if (v[i] == menor) {
      posMinimo = i;
    }
  }

  for(size_t i = 0; i < N; i++) {
    if(v[i] == menor) {
      contador_menor++;
    }
    if(v[i] == mayor) {
      contador_mayor++;
    }
  }

  std::cout << "El menor elemento es: " << menor << std::endl;
  std::cout << "Las ocurrencias son: " << contador_menor << std::endl;
  std::cout << "Su última ocurrencia es en la posición: " << posMinimo << std::endl;
  
  std::cout << "El mayor elemento es: " << mayor << std::endl;
  std::cout << "Las ocurrencias son: " << contador_mayor << std::endl;
  std::cout << "Su última ocurrrencia es la posición: " << posMaximo << std::endl; 

  return 0; 
}

