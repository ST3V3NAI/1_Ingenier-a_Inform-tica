/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file scalar_product_main.cc
 * @author Steven
 * @date 2025-03-16
 * @brief Programa cliente
 * @bug There are no known bugs
*/

#include "scalar_product.h"

int main() {
  std::vector<int> v1, v2;
  int tamanio1, tamanio2;
  double numeros;

  std::cout << "Dime el tamaño del vector 1:";
  std::cin >> tamanio1;
  std::cout << "Dime el tamaño del vector 2:";
  std::cin >> tamanio2;

  if(tamanio1 != tamanio2) {
    std::cerr << "Los tamaños no son iguales :D";
    return 0;
  }

  std::cout << "Digame los componentes del primer vector:";
  for(int i = 0; i < tamanio1; i++) {
      std::cin >> numeros;
      v1.push_back(numeros);
  }

  std::cout << "Digame los componentes del segundo vector:";
  for(int j = 0; j < tamanio2; j++) {
      std::cin >> numeros;
      v2.push_back(numeros);
  }

  std::cout << ScalarProduct(v1, v2); 

  return 0;
}