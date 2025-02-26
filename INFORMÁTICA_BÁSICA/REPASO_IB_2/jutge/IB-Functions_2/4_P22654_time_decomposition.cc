/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 4_P22654_time_decomposition.cc
 * @author Steven
 * @date 2025-02-23
 * @brief Write a procedure, that, given a quantity 
 * of seconds n, computes how many hours h, minutes m 
 * and seconds s it represents. That is, we must have s +
 *  60m + 3600h = n, with 0≤ s <60 and 0≤ m <60.
 * @bug There are no known bugs
 */

#include <iostream>

void decompose(int n, int& h, int& m, int& s) {
  h = (n / 3600);
  m = (n % 3600) / 60;
  s = (n % 3600) % 60;
}

int main() {
  int n, h, m, s; 

  std::cin >> n; 

  decompose(n, h, m, s);

  std::cout << h << " " << m << " " << s; 

  return 0; 
}

