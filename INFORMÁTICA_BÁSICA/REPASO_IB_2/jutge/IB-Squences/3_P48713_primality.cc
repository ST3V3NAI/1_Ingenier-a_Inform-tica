/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 3_P31111_primality.cc
 * @author Steven
 * @date 2025-03-23
 * @brief This program tells u after a given amount numbers, if the numbers are prime or not
 * @bug There are no known bugs
*/

#include <iostream>
#include <vector>

int main() {
  int number, tam_of_v; 

  std::cin >> tam_of_v;

  std::vector<int> v{tam_of_v};

  for(int i = 0; i < (tam_of_v); i++) {
    std::cin >> v[i];
  }

  for(int i = 0; i < tam_of_v; i++) {
    if(v[i] <= 1) {
      std::cout << v[i] << " is not prime" << std::endl;
    } else if (v[i] == 2 || v[i] == 3) {
      std::cout << v[i] << " is not prime" << std::endl;
    } else if (v[i] % 2 == 0 && v[i] != 2) {
      std::cout << v[i] << " is not prime" << std::endl;
    } else {
      std::cout << v[i] << " is prime" << std::endl;
    }
  }

  return 0;
}
