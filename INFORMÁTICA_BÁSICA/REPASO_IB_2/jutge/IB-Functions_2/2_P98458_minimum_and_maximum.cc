/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 2_P98458_minimum_and_maximum.cc
 * @author Steven
 * @date 2025-02-23
 * @brief Write a procedure to store in mn the  
 * minimum of a and b, and store in mx the maximum of a and b. 
 * @bug There are no known bugs
 */

#include <iostream>

void min_max(int a, int b, int& mn, int& mx) {
  if(a > b) {
    mx = a;
    mn = b;
  } else {
    mx = b;
    mn = a; 
  }
}

int main() {
  int a, b, mn, mx;  

  std::cin >> a >> b; 
  min_max(a, b, mn, mx);

  std::cout << "Maximo: " << mx << std::endl;
  std::cout << "Mínimo: " << mn << std::endl; 

  return 0;
}