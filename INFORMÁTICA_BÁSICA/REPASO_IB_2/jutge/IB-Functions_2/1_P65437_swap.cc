/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 1_P65437_swap.cc
 * @author Steven
 * @date 2025-02-23
 * @brief Write a procedure that swaps the value of its parameters
 * @bug There are no known bugs
*/

#include <iostream>

void swap2(int& a, int& b) {
  int aux; 
  aux = a; 
  a = b; 
  b = aux; 
}

int main() {
  int a, b; 

  std::cin >> a >> b; 

  swap2(a, b);

  std::cout << a << std::endl;
  std::cout << b << std::endl; 

  return 0;
}

void swap2(int& a, int& b); 